
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <set>
#include <vector>
#include <cmath>

int F(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
		
	}
	return true;
}
using namespace std;
int main()
{
	ifstream f("in.txt");
	ofstream ff("out.txt");
	int A, B;
	f >> A;
	f >> B;
	cout << A << B;
		if(A < B && B < 250000) {
			for (int i = A; i <= B; i++) {
				if (F(i) == true) {
					ff << i << endl;
				}
			}
		}
		else return 0;
}


