

#include <iostream>
using namespace std;
class MyClass
{
public:
	int y=9,z=0;
	
	/*int *dat;*/
	MyClass( int size)
	{
		
		this-> y = size;
		/*this->Size = size;
		this->dat = new int[size];
		for (int i = 0; i < size; i++) {
			dat[i] = i;
		}*/
		cout << "Конструтор вызван"<<this<<endl;
	};
	MyClass(const MyClass &other)
	{
		/*this->Size = other.Size;
		this->dat = new int [other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->dat[i] = other.dat[i];
		}*/
		this->z = other.y;
		cout << "Конструтор копирования вызван" << this << endl;
	}
	~MyClass()
	{
		cout << "Деструктор вызван" << this << endl;
		/*delete[]dat;*/
	};
private:
	int Size;
};


int main()

{
	setlocale(LC_ALL, "ru");

	MyClass a(1);
	MyClass b(a);
	cout << z;

	return 0;
}


