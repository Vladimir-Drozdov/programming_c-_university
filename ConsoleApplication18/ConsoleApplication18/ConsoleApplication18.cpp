
#include <iostream>
using namespace std;
int F(int t)
{
    if (t == 0) {
        return 0;

    }
    if (t == 1) {
        return 1;

    }
    if (t > 1) {
        return t * F(t-1)/2;

    }
}
int main()

{
    int t = 0;
    int r, c;
    cin >> r >> c;
    int** arr = new int *[r];
    for (int i = 0; i < r; i++) {
        arr[i] = new int[c];
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
             t++;
            arr[i][j] = F(t);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j]<<" ";
        }
        cout<< endl;
    }
    for (int i = 0; i < r; i++) {
        delete [] arr[i];
    }
    delete[]arr;
}

