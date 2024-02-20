

#include <iostream>
using namespace std;

int main()
{
	int *arr= new int [2];
	int a = 0;
	//int *pa = &a;
	for (int i = 0; i < 2; i++) {
		//int a = 0;
		arr[i] = a;
		a++;
	}
	for (int i = 0; i < 2; i++) {
		cout << *(arr+i)<<" ";
	}
	delete [] arr;
}


