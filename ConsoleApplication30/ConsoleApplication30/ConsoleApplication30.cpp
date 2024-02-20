
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    long long a, minim = 700, j;
    vector <int>v;

    cin>> a;
    while (a != 0) {
        int y;
        y = a % 10;
        v.push_back(y);
        a = a / 10;
    }
    for (int i = v.size() - 1; i >=0; i--) {
        if (v[i] < minim) {
            minim = v[i];
            j = i;
        }
    }
    for (int i = v.size()-1; i >=0; i--) {
        
        if (i == j) {
            continue;
        }
        cout << v[i];
    }
}


