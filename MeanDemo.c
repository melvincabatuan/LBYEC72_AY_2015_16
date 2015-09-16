/***********************************************/
// Author: Melvin Cabatuan
// Date modified: September 16, 2015
// Description: Array input demo and mean computation
/**********************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA 10


float computeMean(int src[MAX_DATA], int numValues){

  float average = 0.0;
  float sum = 0.0;
  
  int i;  
  for(i = 0; i < numValues; i++)
    sum =sum + src[i];

  average = sum/numValues;

  return average;
}


int main(){
  
  int data[MAX_DATA];
  int numValues;
  float average;
  
  puts("How many values are there?");
  scanf("%d", &numValues);

  printf("Please enter %d values: \n", numValues);
  int i = 0;
  for(i = 0; i < numValues; i++){
    scanf("%d", &data[i]);
  }

  puts("You inputted the ff.:");

  for(i = 0; i < numValues; i++){
    printf("%d ", data[i]);
  }
  puts("");

  average = computeMean(data, numValues);

  printf("The mean is %0.2f.", average);
  return EXIT_SUCCESS;
}
