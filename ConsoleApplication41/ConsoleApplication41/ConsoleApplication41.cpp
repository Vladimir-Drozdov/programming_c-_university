
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <set>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector <int> a;
    int k = 0, ma = 0;
    string s;
    cin >> s;
    ifstream ff(s);
    for (int i = 0; i != -1; i++) {
        int t;
        ff >> t;
        if (t > ma)
        {
            ma = t;
        }
        if (!ff.eof() && t>=1 && t<=20) {
            k++;
           
            a.push_back(t);
        }
        if (ff.eof()) {
            i = -1;
            break;
        }

    }
    int r = k;
    char** arr = new char* [r];
    int c = ma;

    ifstream f("text.txt");
    for (int i = 0; i < r; i++) {
        arr[i] = new char[c];
    }

    for (int i = 0; i < r; i++) {
        int t;
          
            t = a[i];
            int tt = t;
            int j = c - 1;

            while (tt != 0 && j != -1) {
                arr[i][j] = '#';
                tt--;
            
                j--;

            }
            if (tt == 0) {
                while (j != -1) {
                    arr[i][j] = ' ';
                   
                    j--;
                }
            }
    }

    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
        
            cout << arr[i][j] << " ";
            if (i == r - 1) {
                cout << endl;
            }
        }
    }
    for (int i = 0; i < r; i++) {
        delete[]arr[i];
    }
    delete[]arr;

}

