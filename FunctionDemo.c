#include <stdio.h>
#include <stdlib.h>

#include "myremainder.h"


int main(){    // int - return type ; main - function name

  int firstNumber = 13;
  int secondNumber = 5;

  int myarray[] = {1,2,3};

  printf("myarray[0] = %d\n", myarray[0]);
  printf("myarray[1] = %d\n", myarray[1]);
  printf("myarray[2] = %d\n", myarray[2]);

  printf("myarray = %d\n", myarray);

  int *ptr = myarray;

  *ptr = 30;

  printf("myarray[0] = %d\n", myarray[0]);
  printf("myarray[1] = %d\n", myarray[1]);
  printf("myarray[2] = %d\n", myarray[2]);

  
  int result = rem_by_value(firstNumber, secondNumber);

  printf("The remainder = % d\n", result);

  firstNumber = 14;

  rem_by_ref(&firstNumber, &secondNumber, &result);

  printf("The remainder = % d\n", result);

  
  return EXIT_SUCCESS; // 0 is int return value
}
