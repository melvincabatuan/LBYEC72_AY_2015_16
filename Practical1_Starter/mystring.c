#include "mystring.h"


void getStrings(char datastorage[][BUFFER_SIZE], int length){
  char buf[BUFFER_SIZE];
  char *p;
  int c;
  int i;

  for(i = 0; i < length; i++){
    printf("\nEnter String[%d] = ", i);
    if (fgets(buf, sizeof(buf), stdin)){
        p = strchr(buf, '\n');
    // returns a pointer to the first occurrence
    // of the character '\n'
        if(p && strlen(buf) > 1){
             *p = '\0'; // make the '\n' char null
         }
      strcpy(datastorage[i],buf);
  }
  else {
    printf("INPUT ERROR!");
    }
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

  return 0;
}


