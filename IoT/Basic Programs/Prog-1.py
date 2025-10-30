from machine import Pin
from time import sleep
import utime as t

L1 = Pin("LED", Pin.OUT)
L2 = Pin(2, Pin.OUT) 
L3 = Pin(3, Pin.OUT) 
while True:
    L1.toggle()
    L2.toggle()
    L3.toggle()
    t.sleep_ms(200)
