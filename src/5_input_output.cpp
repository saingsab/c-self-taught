#include <cstdio>
#include <iostream> // I/O Stream

int main()
{
	int myInt;

	std::cout << "Enter your favorite number:\n";
	std::cin >> myInt;

	std::cout << "Your favorit number is " << myInt << '\n';

	std::cerr << "Used for error messages" << '\n';

	//Flush string stream buffer with new line
	std::cout << "I flushed it away" << std::endl;
}
