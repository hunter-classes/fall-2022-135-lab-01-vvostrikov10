/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1 smaller3.cpp

Determines if a year is a leap year
*/

#include <iostream>
int main(){
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;
  if (year%400 == 0){
    std::cout << "\nLeap year" << std::endl;
  }
  else if (year%100 == 0) {
    std::cout << "\nCommon year" << std::endl;
  }
  else if (year%4 == 0) {
    std::cout << "\nLeap year" << std::endl;
  }
  else{
    std::cout << "\nCommon year" << std::endl;
  }
  return 0;
}
