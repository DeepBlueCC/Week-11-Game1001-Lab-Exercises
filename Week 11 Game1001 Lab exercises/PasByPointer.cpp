#include <iostream>

// Function prototypes
void getNumber(int*);
void doubleValue(int*);

int main()
{
	int num;

	getNumber(&num);
	doubleValue(&num);
	std::cout << "Value doubled is: " << num << std::endl;

	std::cin.get();
	return 0;
}

// Create a function that asks the user for a number
// Pass this number out as a pointer
void getNumber(int* input)
{
	std::cout << "Enter a number: ";
	std::cin >> *input;
}
// Create a second function that takes in this number as a pointer
// Doubles it and pass it back out as a pointer
void doubleValue(int* val)
{
	*val *= 2;
}

