import pydirectinput

import time

from minecraft import initCameraPos

################################
sleep_time = 0.01 # 0.01
################################

def moveCameraRight():
    left, top, right, bottom = initCameraPos.getWindowsRect()
#    move = (int)((right - left) / 29 + 0.9)
    move = 10
    x, y = pydirectinput.position()
    pydirectinput.moveRel(move , 0 , relative=False) #moveでも動く
    if( x >= 800):
        initCameraPos.initCameraPos()
    time.sleep(sleep_time)
#    x, y = pydirectinput.position()
#    print({x} , {y})

if __name__ == '__main__':
    moveCameraRight()