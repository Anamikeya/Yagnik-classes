#include<iostream>
#include<cmath>

void Log(const char* message)
{
	std::cout << message << std::endl;
}
float Log(float any)
{
	std::cout << any << std::endl;
	return any;
}
std::string Log(std::string a)
{
	std::cout << a << std::endl;
	return a;
}
float add(int a, float b)
{
	return a + b;

}

int main()

{
	/*int int_a = 5;
	float float_b = 9.00;
	double double_c =8.00776;
	bool bool_d =  false;
	char char_e =  'c';
	auto auto_variable ='c';

	std::cout << sizeof(int_a) <<"bytes" << std::endl;
	std::cout << sizeof(float_b) << "bytes" << std::endl;
	std::cout << sizeof(double_c) << "bytes" << std::endl;
	std::cout << sizeof(bool_d) << "bytes" << std::endl;
	std::cout <<sizeof(auto_variable) <<std::endl;
	std::cout << sizeof(char_e) << "bytes" << std::endl;
	*/
	
	/*
	
	auto a = 0.0 , b = 0.0, sum = 0.0 ;
	std::cin >> a;
	std::cin >> b;
	sum = a + b;
	std::cout << sum << std::endl;
	
	*/
	/*
	auto sum = add();
	Log(sizeof(sum));
	*/
	/*
	for (int i = 0; i < 100; i++)
		Log("Hello");
*/
	/*
	std::string array = "hello";
	std::cout << array.size() << std::endl;
	array[1] = 'u';
	std::cout << array << std::endl;
	*/
	/*
	int n = 100;
	for (int i = 10; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i << " ";
		}
	
	}
	*/
	bool running = true;
	std::string a;
	const char* randchar = "o";
	while (std::cin >>  a && running)
	{
		if (a == "o")
		{
			running = false;
			
		}
		else {
			Log(a);
		}
		
	}
	
}