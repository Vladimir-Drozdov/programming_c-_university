#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;
int facrotial(int q) {
    if (q == 0 || q == 1) {
        return 1;
    }
    else if (q > 1) {
        return q * facrotial(q - 1);
    }
}
int main() {
     
     long double v=0;
     long double x, epsilo=0;
     cin >> x>> epsilo;
     long double fi = 2 * x + 0.4;
   //  cout << fi<< setprecision(10) <<"\n";     
     long double epsilon1 = epsilo/ 1.2;
     long double epsilon2 = epsilo / 2.4;
     long double omega[1000];
     long double omega1=0;
     long double omega2[1000];
     long double kk=0, nn=0, pp=0;
     long double z=3*x+1, y=0;
     omega[0] = 1;
     for (int k = 1; k < 10; k++) {
         omega[k] = (0.5) * (omega[k - 1] + (fi / omega[k - 1]));
     //    cout << omega[k]<< " " << omega[k - 1] << " epsilon1: " << epsilon1 << "\n";
         if ((abs(omega[k] - omega[k - 1]) < epsilon1)) {
             kk = k;
             omega[k+1] = 0.5* (omega[k] + fi / omega[k]);
             omega1 = omega[k + 1];
         //    cout << "omega1: " << omega1<<"\n";
             break;
         }
     }
     
     for (int i = 0; i <= 7; i++) {
         y += pow((-1),i)*(pow(z, 2 * i) / facrotial(2 * i));
     }
    // cout << "y: ";
    // cout << y<< setprecision(10);
    // cout << "\n";
     for (int n = 1; n < 20; n++) {
        // cout << (pow(y, 2 * n + 1) / (2 * n + 1)) << " " <<"epsilon2: " << epsilon2 << "\n";
         if (abs(pow(y,2*n+1)/(2*n+1)) < epsilon2) {
             nn = n;
             break;
         }
     }
    // cout << "nn: " << nn << "\n";
     for (int i = 0; i <= nn; i++) {
        // cout<<"\n"<< pow(y, 2 * i + 1) / (2*i+1)<<"\n";
         v += pow((-1), i) * pow(y, 2*i+1) / (2*i+1);
     }
    // cout << "v: " << v << "\n";
     for (int p = 1; p < 30; p++) {
         omega[p] =0.5 * (omega[p - 1] + fi / omega[p - 1]);
         if (abs(omega[p] - omega[p - 1])*v < epsilo) {
             pp = p;
             break;
         }
     }
    /* double fi = 2 * x + 0.4;
     cout << "fi: " << fi << "/n";
     cout << x<<setprecision(20);
     double f1 = pow((2*x + 0.4), 0.5);
     double f2 = 0;
     double f3 = 0;
    for (int i = 0; i <=16; i++) {
        f3 += pow((-1), i) * pow(x, 2*i) / facrotial(2*i);
        
        cout << i<<" "<< f3<<" " << "\n";
    }
    for (int i = 0; i <= 16; i++) {
        f2+=pow((-1), i)* pow(f3, (2*i + 1)) / ((2*i) + 1);
    }
    f = f1 * f2;
    cout << f<<" "<<f1<<" "<<f2<<" "<<f3<<" ";
    */
    long double v1 = omega1 * v;
    cout << "Final answer: " << setprecision(20) << v1 << setprecision(20);
    long double second;
    long double koren = sqrt(2*x+0.4);
    // cout << "\n" << koren << "\n";
    long double sec= koren*atan(cos(3 * x + 1));
    cout <<"\n"<< "Final answer2: " << sec<<setprecision(20);
    cout << "\n" << "Chart: " << -log10(abs(sec - omega1 * v)) << setprecision(10);

    return 0;
}