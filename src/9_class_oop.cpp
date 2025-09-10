#include <cstdio>
#include <iostream>

class Dog {
	std::string name;
	int weight;
 public:
	Dog();

	void setName(const std::string& dogsName);
	void setWeight(int dogsWeight);

	virtual void print() const;

	void bark() const { std::cout << name << " barks!\n"; }

	virtual ~Dog();
}; // End of the Class need to set the ; semicolon

Dog::Dog()
{
	std::cout << "A dog has been constructed\n";
}

void Dog::setName(const std::string& dogsName)
{
	name = dogsName;
}

void Dog::setWeight(int dogsWeight) 
{
	weight = dogsWeight;	
}

void Dog::print() const
{
	std::cout << "Dog is " << name << " and weighs " << weight << "kg\n";
}

Dog::~Dog()
{
	std::cout << "Goodbye " << name << '\n';
}

int main() {
	Dog myDog;
	myDog.setName("Barkley");
	myDog.setWeight(10);
	myDog.print();
	return 0;
}
