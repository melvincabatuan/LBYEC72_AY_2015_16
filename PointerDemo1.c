#include <stdio.h>
#include <stdlib.h>


int addNumbers(int firstNum, int secondNum){
  return firstNum + secondNum;
}


void swapNumbers(int *pFirstNum, int *pSecondNum){
  int temp = *pFirstNum;
  *pFirstNum = *pSecondNum;
  *pSecondNum = temp;
}


int main(){
  int x = 9;
  printf("%d\n", x);
  printf("%p\n", &x);

  // Declare an integer pointer
  int *pX;
  printf("pX = %d\n", pX);
  printf("%p\n", &pX);

  // Point pointer pX to variable x
  pX = &x;

  printf("pX = %p\n", pX);

  // Print the x value using pointer pX
  printf("x = %d\n", *pX); // dereference


  // Assign value of x to y
  int y = *pX;
  printf("y = %d\n", y);


  // Assign 12 to x using a pointer
  *pX = 12;
  printf("x = %d\n", x);
  printf("y = %d\n", y);

  // Use addNumber() function
  printf("addNumbers(x, y) = %d\n", addNumbers(x,y));


  swapNumbers(&x, &y);
  printf("x = %d\n", x);
  printf("y = %d\n", y);
  
  return 0;
}
