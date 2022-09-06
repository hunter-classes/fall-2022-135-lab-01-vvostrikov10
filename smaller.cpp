/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1 smaller.cpp

Prints the smaller of two numbers
*/

#include <iostream>
int main(){
  int n1, n2;
  std::cout << "Enter the first number: ";
  std::cin >> n1;
  std::cout << "Enter the second number: ";
  std::cin >> n2;
  if (n2<n1) {
    std::cout << "\nThe smaller of the two is " << n2 << std::endl;
  }
  else{
    std::cout << "\nThe smaller of the two is " << n1 << std::endl;
  }

  return 0;
}
