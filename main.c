/*============================================================*/
// 
//   Author: Melvin Cabatuan
//   Date Modified: September 18, 2015
//   Description:   Laboratory 2 - Array exercise 
//
/*============================================================*/
#include <stdio.h>
#include <stdlib.h>
#include "mypolynomial.h"


int main(){

  /// Polynomial initialization:
  int order; // polynomial order
  double coef[MAX_SIZE]; // polynomial coefficients
  double x; // polynomial x value

  /// Main menu
  char choice;
  puts("\t Main Menu:");
  puts(" a: Polynomial");
  puts(" b: Statistics");
  puts(" e: Exit");

  while(1){

    scanf("%c", &choice);

    if (choice == 'a' || choice == 'A'){
      puts("You chose Polynomial...");
      order = getPolyOrder();
      getCoefficients(coef, order+1)
      printPoly(coef, order+1);
      x = getXVal();
      printf("The polynomial is equal to %0.2lf.", evaluatePoly(coef,order+1, x),;
    }
    else if (choice == 'b' || choice == 'B'){
      puts("You chose Formula 2");
    }
    else if (choice == 'e' || choice == 'E'){
      puts("Exiting now...");
      break;
    }
    else
    {
      puts("Invalid Input... Please try again!");
    }
    getchar();
  }
  return EXIT_SUCCESS;
}
