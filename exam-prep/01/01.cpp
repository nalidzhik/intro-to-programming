#include <iostream>

using namespace std;

struct Point
{
	int x, y;
	Point(const int x, const int y) :x(x), y(y)
	{
	}
};

int square(int x);
int euclidDistSquare(Point p1, Point p2);
void order(int& a, int& b, int& c);
bool CheckRectangular(const Point&, const Point&, const Point&);

int main()
{
	Point p1 = Point(3, 0);
	Point p2 = Point(0,4);
	Point p3 = Point(4,7);

	cout<<CheckRectangular(p1,p2,p3) << endl;
	return 0;
}
int square(int x)
{
	return x * x;
}

int euclidDistSquare(Point p1, Point p2)
{
	return square(p1.x - p2.x) + square(p1.y - p2.y);
}
void order(int& a, int& b, int& c)
{
	int copy[3];
	copy[0] = a;
	copy[1] = b;
	copy[2] = c;
	int temp = 0;
	for (int i = 0;i < 3;i++)
	{
		for (int j = 0;j < 2;j++)
		{
			if (copy[j] > copy[i])
			{
				temp = copy[i];
				copy[i] = copy[j];
				copy[j] = temp;
			}
		}

	}
	a = copy[0];
	b = copy[1];
	c = copy[2];
}
bool CheckRectangular(const Point& p1, const Point& p2, const Point& p3)
{
	int a = euclidDistSquare(p1, p2);
	int b = euclidDistSquare(p1, p3);
	int c = euclidDistSquare(p2, p3);

	order(a, b, c);

	if (a + b == c)
	{
		return true;
	}

	return false;
}