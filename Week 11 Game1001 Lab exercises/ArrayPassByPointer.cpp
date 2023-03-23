#include <iostream>

// Function prototypes
void getNumber(int*);
void displayValue(int*);

const int SIZE = 5;

int main()
{
	int num[SIZE];

	getNumber(num);
	displayValue(num);

	return 0;
}

// Create a function that asks the user for a number
// Pass this number out as a pointer
void getNumber(int* input)
{
	std::cout << "Please enter " << SIZE << " numbers: ";
	for (int i = 0; i < SIZE; i++)
		std::cin >> *(input + i);			// Using the array
}

// Displays the array
void displayValue(int* numPtr)
{
	for (int i = 0; i < SIZE; i++)
		std::cout << *(numPtr + i) << " ";   // Using a pointer
}

