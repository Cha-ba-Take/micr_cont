#include <stdio.h>
#include <unistd.h>
#include "control.h"

int main(int argc, char *argv[]){
    init();          //Minecraftのゲームコントロール関数．ウィンドウサイズを設定する等を行う．
    setTime();       //Minecraft上で時間を夜にしてくれる．
    exePython();     //画像処理プログラムを実行する関数．実行結果はdetectZombie関数で取得できる．
    setSurvival();   //サバイバルモードにする．
    while(rk){       //無限loopする．rkはF12キーを押すと0となり，プログラムが停止します．
        /*ここからBotプログラムを書く*/

           moveForward(); 

        /*ここまでBotプログラムを書く*/
           sleep(0.1);
    }
}