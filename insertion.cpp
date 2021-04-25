#include<iostream>




void insert(int& position, int& value, int array[])
{
	array[position] = value;

	for (int i = 0; i < 5; i++)
		std::cout << array[i] << std::endl;
	
}

int main_insertion()
{
	int array[5];
	std::cout << "Enter the array: \n";
	for (int i = 0; i < 5; i++)
		std::cin >> array[i];
	int position;
	std::cout << "enter the position you want to edit : "; std::cin >> position;
	int value;
	std::cout << "\nEnter the insertion value : "; std::cin >> value;
	insert(position, value, array);
	std::cin.get();
	return 0;
}