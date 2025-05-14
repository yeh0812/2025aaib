//week13_5_sound 要播放音樂 
//要先安裝 Sketch-Library-Manage Libraries...
//找sound 下載 Sound 的函式 點 Install
import proccessing.sound.*;//使用聲音的外掛
SoundFile mySound;//宣告變數 mySound它是SoundFile
void setup(){
 size(400,400);//視窗大小 400x400
 mySound = new SoundFile(this,"Intro Song_Final.mp3");
 mySound.play();//再播放剛剛讀入的聲音檔
}
void draw(){
  
}//裡面是空的畫圖,要寫它
