#include "mydiv.h"


//Pass-by-reference
void myArrayDiv(float src[MAX_SIZE], float divisor, float result[MAX_SIZE]){
  int i;
  for(i = 0; i < MAX_SIZE; ++i)
    result[i] = src[i]/divisor;
}


// Pass-by-value
int mydiv(int firstNum, int secondNum){
  if (secondNum == 0){
    printf("Division by zero is invalid!");
    return;
  }
  else
    return firstNum / secondNum; 
}
