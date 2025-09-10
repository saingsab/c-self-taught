#include <cstdio>

enum ECarTypes
{
	Sedan,
	Hatchback,
	SUV,
	Wagon
};

EcarTypes GetPreferredCarType()
{
	return ECarTypes::Hatchback;
}

// As of C++11 there is an easy way to assign a type to the enum which can be
// useful in serialization of data and converting enums back-and-forth between
// the desired type and their respective constants
enum EcarTypes : uint8_t
{
	Sedan, //0
	Hatchback, // 1
	SUV = 254, //254
	Hybrid // 255
};

void WriteByteToFile(uint8_t InputValue)
{
	//Serialize the InputValue to a file
}

void WritePreferredCarTypeToFile(EcarTypes InputType)
{
	//The enum is implicity converted to a uint8_t dua to its declared enum type
	WriteByteToFile(InputCarType);
}

