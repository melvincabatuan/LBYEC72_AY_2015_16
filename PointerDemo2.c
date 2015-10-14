#include <stdio.h>
#include <stdlib.h>


int addNumbers(int firstNumber, int secondNumber){
  return firstNumber + secondNumber; 
}

void swapNumbers(int *pfirstNumber, int *psecondNumber){
  int temp = *pfirstNumber;
  *pfirstNumber = *psecondNumber;
  *psecondNumber = temp;
}


void wrongSwap(int a, int b) {
  printf("a = %d, b = %d\n", a,b);

   int temp;
   temp = b;
   b = a;
   a = temp;

   printf("a = %d, b = %d\n", a,b);
}



int main(){
  
  int x = 21050;
  int y = 12;
  printf("The value of x = %d\n", x);
  printf("Address of x is %p.\n", &x);

  // Declare a pointer
  int* ptr;
  printf("The value of ptr = %d\n", ptr);
  printf("Address of ptr is %p.\n", &ptr);

  // Points ptr to x
  ptr = &x;
  printf("The value of ptr = %p\n", ptr);
   printf("Address of ptr is %p.\n", &ptr);

   // Print x using the pointer ptr
   printf("x = %d.\n", *ptr);//dereferencing


   // Modify x using the pointer
    *ptr = 3;

   // Print x 
   printf("x = %d.\n", x);//dereferencing


   // Call addNumbers
   printf("addNumbers(x, x) = %d\n", addNumbers(x, x));
   
   swapNumbers(&x, &y);  
   // wrongSwap(x, y);
   
   printf("x = %d\n", x);  // 12
   printf("y = %d\n", y);  // 3

  
   
  return 0;
}

