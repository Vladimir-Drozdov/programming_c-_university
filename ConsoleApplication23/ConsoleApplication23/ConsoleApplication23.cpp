
#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
    int size;
    int csize;
    int* data;

public:
    Point(int size)
    {
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        this->size = size;
    
    }
    ~Point()
    {
        delete[]data;
    }
   /* Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }*/
    int age;
    int aver;
    int weight;
    void SetX(int valueX)
    {
        x = valueX;
    }
    int GetX()
    {
        return x;
    }
   
    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<data[i];
        }
        cout << size;
    }
};
int main()
{
    Point a(40);
    a.age=30;
  //  a.Print();
    a.SetX(50);
   a.GetX();
    a.Print();
}

