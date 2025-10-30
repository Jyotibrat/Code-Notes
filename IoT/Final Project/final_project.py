from machine import Pin, I2C
import pcf8574
from gpio_lcd import GpioLcd
import time
import array as arr

lcd = GpioLcd(rs_pin=Pin(8),
              enable_pin=Pin(9),
              d4_pin=Pin(10),
              d5_pin=Pin(11),
              d6_pin=Pin(12),
              d7_pin=Pin(13))

start_btn = Pin(4, Pin.IN, Pin.PULL_UP)   # GP4  (pressed == 0)
defuse_btn = Pin(5, Pin.IN, Pin.PULL_UP)  # GP5  (pressed == 0)
L1 = Pin("LED", Pin.OUT)  # onboard LED (GP25)
L2 = Pin(2, Pin.OUT)      # external LED GP2
L3 = Pin(3, Pin.OUT)      # external LED GP3
leds = [L1, L2, L3]

m = arr.array('i', [0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7c, 0x07, 0x7f, 0x67])
i2c = I2C(id=0, scl=Pin(21), sda=Pin(20), freq=100000)
display1 = pcf8574.PCF8574(i2c, 0x20)  # first PCF (tens)
display2 = pcf8574.PCF8574(i2c, 0x21)  # second PCF (ones)
display1.port = 0x00
display2.port = 0x00

countdown_time = 10
DEBOUNCE_MS = 50

def display_message(line1, line2=""):
    lcd.clear()
    lcd.move_to(0, 0)
    lcd.putstr(line1)
    lcd.move_to(0, 1)
    lcd.putstr(line2)

def update_display(num):
    if num < 0: num = 0
    if num > 99: num = 99
    tens = num // 10
    ones = num % 10
    display1.port = m[tens]
    display2.port = m[ones]

def clear_display():
    display1.port = 0x00
    display2.port = 0x00

def all_leds(state):
    for l in leds:
        l.value(1 if state else 0)

def toggle_all_leds():
    for l in leds:
        l.toggle()

def wait_for_press(pin, debounce_ms=DEBOUNCE_MS):
    while pin.value() == 0:
        time.sleep(0.01)
    while True:
        if pin.value() == 0:
            t0 = time.ticks_ms()
            while time.ticks_diff(time.ticks_ms(), t0) < debounce_ms:
                if pin.value() == 1:
                    break
                time.sleep(0.005)
            else:
                return
        time.sleep(0.01)

def defuse_sequence():
    clear_display()
    all_leds(False)
    display_message("Bomb Defused", "You are Safe")
    update_display(0)
    time.sleep(2)

def boom_flicker():
    for i in range(14):
        if i % 2 == 0:
            display1.port = m[8]
            display2.port = m[8]
            all_leds(True)
        else:
            clear_display()
            all_leds(False)
        time.sleep(0.12)
    update_display(0)
    all_leds(False)

def countdown_bomb():
    display_message("TIME BOMB", "ACTIVATED!")
    time.sleep(1)

    for t in range(countdown_time, -1, -1):
        if defuse_btn.value() == 0:
            t0 = time.ticks_ms()
            while time.ticks_diff(time.ticks_ms(), t0) < DEBOUNCE_MS:
                if defuse_btn.value() == 1:
                    break
                time.sleep(0.005)
            else:
                defuse_sequence()
                return

        update_display(t)
        display_message("TICK TOCK...", f"Timer: {t:02d}")
        toggle_all_leds()
        time.sleep(1)

    display_message("BOOOOMMM!!", "")
    boom_flicker()
    display_message("GAME OVER", "Press to Restart")
    time.sleep(1.5)

display_message("TIME BOMB", "Press to Start")
update_display(countdown_time)
all_leds(False)
print("System Ready")

while True:
    wait_for_press(start_btn)
    countdown_bomb()

    while start_btn.value() == 0:
        time.sleep(0.05)

    display_message("TIME BOMB", "Press to Start")
    update_display(countdown_time)
    all_leds(False)
    time.sleep(0.1)