#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x0, y0;
    cin >> x0 >> y0;
    double mas[100][100];
    double p1=3,p2=3, epsilon=0.000001;
    while (p1>=epsilon || p2>=epsilon) {
        double siny = sin(y0);
        double right1 = -(cos(y0) + x0 - 1.5);
        double cosx = cos(x0 - 0.5);
        double right2 = -(2 * y0 - sin(x0 - 0.5) - 1);

        mas[0][0] = 1;
        mas[0][1] = -siny;
        mas[0][2] = right1;
        mas[1][0] = -cosx;
        mas[1][1] = 2;
        mas[1][2] = right2;

        for (int j = 0; j <= 2; j++) {
            mas[1][j] = mas[1][j] / mas[1][0];
        }
        for (int j = 0; j <= 2; j++) {
            mas[1][j] = mas[1][j] - mas[0][j];
        }
        double bxn, byn;
        byn = mas[1][2] / mas[1][1];
        bxn = mas[0][2] - mas[0][1] * byn;
        p1 = abs(byn);
        p2 = abs(bxn);
        y0 = y0 + byn;
        x0 = x0 + bxn;
        cout << endl << "x: " << x0 << endl << "y: "<< y0;

    }
    //Точность 
    cout <<endl<< "Точность по x: " << p2<<endl<<"Точность по y: "<< p1;
    //Невязка старым способом
    cout << endl << "Невязка: " << endl;
    cout << abs(cos(y0) + x0 - 1.5) + abs(2 * y0 - sin(x0 - 0.5) - 1);
    
}





