
#include <iostream>

int main() 
{
  std::string YourName;//Define a string YourName.
  std::cout << "What is your name?";//Prompt user to input YourName variable.
  std::cin >> YourName;//Take user input
  std::string greeting = "Hello world " + YourName + "!";//Define string variable "greeting" as the Hello World message + user input.
  std::cout << greeting;//Output customized greeting for user to console.
  
  return 0;
}