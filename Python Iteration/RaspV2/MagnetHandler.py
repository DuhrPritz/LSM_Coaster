#https://github.com/2kofawsome/pi74HC595
#!/usr/bin/env python3
import Mock.GPIO as GPIO
import time
from pi74HC595 import pi74HC595

GPIO.setmode(gpio.BOARD)
GPIO.setwarnings(False)
shifty = pi74HC595(7, 37, 22)
shifty = pi74HC595(4)
shiftyList = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
#LSM asci gui
def motor():
def setNorth():
    if 
    elif
def setSouth():
def setOff():
def pulse():