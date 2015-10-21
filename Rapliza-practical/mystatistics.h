/*============================================================*/
//
//    Author: Melvin Cabatuan
//    Date Modified: September 18, 2015
//    Brief Description: A simple header file for statistics
//                       using arrays
//
/*============================================================*/

/* DO NOT MODIFY THIS FILE FOR THE ACTIVITY */

#ifndef MY_STATISTICS_H_
#define MY_STATISTICS_H_

#include<stdio.h>
#include<math.h>

#define MAX_SIZE 10


/*       FUNCTION PROTOTYPES    */

// Acquire the number of data
  int getNumData();

// Acquire data values
  void getData(double data[], int length);

// Display menu and get selection
int getStatOperation();

// Display the data
void printData(double data[], int length);

// Compute sum
  double computeSum(double data[], int length);

// Compute mean
  double computeMean(double data[], int length);

// Compute standard deviation
  double computeStdDev(double data[], int length);

#endif
