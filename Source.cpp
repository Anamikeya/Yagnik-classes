#include<iostream>

int main()
{
	std::cout << "Hello World\n";
	int a, g, h; // 4 bytes  of memory
	float b = 1243.00934 , i = 9.0; // 8 bytes of memory
	bool c  = false; // 1 byte of memory and can store only tryue and false
	double k = 12.00919; // 16 byte of memory
	char ch; // 1 byte of memort and only 1 character
	 
	//cin is for taking input
	std::cin >> a;
	std::cin >> g;
	std::cin >> h;

	int sum = a + g + h;
	//cout is for displaying the output;
	std::cout << "the sum of integers : " << sum << std::endl;
	ch = 'a';
	std::cout << ch << " = " << k << "= " << c <<std::endl;
	
	std::cin.get(); //this basically waits for the user to input any key from the keyboard
}

