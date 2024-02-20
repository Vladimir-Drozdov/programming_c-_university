
#include <iostream>
using namespace std;
int main()
{
	//setlocale(LC_ALL, "Rus");
	//link:
	int a;
	cin>> a;
	int d;
	d = a;
	int t = 0;
	int i=0;
	while (d != 0) {
		
		
		d = a / 10;
		i++;
	}
	if (i != 3) {
		cout << "Повторите ввод"<<endl;
		//goto link;
	}
	else {
		int d = 0;
		int r = 1;
		while (d != 0) {
			t = t + a % 10;
			r = r * a % 10;
			d = a / 10;
		}
		if (t > 9 && t < 100) {
			cout << "Сумма цифр - двузначная"<<endl;
		}
		if (r > 99 && t < 1000) {
			cout << "Произведениме чисел- трехзначное"<<endl;
		}
	}
}


