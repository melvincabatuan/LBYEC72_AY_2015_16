#include "mystring.h"



void mygets(char input[BUFFER_SIZE]){
    char *p;
    char buf[BUFFER_SIZE];
    if (fgets(buf, sizeof(buf), stdin)){
      
    p = strchr(buf, '\n');

    if(p){
      *p = '\0';
    }
    strcpy(input,buf);
  }
  else {
    printf("INPUT ERROR!");
    }
}






void getStrings(char datastorage[][BUFFER_SIZE], int length){
  int i;
   for(i = 0; i < length; i++){
      printf("\nInput[%d] = ", i);
      mygets(datastorage[i]);
  }
}


void removeString(char datastorage[][BUFFER_SIZE], int length, char query[BUFFER_SIZE]){

 

  
    }


void viewStrings(char datastorage[][BUFFER_SIZE], int length){
  int i;
  for(i = 0; i < length; ++i){
    printf("\nString[%d] = %s", i,datastorage[i]);
  }
}

int searchString(char datastorage[][BUFFER_SIZE], int length, char query[BUFFER_SIZE]){

  // return -1; // if query not found

  
  return 0;
}


