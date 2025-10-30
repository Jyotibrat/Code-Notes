from time import sleep
from machine import Pin

L1 = Pin("LED", Pin.OUT)
while(1):
    L1.toggle()
    sleep(1)
