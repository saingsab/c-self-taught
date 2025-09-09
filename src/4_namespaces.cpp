#include <cstdio>

namespace First {
	namespace Nested {
		void foo()
		{
			printf("This is First::Nested::foo\n");
		}
	}
}

namespace Second {
	void foo()
	{
		printf("This is Second::foo\n");
	}
	void bar()
	{
		printf("This Second::bar\n");
	}
}

void foo()
{
	printf("This is global foo\n");
}

int main()
{
	using namespace Second;
	
	bar();
	Second::foo();
	First::Nested::foo();
	::foo(); //prints "This is global foo"

}
