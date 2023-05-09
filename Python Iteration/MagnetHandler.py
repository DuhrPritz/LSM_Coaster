#https://microdigisoft.com/interfacing-74hc595-serial-shift-register-with-raspberry-pi/

import RPi.GPIO as GPIO
import time
                                                       
#GPIO Mode (BOARD / BCM)
GPIO.setmode(GPIO.BCM)
LATCH = 16                                           # GPIO 16 
CLK = 20                                             # GPIO 20 
dataBit = 21                                         # GPIO 21 

GPIO.setup(LATCH, GPIO.OUT)               
GPIO.setup(CLK, GPIO.OUT)                     
GPIO.setup(dataBit, GPIO.OUT)

GPIO.output(20, 0)                                    # Setup IO
GPIO.output(CLK, 0)
def pulseCLK():
    GPIO.output(CLK, 1)                               # time.sleep(.01)    
    GPIO.output(CLK, 0)
    return
def serLatch():
    GPIO.output(LATCH, 1)                            # time.sleep(.01)
    GPIO.output(LATCH, 0)
    return
def ssrWrite(value):                                 # MSB out first!
for  x in range(0,8):
         temp = value & 0x80
         if temp == 0x80:  
           GPIO.output(dataBit, 1)                   # data bit HIGH
        else:
            GPIO.output(dataBit, 0)            
            pulseCLK()        
            value = value << 0x01                        # shift left
            serLatch()                                   # output byte
    return 
def convBinary(value):                               # convert an 8-bit number to a binary string
    binaryValue = '0b'
    for  x in range(0,8):
        temp = value & 0x80
        if temp == 0x80:
           binaryValue = binaryValue + '1'
        else:
            binaryValue = binaryValue + '0'
            value = value << 1
    return binaryValue


while 1:
    temp = 1
    for j in range(0, 8 ):
        ssrWrite(temp)
        temp = temp << 1
        time.sleep(.2)

    for j in range(0, 8 ):
        temp = temp >> 1
        ssrWrite(temp)
        time.sleep(.2)  
