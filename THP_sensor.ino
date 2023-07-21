#include <M5Stack.h>
#include <UNIT_ENV.h>
#include "SW.h"
#include "ILLUST.h"

#define TEXT 0
#define ILLUST 1

SHT3X sht30;
QMP6988 qmp6988;

static float temp;
static float humid;
static float pressure;
static float Prepressure;
static int Mode;


void setup() {
    M5.begin();
    Wire.begin();
    Sw_Init();
    qmp6988.init();
    temp = 0.0;
    humid = 0.0;
    pressure = 0.0;
    Prepressure = 0.0;
    Mode = TEXT;
}

void loop() {
    switch ( Mode ) {
        case TEXT:
            M5.Lcd.clear(BLACK);
            TextPrint(temp, humid, pressure);
            while ( Mode == TEXT ) {
                if ( Sw_IsSw1() == SW_PUSHED ) {
                    pressure = qmp6988.calcPressure() * 0.01;
                    if ( sht30.get() == 0 ) {
                        temp = sht30.cTemp;
                        humid = sht30.humidity;
                    } else {
                        temp = 0;
                        humid = 0;
                    }
                    TextPrint(temp, humid, pressure);
                }
                if ( Sw_IsSw0() == SW_PUSHED ) {
                    Mode = ILLUST;
                }
            }
            break;
        case ILLUST:
            M5.Lcd.clear(BLACK);
            IllustPrint();
            ArrowPrint();
            
            while ( Mode == ILLUST ) {
                if ( Sw_IsSw1() == SW_PUSHED ) {
                    Arrowclear();
                    TextIllust(temp, humid, pressure);
                    pressure = qmp6988.calcPressure() * 0.01;
                    if ( sht30.get() == 0 ) {
                        temp = sht30.cTemp;
                        humid = sht30.humidity;
                    } else {
                        temp = 0;
                        humid = 0;
                    }
                    IllustPrint();
                    M5.Lcd.fillRoundRect( 70, 18, 19, 150, 12, RED );
                    M5.Lcd.fillRoundRect( 70, 18, 19, ( 150 - ( 1.25 * temp ) - 10 ), 9, WHITE );
                    M5.Lcd.fillRoundRect( 230, 18, 19, 150, 12, BLUE );
                    M5.Lcd.fillRoundRect( 230, 18, 19, ( 150 - ( 1.6 * humid ) + 5 ), 9, WHITE );
                    if ( Prepressure == 0 || pressure == Prepressure ) {
                        ArrowPrint();
                    } else if ( pressure < Prepressure ) {
                        LowerPrint();
                    } else if ( pressure > Prepressure ) {
                        HigherPrint();
                    }
                    Prepressure = pressure;
                }
                if ( Sw_IsSw0() == SW_PUSHED ) {
                    Mode = TEXT;
                }
            }
            break;
        default:
            break;
    }
}
