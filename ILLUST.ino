#include "ILLUST.h"

void TextPrint(float x, float y, float z){
    M5.Lcd.setTextSize(2);
    M5.Lcd.setTextColor( WHITE, BLACK );
    M5.Lcd.setCursor( 35, 40 );
    M5.Lcd.print("TEMP: ");
    M5.Lcd.print( x, 1 );
    M5.Lcd.print("'C");
    M5.Lcd.setCursor( 35, 100 );
    M5.Lcd.print("Humid: ");
    M5.Lcd.print( y, 1 );
    M5.Lcd.print("%");
    M5.Lcd.setCursor( 35, 160 );
    M5.Lcd.print("PRESS: ");
    M5.Lcd.print( z, 1 );
    M5.Lcd.print("hpa");
}

void TextIllust(float t, float h, float p){
     M5.Lcd.setTextSize(2);
     M5.Lcd.setTextColor( WHITE, BLACK );
     M5.Lcd.setCursor( 120, 30 );
     M5.Lcd.print("<- ");
     M5.Lcd.print( t, 1 );
     M5.Lcd.setCursor( 120, 60 );
     M5.Lcd.print( h, 1 );
     M5.Lcd.print("-> ");
     M5.Lcd.setCursor( 120, 90 );
     M5.Lcd.print( p, 1 );
}

void IllustPrint(){
    // tempreture
    M5.Lcd.setTextSize(2);
    M5.Lcd.fillCircle( 80, 180, 30, WHITE );
    M5.Lcd.fillRoundRect( 67, 15, 25, 150, 12, WHITE );
    M5.Lcd.fillCircle( 80, 180, 24, RED );
    M5.Lcd.setCursor( 67, 170 );
    M5.Lcd.setTextColor( BLACK, RED );
    M5.Lcd.print("'C");
    // himidity
    M5.Lcd.fillCircle( 240, 180, 30, WHITE );
    M5.Lcd.fillRoundRect( 227, 15, 25, 150, 12, WHITE );
    M5.Lcd.fillCircle( 240, 180, 24, BLUE );
    M5.Lcd.setCursor( 235, 170 );
    M5.Lcd.setTextColor( BLACK, BLUE );
    M5.Lcd.print("%");
}

void ArrowPrint(){
    M5.Lcd.setTextSize(2);
    M5.Lcd.fillRect( 140, 135, 42, 50, WHITE );
    M5.Lcd.fillTriangle( 125, 135, 195, 135, 160, 115, WHITE );
    M5.Lcd.fillTriangle( 125, 185, 195, 185, 160, 205, WHITE );
    M5.Lcd.setCursor( 145, 145 );
    M5.Lcd.setTextColor( BLACK, WHITE );
    M5.Lcd.print("hpa");
}

void LowerPrint(){
    M5.Lcd.fillRect( 140, 135, 42, 50, BLUE );
    M5.Lcd.fillTriangle( 125, 185, 195, 185, 160, 205, BLUE );
    M5.Lcd.setCursor( 145, 145 );
    M5.Lcd.setTextColor( BLACK, BLUE );
    M5.Lcd.print("hpa");
}

void HigherPrint(){
    M5.Lcd.fillRect( 140, 135, 42, 50, RED );
    M5.Lcd.fillTriangle( 125, 135, 195, 135, 160, 115, RED );
    M5.Lcd.setCursor( 145, 145 );
    M5.Lcd.setTextColor( BLACK, RED );
    M5.Lcd.print("hpa");
}

void Arrowclear(){
    M5.Lcd.setTextSize(2);
    M5.Lcd.fillRect( 140, 135, 42, 50, BLACK );
    M5.Lcd.fillTriangle( 125, 135, 195, 135, 160, 115, BLACK );
    M5.Lcd.fillTriangle( 125, 185, 195, 185, 160, 205, BLACK );
}
