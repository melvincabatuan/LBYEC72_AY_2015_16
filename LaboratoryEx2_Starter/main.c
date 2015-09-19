/*============================================================*/
// 
//   Author: Melvin Cabatuan
//   Date Modified: September 18, 2015
//   Description:   Laboratory 2 - Array exercise 
//
/*============================================================*/

/* MODIFY THIS FILE FOR THE ACTIVITY */


#include <stdio.h>
#include <stdlib.h>
#include "mypolynomial.h"  // Polynomial Evaluation header
#include "mystatistics.h"  // Statistics operations header
#include "mymatrix.h"      // Matric operations header



int main(){

  /* DO NOT MODIFY THE INITIALIZATION */

  /// Polynomial initialization:
  int order; // polynomial order
  double coef[MAX_SIZE]; // polynomial coefficients
  double x; // polynomial x value


  /// Basic Statistics initialization:
  int count;
  double data[MAX_SIZE];
  int statOption;


  /// Matrix Operations
  int firstRows, firstCols;  // first matrix dimensions
  int secondRows, secondCols;// second matrix dimensions

  int matrixOption; // for Matrix menu switch
  int option;  // for Transpose and Modify options

  double first[MAX_ROWS][MAX_COLS]; // first matrix
  double second[MAX_ROWS][MAX_COLS];// second matrix
  double result[MAX_ROWS][MAX_COLS];// resulting matrix



  /// Main menu
  char choice; // main menu option

  while(1){
    puts("\n");
    puts("=====================================================");
    puts(" Main Menu:");
    puts("=====================================================");
    puts(" a: Polynomial Evaluation");
    puts(" b: Basic Statistics");
    puts(" c: Matrix Operations");
    puts(" e: Exit \n");
    printf(">> ");

    scanf(" %c", &choice);

    // Polynomial Evaluation
    if (choice == 'a' || choice == 'A'){
      puts("You chose Polynomial Evaluation ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */

      // Provide the implementation for the polynomial evaluation
      // Refer to the 'mypolynomial.h' for the usable function prototypes
      // Refer to the 'mypolynomial.c' for the function implementation

    }


    // Basic Statistics
    else if (choice == 'b' || choice == 'B'){
      puts("You chose Basic Statistics ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */

      // Provide the implementation for the basic statistics
      // Refer to the 'mystatistics.h' for the usable function prototypes
      // Refer to the 'mystatistics.c' for the function implementation


    } 



    // Basic Matrix Operations
    else if (choice == 'c' || choice == 'C'){
      puts("You chose Matrix Operations ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */

      // Provide the implementation for the matrix evaluation
      // Refer to the 'mymatrix.h' for the usable function prototypes
      // Refer to the 'mymatrix.c' for the function implementation


    } 



    else if (choice == 'e' || choice == 'E' || choice =='q' || choice =='Q'){
      puts("Exiting now...");
      break;
    }


    else
    {
      puts("Invalid Input... Please try again! (Type 'e' or 'q' to quit)");
    }

    getchar(); // Absorb the extra new line char

  } // END MAIN MENU WHILE-LOOP

  return EXIT_SUCCESS;
} // END MAIN
