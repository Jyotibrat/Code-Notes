from machine import Pin
import utime
import _thread

led1 = Pin(2, machine.Pin.OUT)
led2 = Pin(3, machine.Pin.OUT)

sLock = _thread.allocate_lock()
def CoreTask():
    while True:
        sLock.acquire()
        print("Entered into the 2nd Thread")
        utime.sleep(1)
        led2.high()
        print("Led 2 turned on")
        utime.sleep(1)
        led2.low()
        print("Led 2 turned off")
        utime.sleep(1)
        print("Exiting from the 2nd Thread")
        utime.sleep(1)
        sLock.release()
_thread.start_new_thread(CoreTask, ())

while True:
    sLock.acquire() # Acquire the semaphore lock
    print("Entered into the main Thread")
    led1.toggle()
    utime.sleep(1)
    print("Led 1 started to toggle.")
    utime.sleep(1)
    print("Exiting from the main Thread")
    utime.sleep(1)
    sLock.release() # Release the semaphore lock

