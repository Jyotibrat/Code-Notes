from machine import Pin, ADC 
import utime 

POT_Value = ADC(28) 
conversion_factor = 3.3/(65536) 

while True:
  print(POT_Value.read_u16())
  print(POT_Value.read_u16() * conversion_factor) 
  utime.sleep(0.1)