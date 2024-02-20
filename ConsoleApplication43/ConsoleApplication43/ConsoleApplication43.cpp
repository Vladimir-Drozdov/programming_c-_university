

#include <iostream>
using namespace std;
int main()
{
     int k;
     cin >> k;
    
    int  *a4=new int [k];
    for (int i = 0; i < k; i++) {
        a4[i] = i;
    }
    delete[]a4;
}

