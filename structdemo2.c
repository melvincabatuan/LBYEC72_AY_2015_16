#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 128
#define MAX_MEMBERS 500



// This is a definition of a structure
typedef struct{
  char name[BUFFER_SIZE];
  int id;
} STUDENT;


  int main(){


     // Declare a structure
    STUDENT lbyec72; // Memory is allocated

    // Assign elements to structure using '.' operator
    lbyec72.id = 12345678;

    // Assign name to structure using '.' operator
   
    
    printf("lbyec72.id = %d\n", lbyec72.id);

    strcpy(lbyec72.name,"Melvin Kong Cabatuan");

    printf("lbyec72.name = %s \n", lbyec72.name);

    return 0;
  }

