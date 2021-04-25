//add two numbers using call by value and you must increment the numbers by 1 before ading them and display new numbers also


#include<iostream>

int add(int& nick_name_A, int& nick_name_B)
{

	nick_name_A++;
	nick_name_B++;
	return nick_name_A + nick_name_B;
}

int main()
{
	std::cout << " hello World" << std::endl;
	int a = 5;
	int b = 6;
	int sum = add(a, b);
	
	std::cout <<  a << " + " << b << " = "<< sum;

}