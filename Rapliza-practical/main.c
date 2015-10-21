/*============================================================*/
// 
//   Author: Annamitz A. Rapliza
//   Date Modified: October 20, 2015
//   Description:   Practical Exam
//
/*============================================================*/

/* MODIFY THIS FILE FOR THE ACTIVITY */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Include files */
#include "mystring.h"      // String header file
#include "mypolynomial.h"  // Polynomial Evaluation header
#include "mystatistics.h"  // Statistics operations header
#include "mymatrix.h"      // Matric operations header
#include "basiccalculator.h" // Basic calculator header, +,-,*,/,%


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

  /// String initializations
  char datastorage[NUM_OF_STRINGS][BUFFER_SIZE];
  int length, index;
  char query[BUFFER_SIZE];

  /// Main menu
  char choice; // main menu option

  while(1){
    puts("\n");
    puts("=====================================================");
    puts(" Main Menu:");
    puts("=====================================================");
    puts(" a: Enter Strings");
    puts(" b: Remove String");
    puts(" c: View String");
    puts(" d: Search String");
    puts(" e: Polynomial Evaluation");
    puts(" f: Basic Statistics");
    puts(" g: Matrix Operations");
    puts(" h: Basic Calculator");
    puts(" q: Quit \n");
    printf(">> ");

    scanf(" %c", &choice);
  
    if (choice == 'a' || choice == 'A'){
      /* DO NOT MODIFY */
      puts("\n\nYou chose Enter String ...\n");
      puts("How many strings are you going to input?");
      scanf("%d", &length);
      getchar(); // flush new line from scanf()
      getStrings(datastorage, length); 
    }


 
    else if (choice == 'b' || choice == 'B'){
      puts("\n\nYou chose Remove String ...\n");
      removeString(datastorage, length, query);
      length--;
     

    } 



    else if (choice == 'c' || choice == 'C'){
      puts("\n\nYou chose View String ...\n");
	  /* DO NOT MODIFY */
      viewStrings(datastorage, length);
    }



       else if (choice == 'd' || choice == 'D'){
      puts("\n\nYou chose Search String ...\n");
      fgets(query,128,stdin);
	index=searchString(datastorage, length, query);
	printf("\n\n\n");
      if (index==-1)
      puts("String is not found");
      else
      printf("String %s is found at index %d\n\n", datastorage[index], index);

     

    } 
    
    
       // Polynomial Evaluation
   else if (choice == 'e' || choice == 'E'){
      puts("\n\nYou chose Polynomial Evaluation ...\n");
      
      order = getPolyOrder();
      getCoefficients(coef, order+1);
      x = getXVal();
      printf("\n\nPolyEvaluation = %0.2lf.\n\n",evaluatePoly(coef, order+1, x));

     
    }


    // Basic Statistics
    else if (choice == 'f' || choice == 'F'){
      puts("\n\nYou chose Basic Statistics ...\n");
      puts("");
      count = getNumData();
      getData(data,count);

do{
 statOption = getStatOperation();
switch(statOption){
    case 1:
    printf("\nThe sum is %0.2lf", computeSum(data, count));
    break;
    case 2: 
         printf("\nThe mean is %0.2lf", computeMean(data, count));
         break;
   case 3: 
   printf("\nThe Standard Deviation is %0.2lf", computeStdDev(data, count));
         break;
   case 4:
        count = getNumData();
        getData(data, count);
	printf("\n\n\n");
        puts("New Data is: ");
        printData(data, count);
        break;
        case 5:
             puts("\nData:");
             printData(data,count);
             break;
             case 99:
	      break;

 default:
   printf("\n\nInvalid option\n\n");
   statOption=1;
   break;

    } 
}while(statOption!=99);
}



    
    else if (choice == 'g' || choice == 'G'){
      puts("\n\nYou chose Matrix Operations ...\n");

      puts("");
      puts("\n\nFirst Matrix:");
      getDimension(&firstRows, &firstCols);
      inputMatrix(first, firstRows, firstCols);
      puts("\n\nSecond Matrix:");
      getDimension(&secondRows, &secondCols);
      inputMatrix(second, secondRows, secondCols);

      puts("\nThe first matrix is :");
      printMatrix(first, firstRows, firstCols);
      puts("");

      puts("The second matrix is :");
      printMatrix(second, secondRows, secondCols);
      puts("");

     

      do {
    
      matrixOption = getMatOperation();

      switch(matrixOption){

      case 1: 
        if(isDimEqual(firstRows, firstCols, secondRows, secondCols)){
          addMatrix(first, second, result, firstRows, firstCols);
          puts("\n\nMatrix 1 + Matrix 2\n");
          printMatrix(result, firstRows, firstCols);
        }
        else {
          puts("CANNOT PERFORM OPERATION.");
        }
        break;

      case 2: 
        if(isDimEqual(firstRows, firstCols, secondRows, secondCols)){
          subtractMatrix(first, second, result, firstRows, firstCols);
          puts("\n\nMatrix 1 - Matrix 2\n");
          printMatrix(result, firstRows, firstCols);
        }
        else {
          puts("CANNOT PERFORM OPERATION.");
        }
        break;

      case 3: 
        for(;;){
          puts("\nMatrix to Tranpose:");
          puts("1: 1st matrix");
          puts("2: 2nd matrix");
          puts("3: cancel/quit\n");
          printf(">> ");
          scanf(" %d", &option);
          if(option == 1){
            transposeMatrix(first, &firstRows, &firstCols);
            puts("The transpose of first Matrix is :");
            printMatrix(first, firstRows, firstCols);
          }
          else if(option == 2){
            transposeMatrix(second, &secondRows, &secondCols);
            puts("The transpose of the second Matrix is :");
            printMatrix(second, secondRows, secondCols);
          }
          else if(option == 3)
            break;
          else
            printf("Error, Try again (3 - cancel)");
      }
        break;

      case 4: 
        if (isMultValid(firstCols, secondRows)){
          multiplyMatrix(first, second, result, firstRows, secondCols, firstCols);
          puts("The product of the first and second matrix is :");
          printMatrix(result, firstRows, secondCols);
        }
        else{
          printf("ERROR: The first matrix rows and second matrix cols does not match!");
        }
        break;

      case 5: 

        for(;;){
          puts("Matrix to Modify");
          puts("1: first matrix");
          puts("2: second matrix");
          puts("3: cancel/quit");
          printf(">> ");
          scanf(" %d", &option);
          if(option == 1){
            puts("The old first matrix is :");
            printMatrix(first, firstRows, firstCols);
            modifyMatrix(first, firstRows, firstCols);
            puts("The new first matrix is :");
            printMatrix(first, firstRows, firstCols);
              }
          else if(option == 2){
            modifyMatrix(second, secondRows, secondCols);
            puts("The new second matrix is :");
            printMatrix(second, secondRows, secondCols);
          }
          else if(option == 3){
            break;
          }
          else {
            printf("Invalid input 3 - cancel or quit");
          }

        } 
        break;



      case 6: 

          puts("Which matrix do you want to print?");
          puts("1: first matrix");
          puts("2: second matrix\n");
          printf(">> ");
          scanf(" %d", &option);
          if(option == 1){
            puts("First Matrix :");
            printMatrix(first, firstRows, firstCols);
          }
          else if(option == 2){
            puts("Second Matrix");
            printMatrix(second, secondRows, secondCols);          }
          else {
            printf("Invalid input...");
          }
        break;

      case 99: 
        break;

      default:
        printf("Invalid input... Please try again (99 - Return to Main Menu)");
      } 

      } 
      while( matrixOption != 99); 

    } 



    

    
    
    
    // Basic Calculator
    else if (choice == 'h' || choice == 'H'){
      puts("\n\nYou chose Basic Calculator ...\n");

      /* DO NOT MODIFY */

      // Provide the implementation for the Basic Calculator evaluation
      // Refer to the 'basiccalculator.h' for the usable function prototypes
      // Modify 'basiccalculator.c' for the function implementation
      calculator();

    } 


    else if (choice =='q' || choice =='Q'){
      puts("Exiting now...");
      break;
    }


    else
    {
      puts("\nInvalid Input... Please try again! (Type 'q' to quit)");
    }

    getchar(); // Absorb the extra new line char

  } // END MAIN MENU WHILE-LOOP

  return EXIT_SUCCESS;
} // END MAIN
