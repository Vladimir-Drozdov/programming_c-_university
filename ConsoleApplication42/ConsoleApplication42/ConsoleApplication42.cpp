
#include <iostream>
#include <cmath>
using namespace std;


class Point {
    
public:
    float pi = 3.14159265358979323846;

    int x;
    int y;
    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }
    Point(int valueX) {
        x = valueX;
        y = 0;
    }
    void F() {
        cout << "Координаты точки:" << endl << "ось x: " << x << endl << "ось y: " << y << endl;
        cout << "Радиус-вектор точки: " << pow((pow(abs(x), 2) + pow(abs(y), 2)), 0.5)<<endl;
        if (x != 0) {
            cout << "Угол наклона к оси Ох: " << ((atan(abs(y) / abs(x))) * 180 / pi) << " градусов";
        }
        if(x==0 && y!=0){
            cout << "Угол наклона к оси Ох: " << " 90 градусов";
        }
        if (x == 0 && y == 0) {
            cout << "Точка-начало координат";
        }
    }
};


int main()
{
    system("chcp 1251>>null");
    Point A(3,4);
    A.F();
  
}


