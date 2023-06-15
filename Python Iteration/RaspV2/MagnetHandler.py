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
#def motor():
def setNorth(cmd):
    if cmd == "a n":
        shiftyList[0:1] = 0 , 1
    elif cmd == "b n":
        shiftyList[2:3] = 0 , 1
    elif cmd == "c n":
        shiftyList[4:5] = 0 , 1
    elif cmd == "d n":
        shiftyList[6:7] = 0 , 1
    elif cmd == "e n":
        shiftyList[8:9] = 0 , 1
    elif cmd == "f n":
        shiftyList[10:11] = 0 , 1
    elif cmd == "g n":
        shiftyList[12:13] = 0 , 1
    elif cmd == "h n":
        shiftyList[14:15] = 0 , 1
    elif cmd == "i n":
        shiftyList[16:17] = 0 , 1
    elif cmd == "j n":
        shiftyLisk[18:19] = 0 , 1
    elif cmd == "k n":
        shiftyList[20:21] = 0 , 1
    elif cmd == "l n":
        shiftyList[22:23] = 0 , 1
    elif cmd == "m n":
        shiftyList[24:25] = 0 , 1
    elif cmd == "n n":
        shiftyList[26:27] = 0 , 1
    elif cmd == "o n":
        shiftyList[28:29] = 0 , 1
    elif cmd == "p n":
        shiftyList[30:31] = 0 , 1
    shifty.set_by_list(shiftyList)

def setSouth(cmd):
    if cmd == "a s":
        shiftyList[0:1] = 1 , 0
    elif cmd == "b s":
        shiftyList[2:3] = 1 , 0
    elif cmd == "c s":
        shiftyList[4:5] = 1 , 0
    elif cmd == "d s":
        shiftyList[6:7] = 1 , 0
    elif cmd == "e s":
        shiftyList[8:9] = 1 , 0
    elif cmd == "f s":
        shiftyList[10:11] = 1 , 0
    elif cmd == "g s":
        shiftyList[12:13] = 1 , 0
    elif cmd == "h s":
        shiftyList[14:15] = 1 , 0
    elif cmd == "i s":
        shiftyList[16:17] = 1 , 0
    elif cmd == "j s":
        shiftyLisk[18:19] = 1 , 0
    elif cmd == "k s":
        shiftyList[20:21] = 1 , 0
    elif cmd == "l s":
        shiftyList[22:23] = 1 , 0
    elif cmd == "m s":
        shiftyList[24:25] = 1 , 0
    elif cmd == "n s":
        shiftyList[26:27] = 1 , 0
    elif cmd == "o s":
        shiftyList[28:29] = 1 , 0
    elif cmd == "p s":
        shiftyList[30:31] = 1 , 0
    shifty.set_by_list(shiftyList)

def setOff(cmd):
    if cmd == "a o":
        shiftyList[0:1] = 0 , 0
    elif cmd == "b o":
        shiftyList[2:3] = 0 , 0
    elif cmd == "c o":
        shiftyList[4:5] = 0 , 0
    elif cmd == "d o":
        shiftyList[6:7] = 0 , 0
    elif cmd == "e o":
        shiftyList[8:9] = 0 , 0
    elif cmd == "f o":
        shiftyList[10:11] = 0 , 0
    elif cmd == "g o":
        shiftyList[12:13] = 0 , 0
    elif cmd == "h o":
        shiftyList[14:15] = 0 , 0
    elif cmd == "i o":
        shiftyList[16:17] = 0 , 0
    elif cmd == "j o":
        shiftyLisk[18:19] = 0 , 0
    elif cmd == "k o":
        shiftyList[20:21] = 0 , 0
    elif cmd == "l o":
        shiftyList[22:23] = 0 , 0
    elif cmd == "m o":
        shiftyList[24:25] = 0 , 0
    elif cmd == "n o":
        shiftyList[26:27] = 0 , 0
    elif cmd == "o o":
        shiftyList[28:29] = 0 , 0
    elif cmd == "p o":
        shiftyList[30:31] = 0 , 0
    elif cmd == "off":
        shiftyList = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
    shifty.set_by_list(shiftyList)

def pulse(cmd):
    tDelay = 250
