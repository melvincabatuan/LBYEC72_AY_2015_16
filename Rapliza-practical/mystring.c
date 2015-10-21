#include "mystring.h"


void getStrings(char datastorage[][BUFFER_SIZE], int length){
  char buf[BUFFER_SIZE];
  char *p;
 
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
      int i, remove;
      puts("Input the number of the String you want to remove.\n");
      printf(">>");
      scanf("%d", &remove);
      query = datastorage[remove];
      printf("Removing %s........", query);
      for(i = remove; i<length; i++){
            strcpy(datastorage[i], datastorage[i+1]);
            }
            length = length-1;

    }


void viewStrings(char datastorage[][BUFFER_SIZE], int length){
  int i;
  for(i = 0; i < length; ++i){
    printf("\nString[%d] = %s", i,datastorage[i]);
  }
}

int searchString(char datastorage[][BUFFER_SIZE], int length, char query[BUFFER_SIZE]){
    int index, counter;
    puts("Enter the String to search for: ");
    fflush(stdin);
    fgets(query, 128, stdin);
    
    query[strlen(query)-1] = '\0';
    index=-1;
   
  
     for(counter=0, index=0; counter<length; counter++)
                    {
                         if (strcmp(datastorage[counter], query)==0)
                         {
                              index = counter;
                         }
			 else
			   {
			     index=-1;
			   }
                     }
    return(index);
    
    
    

  return 0;
}


