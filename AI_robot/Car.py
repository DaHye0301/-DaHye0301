from PyQt5.QtWidgets import *
from PyQt5.Qt import Qt
from myjoystick import MyJoystick

def cbJoyPos(joystickPosition, app=None) :
        print(joystickPosition)
        
app = QApplication([])

mw= QMainWindow()
mw.setWindowTitle('RC Car Joystick')
mw.setGeometry(100,100,300,200)

cw=QWidget()
cw.setStyleSheet("background-color:yellow;")
mw.setCentralWidget(cw)

ml = QGridLayout()
cw.setLayout(ml)

video=QLabel('Video here~')
ml.addWidget(video,0,0)

joystick=MyJoystick(cbJoyPos=cbJoyPos)
ml.addWidget(joystick,1,0)

speedbar=QSlider(Qt.Horizontal)
speedbar.setRange(0,100)
speedbar.setTickInterval(10)
speedbar.setTickPosition(QSlider.TicksBelow)
speedbar.valueChanged.connect(lambda value: print(value))
ml.addWidget(speedbar,2,0)
app.aboutToQuit.connect(app.deleteLater)

mw.show()

app.exec_()