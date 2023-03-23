#include <iostream>
#include <string>


// How to occupy 1 megabyte of memory 
// Note: char takes 1 byte
int main()
{
	char* data;
	int megaByte = (1024 * 1024);

	data = (char*)malloc(megaByte);

	for (int i = 0; i < megaByte; i++)
		data[i] = (char)rand();

	return 0;
}

