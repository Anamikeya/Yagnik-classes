#include<iostream>

namespace yagnik_pdt
{
	void print(const char* message)
	{
		std::cout << message << std::endl;
	}
	
	void print(float p)
	{
		std::cout << p << std::endl;

	}
	void print(int a, int b)
	{
		std::cout << a + b << std::endl;
	}

}
namespace anurag_array
{
	void print(const char* messages)
	{
		std::cout << "Print : " << messages << std::endl;
	}
	void print(int arr[])
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << *(arr + i) << std::endl;
		}
	}
}
using namespace anurag_array;
using namespace yagnik_pdt;

int main()
{
	std::string first_name, last_name, email_id, password;
	std::cout << "FIrst name :\t"; std::cin >> first_name;
	std::cout << "\tlast name :\t"; std::cin >> last_name;
	std::cout << "\nemail :\t"; std::cin >> email_id;
	std::cout << "\npassword :\t"; std::cin >> password;

	
	return 0;
}