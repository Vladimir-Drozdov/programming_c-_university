#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <string>
#include <cmath>
#include <set>
 using namespace std;

int main()
{

    srand(time(NULL));
    ifstream f("in.txt");
    int d = 0, s3;
    int ii;
    int summa = 0;
    int z;
    vector<int>s;
    vector<int>ss;
    vector<int>bay;
    vector<int>sour;
    vector<int>coal;
    multiset<int>fault;
    vector<int>er(25);
    for (int io = 0; io < 25; io++) {
        er[io] = -1;
    }
    
    while (!f.eof()) {
        f >> ii;
        s.push_back(ii);

    }
    for (int i = 0; i < s.size(); i++) {
        if (i != s.size() - 1) {
            ss.push_back(s[i]);
            
        }
        if (i == (s.size() - 1)) {
            d = s[i];
           
        }
    }


    for (int i = 0; i < ss.size(); i++) {
        summa = summa + ss[i];
    }
    if ((summa - d) % 2 != 0) {
        cout << "Decision doesn`t exist";
        return 0;
    }
    z = (summa - d) / 2;
    
      int sweet2 = 0;
       bool sweet3 = true;
       int y;
      y = ss.size();
 
       int arr[25] = {};
    linkk:
       while (sweet3 == true) {
           sweet2 = 0;
           for (int io = 0; io < 25; io++) {
               er[io] = -1;
           }
           for (int i = 0; i < ss.size(); i++) {
               int sweet = 0;
               bool alreadyThere;
               
               sweet = rand() % (ss.size());
               for (int io = 0; io < 25; io++) {
                   if (er[io]==sweet) {
                       for (int io = 0; io < 25; io++) {
                           er[io] = -1;
                       }
                       io = 0;
                       i = 0;
                       sweet = 0;
                       sweet2 = 0;
                       goto linkk;
                   }
               }
               arr[i] = ss[sweet];
               er[i] = sweet;
               sweet2 = sweet2 + ss[sweet];
               if (sweet2 == z) {
                 
                   
                   int hue = 0 , i = 0;
                   while (hue != z) {
                       bay.push_back(arr[i]);
                       
                       hue = hue + arr[i];
                       i++;

                      
                   }
                   sweet3 = false;
                   break;
                   
               }

         
           }
       }
          
           for (int i = 0; i < ss.size(); i++) {
               for (int k = 0; k < bay.size(); k++) {
                   if (ss[i] == bay[k]) {
                       bay[k] = 0;
                       if (ss[i] >= 0) {
                           ss[i] = -ss[i];
                       }
                       else
                       if (ss[i] < 0) {
                         
                           coal.push_back(i);
                       }
                   }
               }
           }
           for (int i = 0; i < ss.size(); i++) {
               linnk:
               for (int rest = 0; rest < coal.size(); rest++) {
                   if (i == coal[rest]) {
                       cout << "-(" << ss[i] << ")";
                       i++;
                       goto linnk;
                   }
                   
               }
               if (i == (ss.size() - 1)) {

                   if (ss[i] < 0) {
                       cout << "+(" << ss[i] << ")";
                       goto link;
                   }
                   if (ss[i] == 0) {
                       cout << "+" << ss[i];
                   }else
                   cout << ss[i];
                   break;
               }
               if (ss[i] < 0 && i==0) {
                   cout << "(" << ss[i] << ")";
               }
               else
               if (ss[i] < 0 && ss[i+1]<0) {
                   cout  <<"+("<< ss[i]<<")";
               } else
               if (ss[i] < 0 && ss[i + 1] >= 0) {
                   cout << "+(" << ss[i] <<")";
               }else
               if (ss[i] > 0 && i == 0) {
                   cout << ss[i];
               }else
               
               if (ss[i]== 0 &&i!=0 ) {
                   cout << "+"<<ss[i];
               }
               else
               if (ss[i] == 0 && i==0) {
                    cout <<ss[i];
               }
               else
                   cout <<"+"<< ss[i];
           }
       link:
           cout << "=" << d;
       
}


