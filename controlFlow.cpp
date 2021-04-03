#include<iostream>
int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			continue;
		std::cout << i << std::endl;
	}
	std::cout << "---------------------------\n";
	for (int i = 0; i < 10; i++)
	{
		if (i == 6)
			break;
		std::cout << i << std::endl;
	}
	std::cout << "---------------------------\n";

	for (int i = 1; i < 10 ; i++)
	{
		if (i/2 == 3)
			return i;
		std::cout << "i am " << i << std::endl;
	}
	std::cout << "hello WOrld" << std::endl;
}
