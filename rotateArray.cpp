#include<iostream>

void leftRotate(int arr[], int size)
{
	int temp = arr[0];
	for (int i = 0; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = temp;
}
void placeRotate(int arr[], int size, int place)
{
	for (int i = 0; i < place; i++)
		leftRotate(arr, size);
}


void printArray(int arr[],int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

}
int main()
{
	int array[1000];
	int size;
	std::cout << "Input size : "; std::cin >> size;
	std::cout << "Input array\n";
	for (int i = 0; i < size; i++)
		std::cin >> array[i];
	std::cout << "---------Your Array-------------\n";
	
	printArray(array, size);
	
	int d;
	std::cout << "From which place you want to rotate : "; std::cin >> d;
	
	//placeRotate(array, size, d);
	for (int i = 0; i < d; i++)
	{
		int temp = array[0];
		for (int i = 0; i < size; i++)
		{
			array[i] = array[i + 1];
		}
		array[size - 1] = temp;
	}
	std::cout << "---------Your Rotated Array-------------\n";
	printArray(array, size);

	
}