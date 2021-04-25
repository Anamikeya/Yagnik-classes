#include<iostream>

int main_pointer()
{
	int a = 5;
	int *p = &a;
	
	std::cout << p << std::endl;
	std::cout << *(&a) << std::endl;
	return *p;
}