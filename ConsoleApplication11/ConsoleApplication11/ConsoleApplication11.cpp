﻿
#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    srand(time(NULL));
    ifstream f("in.txt");
    int d=0 ,s3;
    int ii;
    int summa = 0;
    int z;
    vector<int>s;
    vector<int>ss;
    while (!f.eof()) {
        f >> ii;
        s.push_back(ii);

    }
    for (int i = 0; i < s.size(); i++) {
        if (i != s.size() - 1) {
            ss.push_back(s[i]);
           // cout << s[i] << " ";
        }
        if (i == (s.size() - 1)) {
            d = s[i];
            cout << d;
        }
    }
       
    for (int i = 0; i < ss.size(); i++) {
        summa = summa + ss[i];
    }
    cout << (summa - d)/2;
    cout << (summa + d) / 2;
    cout << d;
    s3 = (3 + 1) / 2;
   cout << s3 << endl;
 //  int sweet2 = 0;
  //  bool sweet3 = true;
 //   int y;
 //   y = ss.size();
  //  const int so = 8;
  //  int arr[25] = {};
    //   while (sweet3 == true) {
    //       for (int i = 0, j = 0; i < ss.size(); i++, j++) {
   //            int sweet;
               //  sweet = rand() % (ss.size() - 1);
   //            sweet = rand() % 6;
               // //  arr[j] = ss[sweet];
    //           sweet2 = sweet2 + ss[sweet];
    //           if (sweet2 == z) {
    //               sweet3 = false;
                   ////        for (int i = 0; i < 24; i++) {
                          //     if (arr[i] != 0) {
                  ////                 cout << arr[i];
                         //      }
    //           }

   //
   //        }
   //    }
   //    sweet2 = 0;
       ////   int arr[25] = {};

}






