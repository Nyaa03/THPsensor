# THPsensor
M5Stackとセンサーユニットを使用した温度湿度気圧計の作成

#Requirement

M5Stackと専用温度湿度気圧センサーユニットを使用する。
開発環境として、Arduinoを利用する。

以下のライブラリを使用しました。
"M5Stack.h" : M5Stackハードの操作のため
"UNIT_ENV.h" : 温度湿度気圧センサーの値操作のため

#DEMO

![Screenshot_20230722-114102](https://github.com/Nyaa03/THPsensor/assets/138284324/d6aebc92-43c1-4879-bbc3-63337e87a48c)
↑”ILLUST.ino"による視覚的なUI表示

![Screenshot_20230722-114050](https://github.com/Nyaa03/THPsensor/assets/138284324/bff6cceb-ed45-4c80-9d26-31518eff1d88)
↑数値のみによる表示

#Features
ボタン操作で温度湿度気圧の計測、表示方法の変更
Sw0 : UI表示切り替え
Sw1 : 温度湿度気圧の計測

視覚的にわかりやすいシンプルなUIの作成
・ 前回の測定から気圧の差が低い時には青色で下矢印表示、高い時には赤色で上矢印表示
・ 温度と湿度をわかりやすく判別できるように、イラストで表示
