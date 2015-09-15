#include<stdio.h>
#include<stdlib.h>

#define PI 3.14159;

void areaComputation();
void volumeComputation();
void perimeterComputation();

main()
{
    char selection;    
        
    // Menu Infinite Loop: Terminator at line 99
    while(1){
       printf("\n Main Menu");
       printf("\n================");
       printf("\n A - AREA");
       printf("\n B - VOLUME");
       printf("\n C - PERIMETER");
       printf("\n E - Exit");
       printf("\n Enter selection: ");
       scanf("%c",&selection);
 
       switch(selection)
      {
       case 'A':
       case 'a':
                 areaComputation();
                 break; // EndCase A

      case 'B': 
      case 'b': 
                 volumeComputation();
                 break; // EndCase B

       case 'C': 
       case 'c': 

         break; // EndCase C

       case 'E':  
       case 'e': 
         perimeterComputation();
         break;
 
      default: 
         printf("\n Invalid selection");
         return main();            
    } //EndSwitch 
 
    getchar(); // Absorbs the buffered new line char

    printf("\n");

    /// Terminator
    if (selection == 'E' || selection == 'e')
       break; // Exit while
    } //EndWhile

    printf("\n Bye ...\n");
    return 0;   
}// EndMain
   






void areaComputation(){
  int s, x, y, r;
  double Area;
  
do { 
         printf("\n COMPUTE AREA OF:\n");
         printf("=========================");   
         printf("\n 1 - square");
         printf("\n 2 - rectangle");
         printf("\n 3 - circle");
         printf("\n 4 - back to main\n");

         printf("Enter Selection : ");
         scanf("%i",&s);
         
         /// Square Area Computation 
         if( s==1 )
         { 
                 printf("Enter Value of x: ");
                 scanf("%i",&x);
           
                 Area = x * x;
                 printf("Area of square is %.2f sq. units.", Area);
         }
         
         /// Rectangle Area Computation
         else if( s==2 ){
                printf("Enter Value of x: ");
                scanf("%i",&x);
                printf("Enter Value of y: ");
                scanf("%i",&y);
                Area = x * y;
                printf("Area of rectangle is %.2f", Area);         
          }
 
          /// Circle Area Computation
           else if(s==3){
                printf("Enter Value of r: ");
                scanf("%i",&r);
                Area = r * r * PI;
                printf("Area of circle is %.2f.", Area);
           }

          /// Return to main()
           else if(s==4){
               printf("Returning to Main Menu  ... ");
           }   

           else {
               printf("Invalid input! Please try again ... ");  
           }
         } while (s != 4); // Repeat case A menu unless s is 4.
         
}



void volumeComputation(){
       printf("\n COMPUTE VOLUME OF:");
     }
     
     
void perimeterComputation(){
     printf("\n COMPUTE PERIMETER OF:");
     }
