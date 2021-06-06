#include<iostream>
using namespace std;
class position
{

	int x, y;
public:
	position(){}
	position(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	friend ostream& operator<<(ostream& stream, position& other);
	friend position operator+(position student1, position student2);
};
ostream& operator<<(ostream& stream, position& other)
{
	stream << "(" << other.x << ", " << other.y << ")\n";
	return stream;
}

position operator+(position student1, position student2)
{
	position v;
	v.x = student1.x + student2.x;
	v.y = student1.y + student2.y;
	return v;



}
int main_new()
{
	position p1(3,4), p2(5,6), px(9, 10);

	position p3 = p1 + p2 + px;
	cout << p3;
	return 0;
}