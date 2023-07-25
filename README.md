# THPsensor
M5Stackとセンサーユニットを使用した温度湿度気圧計の作成<br>
シンプルでわかりやすいUIでなんでもいいから制作してみたい気持ちから作成しました。
  
# Requirement

M5Stackと専用温度湿度気圧センサーユニットを使用する。<br>
開発環境として、Arduinoを利用する。<br>
  
以下のライブラリを使用しました。<br>
"M5Stack.h" : M5Stackハードの操作のため<br>
"UNIT_ENV.h" : 温度湿度気圧センサーの値操作のため<br>
  
# DEMO
  
![Screenshot_20230722-114102](https://github.com/Nyaa03/THPsensor/assets/138284324/d6aebc92-43c1-4879-bbc3-63337e87a48c)
↑”ILLUST.ino"による視覚的なUI表示
  
![Screenshot_20230722-114050](https://github.com/Nyaa03/THPsensor/assets/138284324/bff6cceb-ed45-4c80-9d26-31518eff1d88)
↑数値のみによる表示
  
# Features
ボタン操作で温度湿度気圧の計測、表示方法の変更<br>
Sw0 : UI表示切り替え<br>
Sw1 : 温度湿度気圧の計測<br>
  
視覚的にわかりやすいシンプルなUIの作成<br>
・ 前回の測定から気圧の差が低い時には青色で下矢印表示、高い時には赤色で上矢印表示<br>
・ 温度と湿度をわかりやすく判別できるように、イラストで表示<br>

ソースコード
・それぞれの機能に分けて、コードを書きました。表示機能はILLUSTファイルに、ボタン機能はSWファイルに、全体のシステムはTHP_sensorファイルに作成しました。
