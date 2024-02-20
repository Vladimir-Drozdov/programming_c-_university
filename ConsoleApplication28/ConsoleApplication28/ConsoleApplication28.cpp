

#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
 int main()
{
    int t = 0;
    int size;
    cin >> size;
    int *arr=new int[size];
    vector <int> v;
    set  <int> s;
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
        
    }
    
    for (int i = 0; i < size; i++) {
        int y;
        y = arr[i];
        s.insert(y);

    }
    for (auto now : s)
    {
     
        v.push_back(now);
    }
    for (int i = 0; i < v.size(); i++) {
     
        t++;
    }
    cout << t;
    delete[] arr;
}


