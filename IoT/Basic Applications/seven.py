import pcf8574
from machine import I2C, Pin
import array as arr
import machine
import time

count=2


m = arr.array('i', [0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x67])
 
i2c = I2C(id=0,scl=Pin(21),sda=Pin(20),freq=100000)
pcf = pcf8574.PCF8574(i2c, 0x21)
pcf.port =0x00
pcf = pcf8574.PCF8574(i2c, 0x20)
pcf.port =0x00

while(1):
       
        pcf = pcf8574.PCF8574(i2c, 0x21)
        pcf.port =m[int(count)]
        print(count)
        time.sleep(1)
