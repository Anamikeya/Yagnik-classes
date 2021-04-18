#include<iostream>

void main_Add_array()
{
	int integerArray[5];
	float floataArray[10];
	double doubleArray[10];
	int sum = 0;
	float sum_float = 0;
	double sum_double = 0;

	for (int i = 0; i < 5; i++)
	{ 
		int a;
		std::cout << "Enter the marks in subject " << i << std::endl;
		std::cin >> a;
		integerArray[i] = a;
	
	}
	
	std::cout << "The Entered marks is : \n";
	for(int i = 0; i < 5; i++)
		std::cout << integerArray[i] << std::endl;

	for (int i = 0; i < 5; i++)
		sum = sum + integerArray[i];

	std::cout << "SUm of the marks is: " << sum << std::endl;;



}