#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;
double massiv[100000];
double massivdouble[100000];
double mas[100000];
double matr1[100][100];
double matr2[100][100];
double matr3[100];
double matr4[100][100];
double massiv2[100000];
double massiv3[100000];
double mas2[100000];
double mas3[100000];
double masnev[100000];
double newmassiv[100][100];
int main()
{


    int n;
    long double x;
    double epsilon, k2;
    cin >> n>> x;
    k2 = pow(10, -(n));
    for (int i = 0; i < n * n + n; i++) {
        massiv[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matr1[i][j] = 1;
            }
            if (i > j) {
                matr1[i][j] = 0;
            }
            if (i < j) {
                matr1[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matr2[i][j] = 1;
            }
            if (i > j) {
                matr2[i][j] = 1;
            }
            if (i < j) {
                matr2[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i == (n - 1)) {
            matr3[i] = 1;
        }
        else {
            matr3[i] = -1;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                matr4[i][j] = matr1[i][j] + x * 4 * matr2[i][j];
            }
            if (i > j) {
                matr4[i][j] = matr1[i][j] + x * 4 * matr2[i][j];
            }
            if (i < j) {
                matr4[i][j] = matr1[i][j] + x * 4 * matr2[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            massiv[(n + 1) * i + j] = matr4[i][j];

        }
    }
    for (int i = 0; i < n; i++) {
        massiv[n + i * (n + 1)] = matr3[i];
    }

    for (int i = 0; i < n * n + n; i++) {

        if (i % (n + 1) == 0) {
           cout << endl;
        }
         cout << massiv[i] << " ";
        massivdouble[i] = massiv[i];
    }
     cout << endl;
     //////////////

    for (int i = 0; i < n * n + n; i++) {

        mas[i] = massiv[i];
    }
    for (int i = 0; i < n * n + n; i++) {
        for (int l = 0; l < n; l++) {
            double k = massiv[l * (n + 1) + l];
            for (int i = l * (n + 1) + l; i < (l + 1) * (n + 1); i++) {
                massiv[i] = massiv[i] / k;
            }

            for (int j = 1 + l; j <= n; j++) {
                double k2 = massiv[(n + 1) * j + l];
                for (int i = (n + 1) * j + l; i < (n + 1) * (j + 1); i++) {
                    massiv[i] = massiv[i] - k2 * massiv[i - (n + 1) * (j - l)];
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


    int i = 0;
    double f = 0;

    while (i < n) {
        for (int j = 0; j <= i; j++) {
            massiv3[j] = massiv[n * n + n - 1 - i * (n + 1) - j];
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0) {
                f = massiv[n * n + n - 1 - i * (n + 1) - j];
            }
            if (j != 0) {
                f = f - massiv[n * n + n - 1 - i * (n + 1) - j] * massiv2[n - (j - 1)];
            }
        }
        massiv2[n - i] = f / massiv[n * n + n - 2 - (i * (n + 1) + i * 1)];
        i++;
    }

    cout << endl << "Answers for Gauss" << endl;
    for (int i = 1; i <= n; i++) {
         cout << setprecision(20) << massiv2[i] << endl;
    }
    //cout << " \n Zeidel: \n";

   // for (int i = 0; i < n; i++) {
    //    mas2[i] = mas[n * (i + 1) + i] / mas[i * (n + 2)];////крайний коэфф делю на диаг, получен нулевой столбец членов
     //  // cout << endl << mas2[i];
   // }
    int j = 0;

    //невязка

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            newmassiv[i][j] = massivdouble[i * (n + 1) + j];

        }
    }
    cout << "cout newmassiv[]" << endl << endl;
    for (int i = 0; i < n; i++) {
         cout << endl;
        for (int j = 0; j <= n; j++) {
              cout << setprecision(6) << newmassiv[i][j] <<" ";

        }
    }
    //massiv2[i]G mas3[i]Z
    for (int i = 0; i < n; i++) {
        double k = 0;
        for (int j = 0; j < n; j++) {
            k += newmassiv[i][j] * massiv2[j+1];
            cout << endl <<"massiv2[j]" << massiv2[j+1];
        }
        cout << endl << k << endl;
        masnev[i] = k - newmassiv[i][n];
    }
     cout << endl << "Nevyazka:" << endl;
    double k1 = 0;
    for (int i = 0; i < n; i++) {

         cout << setprecision(20)<< masnev[i] << endl;
        k1 += abs(masnev[i]);
    }
    k1 = k1;

    cout << setprecision(20) << k1;

}
  





