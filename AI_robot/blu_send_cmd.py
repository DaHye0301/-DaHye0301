import serial

ser=serial.Serial('COM6',9600)

while True:
        cmd = input('>> ')
        print(cmd)
        ser.write(cmd.encode('utf-8'))