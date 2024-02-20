
#include <iostream>
#include <string>
#include <iomanip>
#include <set>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("in.txt");
    ofstream ff("out.txt");
    int A, B, C;
    float x1, y1; //Координаты точки А треугольника
    float x2, y2; // Координаты точки B трегольника
    float x3, y3; //Координаты точки С треугольника
    float x4, y4; // Координаты произвольно йточки
    float k1, k2, k3;
    f >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    k1 = (x1 - x4) * (y2 - y1) - (x2 - x1) * (y1 - y4);
    k2 = (x2 - x4) * (y3 - y2) - (x3 - x2) * (y2 - y4);
    k3 = (x3 - x4)*(y1 - y3) - (x1 - x3)*(y3 - y4);
    if ((k1 < 0 && k2 < 0 && k3 < 0) || (k1 > 0 && k2 > 0 && k3 > 0)) {
        ff << "ДA";
    }
    else if (k1 == 0 || k2 == 0 || k3 == 0) {
        ff << "ДА";
    }
    else ff << "НЕТ";


}


