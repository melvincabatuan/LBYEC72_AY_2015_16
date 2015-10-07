/*============================================================*/
// 
//   Author: Melvin Cabatuan
//   Date Modified: October 6, 2015
//   Description:   Laboratory 3 - String exercise 
//
/*============================================================*/

/* MODIFY THIS FILE FOR THE ACTIVITY */


#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"



int main(){

  char datastorage[NUM_OF_STRINGS][BUFFER_SIZE]; // data storage for all strings
  int length;     // current number of strings
  int index;      // index used for searchStrings()
  char query[BUFFER_SIZE]; // query string
  

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
    puts(" e: Exit \n");
    printf(">> ");

    scanf("%c", &choice);
    getchar();
  
    if (choice == 'a' || choice == 'A'){
      puts("You chose Enter String ...\n");

      puts("How many strings are you going to input?");
      scanf("%d", &length);
      getchar(); // flush new line from scanf()
      getStrings(datastorage, length); 
    }


 
    else if (choice == 'b' || choice == 'B'){
      puts("You chose Remove String ...\n");

      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */



    } 



    


    else if (choice == 'c' || choice == 'C'){
      puts("You chose View String ...\n");

      viewStrings(datastorage, length);

  


    }



    else if (choice == 'd' || choice == 'D'){
      puts("You chose Search String ...\n");
    
      puts("Please input query string:");     mygets(query);

      printf("query = %s\n", query);

      // get the query string
      
      
      /* TO DO: MODIFY THIS PART FOR THE ACTIVITY */
      int index = searchString(datastorage, length, query);
  
      if (index == -1)
	puts("String is not found.");
      else
	printf("String %s is found at index %d.", datastorage[index], index);

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
