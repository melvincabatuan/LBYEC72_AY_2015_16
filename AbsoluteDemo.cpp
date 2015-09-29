#include <iostream>


int main(){

  int number, temp;
  std::cout<< "Input an integer: \n";
  std::cin >> number;

  temp = number;

  if (number < 0)
    temp = -number;

  std::cout<< "The absolute value of " << number << " is "<< temp<<"\n";

  return 0;
}
