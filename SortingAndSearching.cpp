#include<iostream>

void insertElement(int arr[], int size, int position, int element)
{
	int temp[100];
	for (int i = 0; i < size + 1; i++)
	{
		
		if (i < position)
			temp[i]= arr[i];
		if (i == position)
			temp[i] = element;
		if (i > position)
			temp[i] = arr[i + 1];
	}
	for (int i = 0; i < size + 1; i++)
		arr[i] = temp[i];
}
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] <<" ";
	std::cout << std::endl;
}
int ss_main()
{
	int array[100];
	int size;
	std::cout << "Give SIze Of the Array : "; std::cin >> size;
	std::cout << "Give the array\n";
	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}
	std::cout << "your Array\n";
	PrintArray(array, size);
	
	// sorting

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

		}
	}
	std::cout << "your sorted Array\n";
	PrintArray(array, size);

	//searching
	int x;
	int flag = 0, count = 0;
	std::cout << "Enter the number to be searched : "; std::cin >> x;
	for (int i = 0; i < size; i++)
	{
		if (x == array[i])
		{
			flag = 1;
			count++;
		}


	}
	if (flag == 1)
	{
		std::cout << "the element came " << count << "times in the array" << std::endl;
	}
	else
	{
		std::cout << "The number is not found : " << std::endl;
	}

	int element, position;

	std::cout << "Enter the element to insert: " << std::endl; std::cin >> element;
	std::cout << "Enter the position : " << std::endl; std::cin >> position;
	insertElement(array, size, element, position);

	PrintArray(array, size + 1);
	return 0;
}