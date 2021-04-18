#include<iostream>

void main_array_search()
{
	int arr[5] = { 2,5,4,6,7};
	int flag = 0;
	int position;
	std::cout << "your array is : " << std::endl;

	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;

	int element_to_search;
	std::cout << "Enter the element to be searched : "; std::cin >> element_to_search;
	
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == element_to_search)
		{
			flag = 1;
			position = i;
		}
		
	}

	if (flag == 1)
	{
		std::cout << "present at : " << position + 1 << " position\n";
	}
	else
	{
		std::cout << "Not fount in Array: {Error 404}\n";
	}


	std::cin.get();
}