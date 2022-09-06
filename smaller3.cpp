/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1 smaller3.cpp

Prints the smaller of three numbers
*/

#include <iostream>
int main(){
  int x, y, z, smaller_num;
  std::cout << "Enter the first number: ";
  std::cin >> x;
  std::cout << "Enter the second number: ";
  std::cin >> y;
  std::cout << "Enter the third number: ";
  std::cin >> z;
  if (y<x) {
    smaller_num=y;
  }
  else{
    smaller_num=x;
  }
  if (smaller_num<z) {
    std::cout << "\nThe smaller of the three is " << smaller_num << std::endl;
  }
  else{
    std::cout << "\nThe smaller of the three is " << z << std::endl;
  }

  return 0;
}
