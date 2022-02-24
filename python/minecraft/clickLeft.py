import pydirectinput

import time

################################
sleep_time = 0.01
################################

def clickLeft():
    pydirectinput.leftClick()
    time.sleep(sleep_time)

if __name__ == '__main__':
    clickLeft()