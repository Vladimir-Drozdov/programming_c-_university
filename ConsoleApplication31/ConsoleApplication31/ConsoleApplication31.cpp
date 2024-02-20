
#include <iostream>
using namespace std;
class MyClass
{
	int* data;
public:
	MyClass(int size)
	{
		data = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> data[i];
		}
	}
	void FA( int size) {
		for (int i = 0; i < size; i++)
		{
			cout << data[i];
		}
	}
	~MyClass()
	{
		delete[]data;
	}
};
int main(){
	MyClass a(3);
	a.FA(3);
}


