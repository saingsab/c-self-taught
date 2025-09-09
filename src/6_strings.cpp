#include <cstdio>
//String in c++ are objects and have monay member functions
#include <string> 

std::string myString = "Hello";
std::string myOtherString = "World";

// + is used for concatenation.
std::cout << myString + myOtherString; //"Hello World"

std::cout << myString + " You"; // "Hello You"

// c++ string length can be found from either string::length() or string::size()
cout << myString.length() + myOtherString.size(); // 11

// c++ string are mutable
myString.append(" Dog");
std::cout << myString; // "Hello Dog"
