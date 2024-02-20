

#include <iostream>
using namespace std;
void Fool(int a) {
     a = a+1;
     cout << a;
}
void Foo(int &a) {
    a = a+2;
   /// cout << a;
}
void Foo(int *a) {
    *a = 3;
    //cout << *a;
}
int main()
{
    int aa = 2;
    Foo(&aa);
    cout << aa;
}

