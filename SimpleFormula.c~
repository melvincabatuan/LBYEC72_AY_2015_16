/*============================================================*/
//
//              A Simple Menu Program in C         
//
/*============================================================*/
#include <stdio.h>
#include <stdlib.h>


void formula1(){
  int option1;
  float V, l, w, h;

  while(1){
  puts("\n\t Formula 1: ");
  puts(" V = length * width * height\n");
  puts("\t Menu:");
  puts(" 1: Solve for V");
  puts(" 2: Solve for length");
  puts(" 3: Solve for width");
  puts(" 4: Solve for height");
  puts(" 5: Return to main menu");
    scanf("%d", &option1);
    
    if (option1 == 1){
      puts("length = ");
      scanf("%f", &l);
      puts("width = ");
      scanf("%f", &w);
      puts("height = ");
      scanf("%f", &h);

      V = l*w*h; // Solving for volume

      printf("The volume is %0.2f.", V);
    }

    else if (option1 == 2){
      puts("Volume = ");
      scanf("%f", &V);
      puts("width = ");
      scanf("%f", &w);
      puts("height = ");
      scanf("%f", &h);

      l = V/(w*h); // Solving for length

      printf("The length is %0.2f.", l);
    }

    else if (option1 == 3){
      puts("Volume = ");
      scanf("%f", &V);
      puts("length = ");
      scanf("%f", &l);
      puts("height = ");
      scanf("%f", &h);

      w = V/(l*h); // Solving width

      printf("The width is %0.2f.", w);
    }

    else if (option1 == 4){
      puts("Volume = ");
      scanf("%f", &V);
      puts("width = ");
      scanf("%f", &w);
      puts("length = ");
      scanf("%f", &l);

      h = V/(l*w); // Solving for height

      printf("The height is %0.2f.", h);
    }

    else if (option1 == 5){
      break;
    }
    else {
      puts("Invalid Input!");
    }
    getchar();
  }
}


int main(){

  char choice;
  puts("\t Main Menu:");
  puts(" a: Formula 1");
  puts(" b: Formula 2");
  puts(" e: Exit");
  
  while(1){

    scanf("%c", &choice);

    if (choice == 'a' || choice == 'A'){
      //puts("You chose Formula 1");
      formula1();
    }
    else if (choice == 'b' || choice == 'B'){
      puts("You chose Formula 2");
    }
    else if (choice == 'e' || choice == 'E'){
      puts("Exiting now...");
      break;
    }
    else
    {
      puts("Invalid Input... Please try again!");
    }
    getchar();
  }
  return EXIT_SUCCESS;
}
