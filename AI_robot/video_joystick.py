from myjoystickcamapp import MyJoystickCamApp

def cbJoyPos(joystickPosition, app=None) :
     posX, posY = joystickPosition
     
     speed = 0
     if app!=None : speed = app.getSpeed()
     print(speed,end=' ')
     
     #자동차 방향
     right, left = -1, -1
     if posY < -0.5:
             right, left = 1,1
             print('brake')
     elif posY > 0.15 :
        if -0.15 <= posX <= 0.15 :
                right, left = 0, 0
                print('forward')
        elif posX < -0.15 :
                right, left = 1, 0
                print('left')
        elif posX > 0.15 :
                right, left = 0, 1
                print('right')
     else : # -0.5 <= posY <= 0.15
            print('stop driving')
            
myJoystickCamApp = MyJoystickCamApp(cbJoyPos=cbJoyPos)
myJoystickCamApp.run()
