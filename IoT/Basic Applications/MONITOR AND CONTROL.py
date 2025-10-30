import time
import network
from machine import Pin
import BlynkLib
 
wlan = network.WLAN(network.STA_IF)
wlan.active(True)
wlan.connect("sensor1","raspberry")
 
BLYNK_AUTH = 'Md56-IqOSCInqV84Y9nG4RG3lA73Ba1w'
count =0
# Wait for network connection
wait = 10
while wait > 0:
    if wlan.status() < 0 or wlan.status() >= 3:
        break
    wait -= 1
    print('waiting for connection...')
    time.sleep(1)
 
# Handle connection error
if wlan.status() != 3:
    raise RuntimeError('network connection failed')
else:
    print('connected')
    ip = wlan.ifconfig()[0]
    print('IP: ', ip)
 
# Connect to Blynk
blynk = BlynkLib.Blynk(BLYNK_AUTH)
 
# Initialize the relay pins
relay1_pin = Pin(2, Pin.OUT)
relay2_pin = Pin(3, Pin.OUT)
relay3_pin = Pin(6, Pin.OUT)
relay4_pin = Pin(7, Pin.OUT)
 
# Register virtual pin handler
@blynk.on("V1") #virtual pin V1
def v1_write_handler(value): #read the value
    if int(value[0]) == 1:
        relay1_pin.value(1) #turn the relay1 on
    else:
        relay1_pin.value(0) #turn the relay1 off
 
@blynk.on("V2") #virtual pin V2
def v2_write_handler(value): #read the value
    if int(value[0]) == 1:
        relay2_pin.value(1) #turn the relay2 on
    else:
        relay2_pin.value(0) #turn the relay2 off
 
@blynk.on("V3") #virtual pin V3
def v3_write_handler(value): #read the value
    if int(value[0]) == 1:
        relay3_pin.value(1) #turn the relay3 on
    else:
        relay3_pin.value(0) #turn the relay3 off
 

 
while True:
    count =count +1
    blynk.virtual_write(4, count)
    blynk.virtual_write(5, 22)
    blynk.virtual_write(6, 33)
    blynk.run()
    time.sleep(0.2)