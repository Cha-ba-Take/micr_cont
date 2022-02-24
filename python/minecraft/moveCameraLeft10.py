import pydirectinput

import time

from minecraft import initCameraPos

################################
sleep_time = 0.05 #0.05
################################

def moveCameraLeft():
    left, top, right, bottom = initCameraPos.getWindowsRect()
    move = 10;
    x, y = pydirectinput.position()
    pydirectinput.moveRel(move * -1 , 0 , relative=False) #moveでも動く
    if( x <= 100):
        initCameraPos.initCameraPos()

if __name__ == '__main__':
    moveCameraLeft()