#include <iostream>

int main()
{
	// Delcare a const int SIZE = 5
	const int SIZE = 5;
	// Create int array of size 5
	int num[SIZE];
	int* numPtr = num;   // Pointer to the array


	std::cout << "Please enter " << SIZE << " numbers: ";
	// With a loop, use cin and pointers to fill up the array
	for (int i = 0; i < SIZE; i++)
		// Using the array
		std::cin >> *(num + i);			

	std::cout << "You have entered: ";
	// Using another loop and pointers again, display the result
	for (int i = 0; i < SIZE; i++)
		// Using a pointer
		std::cout << *(numPtr + i) << " ";   

	std::cout << endl;
	return 0;
}




