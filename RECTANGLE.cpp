#include <iostream>
using namespace std;
class Rectangle
{
	private:
	float length,breadth;

	public:
	void getData()
	{
		cout<<"Enter the length:";
		cin>>length;
		cout<<"Enter the breadth:";
		cin>>breadth;
	}

	float Perimeter();
	float Area();

	void Display()
	{
		cout<<"The perimeter of the rectangle is:"<<Perimeter()<<endl;
		cout<<"The area of the rectangle is:"<<Area()<<endl;
	}

};

float Rectangle::Area()
{
	return length*breadth;
}

float Rectangle::Perimeter()
{
	return 2*(length+breadth);
}

int main()
{
	Rectangle r;
	r.getData();
	r.Display();
}
