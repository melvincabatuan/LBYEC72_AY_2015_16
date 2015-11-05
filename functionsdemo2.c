#include <stdio.h>
#include <stdlib.h>

#include "mydiv.h"

int main(){

  float scores[]={80, 95, 10, 30, 100}; 
  float result[MAX_SIZE];

  printf("*scores = %f\n", *scores);
  printf("scores[0] = %f\n", scores[0]);
  printf("scores[1] = %d\n", &scores[1]);

  myArrayDiv(scores, 10.0, result);

  puts(" ");
  int i;
  for(i = 0; i < MAX_SIZE; ++i){
    printf(" %f", result[i]);
  }
  puts(" ");
  // 12 / 4
  /*
  int a = 12;
  int b = 0;
  
  if (b != 0)
    printf("mydiv(%d, %d) = %d", a,b,mydiv(a,b));
  else
    puts("Division byu zero is invalid.");
  */
  return 0;
}
