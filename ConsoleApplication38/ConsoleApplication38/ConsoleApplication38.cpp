
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	link:
	int b;
	cin >> b;
	int a = b;
	int d;
	d = a;
	int t = 0;
	int i = 0;
	while (d != 0) {


		d = a / 10;
		a = a / 10;
		i++;
	//	cout << i << endl;
	}
	if (i != 3) {
		cout << "Повторите ввод" << endl;
		goto link;
	}
	else {
		//cout << 1111;
		int d = b;
		int r = 1;
		while (d != 0) {
			t = t + (b % 10);
			r = r * (b % 10);
			d = b / 10;
			b = b / 10;
		//	cout << d<<" ";
		}
		if (t > 9 && t < 100) {
			cout << "Сумма цифр - двузначная" << endl;
		}
		else {
			cout << "Сумма цифр - недвузначная" << endl;
		}
		if (r > 99 && r < 1000) {
			cout << "Произведениме чисел- трехзначное" << endl;
		}
		else {
			cout << "Произведениме чисел- нетрехзначное" << endl;
		}
	}
}


