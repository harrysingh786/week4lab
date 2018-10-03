#include <iostream>
#include <string>
#include<sstream>
// Include the library that will allow you to convert from string to integer
int a,b,c,d;

int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once

std::cout<<" write the value of A: ";
std::cin>>a;
std::cout<< "Write the value of B: ";
std::cin>>b;
std::cout<<"Write the value of C: ";
std::cin>>c;



  // Multiply the three integers
d=a*b*c;


  // Output the result of the multiplication
std::cout<<"The answer is "<<d;




  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std::string want;
std::string flying;
std::string soft;

std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


std::cout<<"what you want ";
std::getline (std::cin,want);
std::cout<<"what is flying ";
std::getline(std::cin,flying);
std::cout<<"what is soft ";
std::getline(std::cin,soft);
std::cout<<"I want to"<<want<<"  "<<std::endl;
std::cout<<"swat the "<<flying<<" "<<std::endl;
std::cout<<" soft, soft "<<soft<<" please "<<std::endl;











  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  int myint ;
  std::stringstream(myNumber)>>myint;

  
  std::cout <<myint<< " :is an integer"; //Insert the integer before the text of this output

  return 0;
}