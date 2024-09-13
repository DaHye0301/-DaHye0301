from myjoystickapp import MyJoystickApp

def cbJoyPos(joystickPosition, app=None) :
        print(joystickPosition, app!=None and app.speed)
        
myJoystickApp = MyJoystickApp(cbJoyPos=cbJoyPos)
myJoystickApp.run()
