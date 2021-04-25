#include<iostream>


int main_delete ()
{
	int array[5], position, temp[100];
	std::cout << "Input Array: \n";
	for (int i = 0; i < 5; i++)
		std::cin >> array[i];
	std::cout << "Position to delete: \n";
	std::cin >> position;
	std::cout << "array after deletion : \n";
	
	for (int i = 0; i < 5; i++)
	{
		if (i < position)
			temp[i] = array[i];
		if(i == position)
			temp[position] = array[i+1];
		
		
	}
	for (int i = 0; i < 4; i++)
		std::cout << temp[i] << std::endl;
	
	return 0;
}