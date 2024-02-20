

#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = 0;
		y = 0;
		cout << this << endl;
	}
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	bool operator ==(const Point& other)
	{
		return this->x == other.x && this->y == 11;
	}
};
int main()
{
	Point a(5, 11);
	Point b(5, 6);
	Point c(5, 6);
	bool result = a == b;
	cout << result;
}




