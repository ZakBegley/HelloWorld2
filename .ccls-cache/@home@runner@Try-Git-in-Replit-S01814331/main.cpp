/* Program Comment Block:
Name:  Zak Begley
Date:  09/10/2023
Course:  CSC 1029
Description:  Hello World project for "Try Git in Replit" PearDeck assignment.  The code will create a greeting message of Hello World, and then ask the user for their name.  It will then output "Hello World YourName!" to the console.
  */
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