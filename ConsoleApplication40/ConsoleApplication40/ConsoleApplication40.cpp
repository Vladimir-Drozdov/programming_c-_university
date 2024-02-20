
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
    int k = 0, ma=0;
    ifstream ff("text.txt");
    for (int i = 0; i!=-1; i++) {
        int t;
        ff >> t;
        if (t > ma)
        {
            ma = t;
        }
        if (!ff.eof()) {
            k++;
            cout << t << endl;
        }
        if (ff.eof()) {
            i = -1;
        }
            
    }
    int r=k-1;
    char **arr = new char* [r];
    int c=ma;
    
    ifstream f("text.txt");
    for (int i = 0; i < r; i++) {
        arr[i] = new char[c];
    }
    
    for (int i = 0; i < r; i++) {
        int t;
        f >> t;
        int tt = t;
        int j = c - 1;
            
            while (tt != 0 && j!=-1) {
                arr[i][j] = '#';
                tt--;
               // cout << arr[i][j] << " ";
                j--;
                
            }
            if (tt == 0) {
                while (j != -1) {
                    arr[i][j] = ' ';
                   // cout << arr[i][j] << " ";
                    j--;
                }
            }
          //  cout << endl;
        
    }
    
    cout << endl<<endl;
    
   // for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            for (int i = 0; i < r; i++) {
            //cout << j << " ";
            cout << arr[i][j]<<" ";
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
