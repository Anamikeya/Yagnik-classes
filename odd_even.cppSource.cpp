#include<iostream>

void findOddEven()
{
	int  number;
	std::cout << "Enter The number\n";
	std::cin >> number;
	if (number % 2 == 0)
		std::cout << "The Given Number is Even\n";
	else
		std::cout << "Teh Given Number is Odd\n";
	std::cin.get();
}