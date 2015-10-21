/*============================================================*/
//
//    Author: Melvin Cabatuan
//    Date Modified: September 18, 2015
//    Brief Description: A simple implementation file for statistics
//                       using arrays
//
/*============================================================*/

/* DO NOT MODIFY THIS PART FOR THE ACTIVITY */

#include "mystatistics.h"


/*       FUNCTION IMPLEMENTATION    */

// Acquire the number of data
int getNumData(){
  int count;
  for(;;){
    printf("Give the number of data, (n <= %d) :  \n", MAX_SIZE);
    printf(">> ");
    scanf(" %d", &count);
    if(count <= MAX_SIZE && count >= 0)
      break;
    else
      puts("Invalid Input! Please try again...\n");
  }
  return count;
}

// Acquire data
void getData(double data[], int length){
  printf("Give %d data values: \n", length);

  int i;
  for(i = 0; i < length; ++i){
    printf(">> data[%d] = ", i);
    scanf("%lf", &data[i]);
  }
}

// Display menu and get selection
int getStatOperation(){
  int option;
  puts("\n");
  puts("=====================================================");
  puts(" Statistics Menu:");
  puts("=====================================================");
  puts(" 1: Compute the sum");
  puts(" 2: Compute the mean");
  puts(" 3: Compute the population standard deviation");
  puts(" 4: Modify data");
  puts(" 5: Display data");
  puts(" 99: Return to Main Menu\n");
  printf(">> ");
  scanf("%d", &option);
  return option;
}

//  Display data
void printData(double data[], int length){
  int i;
  for(i = 0; i < length; ++i){
    printf(">> data[%d] = %0.2lf\n", i, data[i]);
  }
}


// Compute sum
double computeSum(double data[], int length){
  double sum = 0.0;
  int i;
  for(i = 0; i < length; ++i){
    sum = sum + data[i];
  }
  return sum;
}

// Compute mean
double computeMean(double data[], int length){
  return computeSum(data, length)/length;
}

// Compute standard deviation
double computeStdDev(double data[], int length){
  double sum = 0.0;
  double mean = computeMean(data, length);
  int i;
  for(i = 0; i < length; ++i){
    sum = sum + pow((data[i]-mean), 2);
  }
  return sqrt(sum/length);
}
