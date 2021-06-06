#include<iostream>
using namespace std;

class Students 
{

	string name;
	int roll;
	int marks;
	string course;
public:
	Students(){}
	Students(std::string name, int  r, int m, string c)
	{
		this->name = name;
		this->roll = r;
		this->marks = m;
		this->course = c;
	}
	friend ostream& operator<<(ostream& stream, Students student);

};

ostream& operator<<(ostream& stream, Students student)
{
	stream << "name = " << student.name <<endl;
	stream << "roll number = " << student.roll << endl;
	stream << "Marks = " << student.marks << endl;
	stream << "course = " << student.course << endl;

	return stream;
}


int main_sms()
{
	Students s1("anu",10, 100,"Computer"), s2;
	cout << "data of s1\n" << s1 << endl;
	cout << "data of s2\n " << s2 << endl;

	return 0;
}