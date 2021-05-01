#include<iostream>

void main_addition_tutorial()
{
	
	int arr[100];
	std::cout << "Enter the size of the array\n";
	int no_of_elements, sum = 0;
	std::cin >> no_of_elements;
	std::cout << "Enter the array\n";
	for (int i = 0; i < no_of_elements; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << " sum : ";

	for (int i = 0; i < no_of_elements; i++)
	{
		sum = sum + arr[i];
	}
	std::cout << sum;
	std::cin.get();


}