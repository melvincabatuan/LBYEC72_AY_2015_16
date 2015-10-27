#include "myremainder.h"


// Pass by value
int rem_by_value(int dividend, int divisor){

  return dividend % divisor;

}


// Pass by reference
void rem_by_ref(int *pdividend, int *pdivisor, int *presult){
  *presult = *pdividend % *pdivisor;

}


