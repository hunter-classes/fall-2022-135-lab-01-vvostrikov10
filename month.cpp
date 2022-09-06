/*
Author: Vladislav Vostrikov
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab1 smaller3.cpp

Determines the number of days in a month given a year and a month
*/

#include <iostream>
int main(){
  int year, month;
  std::cout << "Enter year: ";
  std::cin >> year;
  std::cout << "Enter month: ";
  std::cin >> month;

  if (month>7){
    month--;//if month past july sets a month 1 less to align with months starting with august
  }
  if (month==2){
    if (year%400 == 0){
      std::cout << "\n29" << std::endl;
    }
    else if (year%100 == 0) {
      std::cout << "\n28" << std::endl;
    }
    else if (year%4 == 0) {
      std::cout << "\n29" << std::endl;
    }
    else{
      std::cout << "\n28" << std::endl;
    }
  }
  else if (month%2){
    std::cout << "\n31" << std::endl;
  }
  else{
    std::cout << "\n30" << std::endl;
  }

  return 0;
}
