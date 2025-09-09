#include <cstdio>
#include <cstring>
#include <iostream>

int main()
{
	char myOldString[10] = "Hello CPP";
	std::cout << myOldString;
	std::cout << "Length = " << strlen(myOldString);
}
