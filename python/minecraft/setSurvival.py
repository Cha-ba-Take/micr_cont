import sys
sys.path.append('.')

import pydirectinput
import time

################################
sleep_time = 0.50
command = "/gamemode survival"
################################

def setTime():
    pydirectinput.press('enter')
    #for i in command:
    #    pydirectinput.press(i)
    pydirectinput.typewrite(command)
    pydirectinput.press('enter')
    

if __name__ == '__main__':
    setTime()