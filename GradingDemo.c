/***********************************************/
// Author: Melvin Cabatuan
// Date modified: September 16, 2015
// Description: Multi-decision refresher
/***********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int rawGrade;

  while(1){
  puts("Input your raw grade:");
  scanf("%d", &rawGrade);
  
  if (rawGrade >= 95)
    puts("CONGRATULATIONS! Your grade is 4.0");
  else if (rawGrade >= 90)    
    puts("3.5");
  else if(rawGrade >= 85)
    puts("3.0");
  else if(rawGrade >= 80)
    puts("2.5");
  else if(rawGrade >= 75)
    puts("2.0");
  else if(rawGrade >= 70)
    puts("1.5");
  else if(rawGrade >= 65)
    puts("1.0");
  else if(rawGrade >= 0)
    puts("SORRY. YOU got 0.0. See you next term!");
  else
    break;
  }    
  return EXIT_SUCCESS;
}
