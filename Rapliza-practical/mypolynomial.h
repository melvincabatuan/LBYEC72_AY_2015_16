/*============================================================*/
//
//    Author: Melvin Cabatuan
//    Date Modified: September 18, 2015
//    Brief Description: A simple header file for polynomial evaluation
//                       using arrays
//
/*============================================================*/

/* DO NOT MODIFY THIS FILE FOR THE ACTIVITY */

#ifndef MY_POLYNOMIAL_H_
#define MY_POLYNOMIAL_H_

#include<stdio.h>
#include<math.h>

#define MAX_SIZE 10


/*          FUNCTION PROTOTYPES    */

// Acquire the polynomial order; order <= MAX_SIZE - 1
int getPolyOrder();

// Acquire the polynomial coefficients and save them into the double array
void getCoefficients(double coef[], int length);

// Print the polynomial
void printPoly(double coef[], int length);

// Acquire the x value
double getXVal();

// Compute the polynomial with respect to the coefficients and the x value
double evaluatePoly(double coef[], int length, double x);

#endif
