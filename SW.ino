#include "sw.h"

#define SW0 39
#define SW1 38
#define SW2 37

#define TACTSW_ON    0
#define TACTSW_OFF   1

#define CHATTER_TIME  10    // msec

int iPreSw0;      // previous physical status of the tact switch
int iPreSw1;

void Sw_Init(){
  iPreSw0 = TACTSW_OFF;
  iPreSw1 = TACTSW_OFF;

  pinMode( SW0, INPUT );
  pinMode( SW1, INPUT );
  pinMode( SW2, INPUT );

  return;
}

int Sw_IsSw0(){
  int iCurSw;
  int iRetval = SW_OFF;
  
  iCurSw = digitalRead( SW0 );
  if( iCurSw == TACTSW_ON ){
    if( iPreSw0 == TACTSW_OFF){
      iRetval = SW_PUSHED;
    }
  }

  iPreSw0 = iCurSw;
  delay( CHATTER_TIME );

  return iRetval;
}

int Sw_IsSw1(){
  int iCurSw;
  int iRetval = SW_OFF;
  
  iCurSw = digitalRead( SW1 );
  if ( iCurSw == TACTSW_ON ) {
      if ( iPreSw1 == TACTSW_OFF ) {
          iRetval = SW_PUSHED;
      }
  }

  iPreSw1 = iCurSw;
  delay( CHATTER_TIME );

  return iRetval;
}
