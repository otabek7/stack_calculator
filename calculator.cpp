#include <iostream>
#include <string>
#include <sstream>
#include "functions.h"
using std::cin, std::cout, std::endl, std::string, std::istringstream;

int main() {
  // prompt user input
  cout << "Type RPN expression (end with '=')." << endl;
  cout << "> ";
  int number = 5;
  Stack stack;

  push(stack, number);
  //for (int i = 0; i < stack.capacity; i++)
  // {
  //   cout << stack.numbers[i];
  // }
  
  
  //TODO: create a command-line interface for calculator GUI

  return 0;
}