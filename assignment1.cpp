#include <iostream>
#include<string>
using namespace std;

class Student
{
	public:
	int RollNo;
	string Name;
	float Marks;

	void Accept()
	{
		cout<<"Enter roll no. of student:"<<endl;
		cin>>RollNo;

		cout<<"Enter name of student:"<<endl;
		cin>>Name;

		cout<<"Enter mark of student:"<<endl;
		cin>>Marks;
	}

	void Result()
	{
		if (Marks>40)
		{
			cout<<"RESULT: Passed"<<endl;
		}

		else
		{
			cout<<"RESULT: Failed"<<endl;
		}
	}


	void Display()
	{
		cout<<"\n Student Details---"<<endl;
		cout<<"\n Roll No. of student:"<<RollNo;
		cout<<"\n Name of student:"<<Name;
		cout<<"\n Marks of student:"<<Marks;
		Result();
	}
};

int main()
{
	Student s;
	s.Accept();
	s.Display();
	return 0;
};
