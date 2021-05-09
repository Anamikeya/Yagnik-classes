#include<iostream>

class Arthimetics
{
public:
	Arthimetics(int number)
	{
		this->a = number;
	}
	Arthimetics()
	{

	}

	void add(int number)
	{
		std::cout << number + a <<std::endl;
	}
	void mul(int number)
	{
		std::cout << number * a << std::endl;

	}
private:
	int a;
	std::string _2ndName;

};

void add_pro(int num)
{
	int a = 5;
	std::cout << num + a << std::endl;
}
void multiply_pro(int num)
{
	int a = 5;
	std::cout << num * a << std::endl;
}
/*
struct location
{
	int x, y;
	location(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};*/

class Entity
{
public:
	Entity(int n)
	{
		std::cout << n * 5;
	}
	Entity()
	{

	}

};

class Player
{
private:

	std::string name;
	int power;
	int x, y;

public:

	Player(std::string name_passed, int power_passed, int x, int y)
	{
		this->name = name_passed;
		this->power = power_passed;
		this->x = x;
		this->y = y;
	}
	Player()
	{
		std::cout << "This is Default constructor\n";
	}
	void Player_info()
	{
		std::cout << "Name = " << name << std::endl;
		std::cout << "power = " << power << std::endl;
		std::cout << "Position = (" << x << ","<<y << std::endl;
	
	}
	void move()
	{
		x += 1;
		y += 1;
		std::cout << "(" << x << "," << y << ")\n";
	}
	void move_left()
	{
		x -= 1;
		std::cout << "(" << x << "," << y << ")\n";
	}
};

int main_classes()
{
	
	Player First("Anurag", 25, 9, 6);
	Player Second("Yagnik", 90, 10, 12);
	First.Player_info();
	Second.Player_info();
	char c;
	while (std::cin >> c)
	{
		if (c == 'w')
			First.move();
		else if (c == 'a')
			First.move_left();
	}
	
	std::cout << "Hello World\n";
	return 0;
}