#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    ifstream f("in.txt");
    int d;
    int i;
    int summa = 0;
    int z;
    vector<int>s;
    vector<int>ss;
    while (!f.eof()) {
        f >> i;
        s.push_back(i);
    }
    for (int i = 0; i < s.size(); i++) {
        if (i != s.size() - 1) {
            ss.push_back(s[i]);
        }
        if (i == s.size() - 1) {
            d = s[i];
        }
    }
   // srand(time(NULL));
    for (int i = 0; i < ss.size(); i++) {
        summa = summa + ss[i];
    }
    z = (summa - d) / 2;
  //  cout << z << endl;
 //  int sweet2 = 0;
 // bool sweet3 = true;
 //   int y;
   // y = ss.size();
  //  const int so = 8;
   // int arr[25] = {};
}