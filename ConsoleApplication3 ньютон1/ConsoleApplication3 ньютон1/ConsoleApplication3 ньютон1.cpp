#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;
double mas[100000];
int main()
{
     mas[0] = 0.5;
     double x=0;
     double p = 1;
     int i = 0;
     while (p > 0.0001) {
         double f1 = pow(mas[i], 2) + 1 - acos(mas[i]);
         double f2 = 2 * mas[i] + 1 / pow((1 - mas[i] * mas[i]), 0.5);
        // double f2 = 2 * 0.5 + 1 / pow((1 - 0.5 *0.5), 0.5);
         double f3 = f1 / f2;
         cout << f1 << " " << f2 << " " << f3 << endl;
         mas[i+1] = mas[i] - f3;
         x = mas[i + 1];
         cout << x << endl;
         p = abs(mas[i+1] - mas[i]);
         i++;
     }
     cout <<"Answer: " << x << " " << p;
}





