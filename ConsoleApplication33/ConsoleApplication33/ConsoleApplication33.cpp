

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
            cout << dat[i];
        }
        cout << endl;
    }
    MyClass & operator = (const MyClass& other)
    {
       // cout << this<<endl;
        this->Size = other.Size;
        if (this->dat != nullptr)
        {
            delete []this->dat;
                
        }
        this->dat = new int[other.Size];
        for (int i = 0; i < other.Size; i++)
        {
            this->dat[i] = other.dat[i];
            cout << this->dat[i];
        }
        return *this;
    }
    ~MyClass()
    {
       // cout << endl<<this;
        delete[]dat;
    };
private:
    int Size;

};
int main()
{
    setlocale(LC_ALL, "ru");
    MyClass a(4);
    MyClass b(10);
    MyClass c(11);
    c=a = b;
   

}


