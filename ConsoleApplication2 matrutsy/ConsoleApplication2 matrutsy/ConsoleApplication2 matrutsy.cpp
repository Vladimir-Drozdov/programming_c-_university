#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;
int facrotial(int q) {
    if (q == 0 || q == 1) {
        return 1;
    }
    else if (q > 1) {
        return q * facrotial(q - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    double massiv[100];
    double mas[100];
    for (int i = 0; i < n * n + n; i++) {
        cin >> massiv[i];
        mas[i] = massiv[i];
    }
    for (int i = 0; i < n * n + n; i++) {
        for (int l = 0; l < n; l++) {
            double k = massiv[l*(n + 1) + l];
            for (int i = l*(n + 1) + l; i < (l+1)*(n + 1); i++) {
                massiv[i] = massiv[i] / k;
            }

            for (int j = 1+l; j <= n; j++) {
                double k2 = massiv[(n + 1) * j+l];
                for (int i = (n + 1) * j+l; i < (n + 1) * (j + 1); i++) {
                    massiv[i] = massiv[i] - k2 * massiv[i - (n + 1) * (j-l)];
                }
            }
        }
    }
    for (int i = 0; i < n * n + n; i++) {
        cout << massiv[i] << " ";
        if (i % (n + 1) == n) {
            cout << "\n";
        }
    }
    double massiv2[100];
   
    int i = 0;
    double f = 0;
    double massiv3[100];
    while (i < n) {
        for (int j = 0; j <= i; j++) {
            massiv3[j]= massiv[n * n + n - 1 - i * (n + 1)-j];
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                f = massiv[n * n + n - 1 - i * (n + 1) - j];
            }
            if (j != 0) {
                f = f - massiv[n * n + n - 1 - i * (n + 1) - j] * massiv2[n-(j-1)];
            }
        }
        massiv2[n - i] = f / massiv[n * n + n - 2 - (i * (n + 1) + i * 1)];
        i++;
    }
       
    cout << endl<<"Answers for Gauss"<<endl;
    for (int i = 1; i <= n; i++) {
        cout << massiv2[i]<<" ";
    }
   // cout << " \n Zeidel: \n";
    double mas2[100];
    double mas3[100];
    for (int i = 0; i < n; i++) {
        mas2[i] = mas[n*(i+1)+i]/mas[i * (n + 2)];////крайний коэфф делю на диаг, получен нулевой столбец членов
       // cout << endl << mas2[i];
    }
    int j = 0;
    while (j < 23) {
        for (int i = 0; i < n; i++) {
            double k = 0;
            for (int j = 0; j < n; j++) {
                k = k + mas[(n + 1) * i + j] * mas2[j];
            }

            mas3[i] = 1 / mas[i * (n + 2)] * (mas[n * (i + 1) + i] - k + mas[i * (n + 2)] * mas2[i]);

        }
        
        for (int i = 0; i < n; i++) {
            mas2[i] = mas3[i];

        }
        j++;
    }
    cout << endl << "Answers for Zeidel:" << endl;
    for (int i = 0; i < n; i++) {
        cout << endl;
        cout << mas3[i] << " ";

    }
    
}


