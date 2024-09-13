import serial
import time

ser=serial.Serial('COM6',9600)

while True:
        if ser.readable():
                cmd=ser.read()
                print(int.from_bytes(cmd, 'big'))
