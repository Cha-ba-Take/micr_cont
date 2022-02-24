#include <stdio.h>
#include <unistd.h>
#include "control.h"

void character_rotate(){
    stopForward();
    cameraLeft();
}

int main(int argc, char *argv[]){
    init();          //Minecraftのゲームコントロール関数．ウィンドウサイズを設定する等を行う．
    //setTime();       //Minecraft上で時間を夜にしてくれる．
    exePython();     //画像処理プログラムを実行する関数．実行結果はdetectZombie関数で取得できる．
    //setSurvival();   //サバイバルモードにする．
    while(rk){       //無限loopする．rkはF12キーを押すと0となり，プログラムが停止します．
        int zombie_pos = detectZombie();
        int old_attack_data = zombie_pos % 10;
        if(zombie_pos == 0) character_rotate(); // 全部0の場合
        else {
            moveForward();
            if(zombie_pos % 10 == 1) attackLeft(); // 1桁目
            else {
                zombie_pos /= 10;
                if(zombie_pos % 10 == 1) cameraRight(); // 2桁目
                else {
                    zombie_pos /= 10;
                    if(zombie_pos % 10 == 1){ // 3桁目
                        attackLeft();
                        if(old_attack_data == 0) moveRight();
                    } else {
                        zombie_pos /= 10;
                        if(zombie_pos % 10 == 1) cameraLeft(); // 4桁目
                        else {
                            zombie_pos /= 10;
                            if(zombie_pos % 10 == 1) cameraRight(); // 5桁目
                            else {
                                zombie_pos /= 10;
                                if(zombie_pos % 10 == 1) attackLeft(); // 6桁目
                                else {
                                    zombie_pos /= 10;
                                    if(zombie_pos % 10 == 1) cameraLeft(); // 7桁目
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}