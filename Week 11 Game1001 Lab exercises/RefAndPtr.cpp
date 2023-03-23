#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a = 111;
	int& adr = a;	 // Same concept as pass by reference in functions
	int* aPtr = &a;  // Pointer declaration! Takes a's address not value

	*aPtr = a;  // A dereferenced pointer takes a's value instead
	cout << adr << std::endl;    // display 111 (dereferenced)
	cout << &adr << std::endl;   // display a's addr

	cout << aPtr << std::endl;   // display a's addr
	cout << *aPtr << std::endl;  // display 111
	cout << &aPtr << std::endl;  // display aPtr's addr (not a!)

	return 0;
}