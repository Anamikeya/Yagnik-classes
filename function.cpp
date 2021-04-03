#include<iostream>
void Log(const char* message);

int add(int x, int y)

{
	x++;
	y++;
	x--;
	y--;
	x++;
	return x + y;

}
float addFloat(int a, float x)
{
	int r;
	float y = a + x;
	return y;
}

int main()
{
	int sums;

	sums = add(7, 10);
	float c = addFloat(2, 2.0099);
	std::cout << "sum : " << sums << std::endl;
	std::cout << "sum of float :" << c << std::endl;


	Log("Hello World");
	Log("99");

}
