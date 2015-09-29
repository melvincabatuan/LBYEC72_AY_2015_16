#include <stdio.h>
#include <stdlib.h>
#include <string.h> // needed by strlen and strcmp

int main(){

  // Data structure for Activity 3
  char names[16][128]; 
  

  // Demo 
  char school1[] = {'D','L','S','U','M','\0'};

  
  char school2[4]   = "DLSU"; // ERROR: NULL char '\0' is discarded 
  // char school2[] = "DLSU"; // Safe
  
  printf("school1 = %s\n", school1);
  printf("school2 = %s\n", school2);
  printf("strlen(school) = %d\n", strlen(school1));
  printf("strlen(school) = %d\n", strlen(school2)); // Extra char appears in school2

  // Comparing 2 strings

  printf("strcmp(school1,school2) = %d\n", strcmp(school1, school2));


  strcpy(names[0], school1);

  printf("names[0] = %s \n", names[0]);

  strcpy(names[1], school2);

  printf("names[1] = %s \n", names[1]);

  
  return EXIT_SUCCESS;
}
