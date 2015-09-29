#include <iostream>
#include <stdio.h>

int main(){

  int rawGrade;
  std::cout<< "Input an the raw grade: \n";
  std::cin >> rawGrade;


  if (rawGrade >= 95)
    puts("CONGRATULATIONS!!! You got 4.0!");
  else if(rawGrade >= 90)
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
  else
    puts("SORRY! You got 0.0. See you next Term!");
  
  return 0;
}
