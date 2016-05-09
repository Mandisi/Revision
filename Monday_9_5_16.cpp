#include<iostream>
#include<math.h>
using namespace std;

class Point
{
private:
	int x, y;

public:
	Point()//default constructor
	{
	
	}

	Point(int a, int b)// constructor can be placed anywhere
	{
		x = a;
		y = b;
	}
	void setX(int x)
	{
		this->x = x;
	}

	int getX()
	{
		return x;
	}
	void setY(int y)
	{
		this->y = y;
	}

	int getY()
	{
		return y;
	}

	float distance(Point a, Point b)
	{
		int dx = a.x - b.x;
		int dy = a.y - b.y;

		return sqrt(pow(dx, 2) + pow(dy, 2));
	}
	~Point()
	{
		cout << "Point deleted" << endl;
	}
};

int main()
{
	Point p(0, 0);//or can just be p(2,4)
	p.setX(2);
	p.setY(4);

	//another point
	Point z;
	Point x;
	x.setX(5);
	x.setY(8);

float d = z.distance(p, x);

	cout << "Distance = " << d << endl;
	return 0;
}
//Constructor covered,Destructor,Composition
//memory deallocation
//Destructor:special function,same name with the class' name;neither takes parameters nor returns anything
//dealloctes memory form an object
//Defining a destrcutor
//~ClassName()
//{}
//Compostion: several objects come together to form an object.Or object made up of other objects.
