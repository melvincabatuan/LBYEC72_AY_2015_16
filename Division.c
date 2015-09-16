/***********************************************/
// Author: Melvin Cabatuan
// Date modified: September 16, 2015
// Description: Simple switch refresher
/**********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){
  char selection;

  printf("******** MAIN MENU **************\n");
  printf(" a. Formula 1 \n");
  printf(" b. Formula 2 \n");
  printf(" e. EXIT program \n");

  scanf("%c", &selection);
  switch(selection){

  case 'A':
  case 'a':
    printf("Solving Formula 1 \n");
    break;
    
  case 'B':
  case 'b':
    printf("Solving Formula 2 \n");
    break;

  case 'E':
  case 'e':
    printf("Exiting program...\n");

  default:
    printf("Invalid option!");
    
  }
  
  return 0;
}
