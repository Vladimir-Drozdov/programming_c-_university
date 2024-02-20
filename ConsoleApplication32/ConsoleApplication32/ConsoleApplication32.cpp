

#include <iostream>
using namespace std;
class MyClass
{
public:
    int* dat;
    MyClass(int size)
    {
        this->Size = size;
        this->dat = new int[size];
        for (int i = 0; i < size; i++)
        {
            dat[i] = i;
        }
        cout << "Вызван конструктор" << this << endl;
    }
    

    MyClass(const MyClass& other) {
        
        this->Size = other.Size;
        this -> dat = new int[other.Size];
        for (int i = 0; i < other.Size; i++)
        {
            this->dat[i] = other.dat[i];
        }
        cout << "Кщнструктор копирование вызван" << this << endl;
    }
    ~MyClass()
    {
        cout << "Деструктор вызван" << this << endl;
        delete[]dat;
    }
private:
    int Size;
};
void Foo(MyClass value) {
    cout << "Вызвана функция1" << endl;
}
MyClass Foo2()
{
    cout << "Вызвана функция 2" << endl;
    MyClass temp(2);
    return temp;

};

int main()
{
    setlocale(LC_ALL, "ru");
    Foo2();
    MyClass a(1);
    MyClass b(a);
    Foo(a);
    return 0;
    
}


