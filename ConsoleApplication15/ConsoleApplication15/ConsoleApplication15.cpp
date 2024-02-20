
#include <iostream>
using namespace std;
inline int F(int a, int b)
{
    return a + b;
}
int main()
{
    int arr[5]{ 1,2,3,4,6 };
    cout << arr << endl;;
    int* y = arr;
    cout << y << endl << y[2];
    cout << "===========" << endl;
    cout << arr + 2;
    cout << endl;
    cout << *(arr + 2) << endl;
    cout << (y + 3) << endl;
}


