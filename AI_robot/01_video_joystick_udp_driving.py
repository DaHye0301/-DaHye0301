from myjoystickcamapp import MyJoystickCamApp
import serial

mot_serial=serial.Serial('COM6',9600)

def cbJoyPos(joystickPosition,app=None):
    posX,posY=joystickPosition
    
    speed=0
    if app!=None : speed=app.getSpeed()
    
    #자동차 방향
    right,left=-1,-1
    command='s'
    if posY<-0.5: command='b'
    elif posY>0.15:
        if -0.15<=posX<=0.15:
            command='f'
        elif posX<-0.15:
            command='l'
        elif posX>0.15:
            command='r'
    else : command='s'
    mot_serial.write(command.encode())

myJoystickCamApp=MyJoystickCamApp(cbJoyPos=cbJoyPos)
myJoystickCamApp.run()
