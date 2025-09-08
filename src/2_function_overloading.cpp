#include <cstdio>

void print(char const* myString)
{
	printf("String %s\n", myString);
}

void print(int myInt)
{
	printf("My int is %d\n", myInt);
}

int main()
{
	print("Hello"); //Resolve to void print(const char*)
	print(15); //Resolve to void print(int)
}
