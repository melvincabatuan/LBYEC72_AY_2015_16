#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char name[]={'M','E','M','M','E','M','\0'};

  char myname[12];
  
  char course[] = "MEM";

  strcpy( myname, name);
  
  printf("name = %s\n", name);
  printf("myname = %s\n", myname);
  printf("course = %s\n",course);

  printf("strlen(name) = %d\n", strlen(name));

  printf("strcmp(name, myname) = %d", strcmp(name,myname));

  printf("strcmp(course, name) = %d", strcmp(course, name));
  
  return EXIT_SUCCESS;
}
