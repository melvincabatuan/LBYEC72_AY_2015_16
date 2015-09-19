/*============================================================*/
//
//    Author: Melvin Cabatuan
//    Date Modified: September 18, 2015
//    Brief Description: A simple implementation file for polynomial evaluation
//                       using arrays
//
/*============================================================*/

/* DO NOT MODIFY THIS PART FOR THE ACTIVITY */

#include "mypolynomial.h"


/*        FUNCTION IMPLEMENTATION     */

// Acquire the polynomial order; order <= MAX_SIZE - 1
int getPolyOrder(){
  int order;
  for(;;){
    printf("Give the order of the polynomial, (n < %d) :  \n", MAX_SIZE);
    printf(">> ");
    scanf(" %d", &order);
    if(order < MAX_SIZE && order >= 0)
      break;
    else
      puts("Invalid Input! Please try again...\n");
  }
  return order;
}

// Acquire the polynomial coefficients and save them into the double array
void getCoefficients(double coef[], int length){
  printf("Give the %d coefficients and constant: \n", length-1);
  int exponent = length;
  int i;
  for(i = 0; i < length; ++i){
    if (i == length - 1)
      printf(">> Constant: ");
    else 
      printf(">> Coefficient of x^%d = ", --exponent);
    scanf("%lf", &coef[i]);
  }
}


// Print the polynomial
void printPoly(double coef[], int length){
  int exponent;
  exponent = length;

  puts("");
  int i;
  for(i = 0; i < length; ++i){

    if (coef[i] > 0){
      printf(" + ");
    }
    else if (coef[i] < 0){
      printf(" - ");
    }
    else  // handle zero coefficient
      printf(" ");

    if(i < length-1)
      printf(" %0.2lfx^%d ", fabs(coef[i]), --exponent);
    else // handle constant
      printf(" %0.2lf ", fabs(coef[i]));
  }
  puts("");
}


// Acquire the x value
double getXVal(){
  double x;
  printf("\n>> x = ");
  scanf("%lf", &x);
  return x;
}


// Compute the polynomial with respect to the coefficients and the x value
double evaluatePoly(double coef[], int length, double x){
  double sum = 0;
  int i;
  for(i = 0; i < length; ++i){
    sum = sum*x + coef[i];
  }
  return sum;
}
