#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "mystructdemo.h"

typedef int boolean;






boolean doYouPass(int rawGrade){
  boolean pass;
  if(rawGrade > 70)
    pass = 1;
  else
    pass = 0;
  return pass;
}




int main(){

  // Declare a VARIABLE which is a STRUCTURE that contains name array and int id
  STUDENT sophomore;

  // cOMMON ERROR ABOUT THE IMMUTABILITY OF sTRINGS
  strcpy(sophomore.name, "Melvin Kong Cabatuan");
  sophomore.id = 97089362;

  printf("sophomore.name = %s\n", sophomore.name);
  printf("sophomore.id   = %d\n", sophomore.id);


  printf("Did you passed?\n");
  if(doYouPass(90))
    puts("Yes\n");
  else
    puts("Sorry, See you next term!");
  return 0;
}
