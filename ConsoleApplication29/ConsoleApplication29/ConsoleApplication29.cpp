
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int a, t=0, x=0;
	cin>> a;
	while (a != 0) {
		int y;
		y=a % 10;
		x = x + y * (pow(2,t));
		
		t++;
		a = a / 10;
	}
	cout << x;
}

