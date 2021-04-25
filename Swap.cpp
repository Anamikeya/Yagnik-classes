#include<iostream>

int main_swap()
{
	int a, b;
	std::cout << "Enter the value of a : "; std::cin >> a;
	std::cout << "Enter the value of b : "; std::cin >> b;

	int temp;

	//login to swap
	temp = a;
	a = b;
	b = temp;


	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cin.get();
	return 0;

}