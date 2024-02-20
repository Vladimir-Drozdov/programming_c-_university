#include <iostream>
#include <set>
#include <vector>
#include<iomanip>
#include <fstream>
#include <cmath>
using namespace std;
int ma[10000][10000];
int main()
{
    ofstream f("out.txt");
    int n;
    cin >> n;
    int k = 0, l = 1, kk = n - 2, ll = n - 2;
    int G = 0, Gg = int(n / 2);

    for (int i = 1; i <= pow(n, 2); i++) {
        while (G <= Gg) {
            k = 0;
            l = 1;
            kk = n - 2;
            ll = n - 2;
            while (k + G < n - G) {
                ma[0 + G][k + G] = i;
                k++;
                i++;
            }
            while (l + G < n - G) {
                ma[l + G][n - 1 - G] = i;
                l++;
                i++;
            }
            while (kk - G >= 0 + G) {
                ma[n - 1 - G][kk - G] = i;
                kk--;
                i++;
            }
            while (ll - G > 0 + G) {
                ma[ll - G][0 + G] = i;
                ll--;
                i++;
            }
            G++;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int ii = 0; ii < n; ii++) {
            f << ma[i][ii] << " ";
            if (ii == n - 1) {
                f << endl;
            }
        }
    }

}
