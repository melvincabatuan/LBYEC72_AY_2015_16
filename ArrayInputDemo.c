#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTS 10


int main(){
  
  int coefficients[MAX_ELEMENTS];

  int i;

  puts(" Input the elements:\n ");
  for(i = 0; i < MAX_ELEMENTS; i++){
    printf("coefficients[%d] = ",i);
    scanf("%d", &coefficients[i]);
  }

  printf(" coefficients = [ ");
  for(i = 0; i < MAX_ELEMENTS; i++){
    printf("%d ", coefficients[i]);
  }
  puts("]");

  return EXIT_SUCCESS;
}
