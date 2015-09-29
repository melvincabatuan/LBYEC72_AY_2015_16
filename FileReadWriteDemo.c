#include <stdio.h>
#include <stdlib.h>


void readFile(char *filename){
  
  // Declare a file pointer
  FILE *fptr;

  // Open file with read permission
  fptr = fopen(filename,"r");

  if(fptr != NULL)
    puts("File opened successfully!");
  else
    puts("ERROR: Reading file");

  // Read the char from file
  int cursor = getc(fptr);
  
  // Loop until the end of file
  while(cursor != EOF){

    // Print the character
    putchar(cursor);

    // Update the cursor
    cursor = getc(fptr);
  }

  // Do not forget to close the file after the processing
  fclose(fptr);
}


void writeFile(char filename[], char school[]){

  // Declare a file pointer
  FILE *fptr;

  // Open file for writing
  fptr = fopen(filename,"w");

  // Write the message
  fprintf(fptr, "I study programming in %s.\n", school);

  // Do not forget to close the file
  fclose(fptr);
  
}



int main(){

  char *filename = "melvin.txt";

  // Testing read file routine
  readFile(filename);

  // Tesing write routine
  writeFile("output.txt", "DLSU");

  return EXIT_SUCCESS;
}
