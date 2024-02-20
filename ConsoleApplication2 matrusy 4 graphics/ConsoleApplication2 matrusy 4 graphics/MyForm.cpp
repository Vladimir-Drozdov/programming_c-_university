#include "MyForm.h"
#include <math.h>
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;
double massiv[100000];
double massivdouble[100000];
double mas[100000];
double matr1[100][100];
double matr2[100][100];
double matr3[100];
double matr4[100][100];
double massiv2[100000];
double massiv3[100000];
double mas2[100000];
double mas3[100000];
double masnev[100000];
double newmassiv[100][100];
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication2matrusy4graphics::MyForm form;
	Application::Run(% form);
}

System::Void ConsoleApplication2matrusy4graphics::MyForm::построитьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox_Gauss->Checked == false && checkBox_Zeidel_epsilon->Checked == false && checkBox_Zeidel_iterations->Checked == false) {
		MessageBox::Show("Выберите хотябы 1 график", "Внимание!");
		return;
	}
	if (textBox_a->Text == "" || textBox_b->Text == "" || textBox_h->Text == "") {
		MessageBox::Show("Параметры по умолчанию!", "Внимание!");
		DefaultParams();
	}
	else {
		a = Convert::ToDouble(textBox_a->Text);
		b = Convert::ToDouble(textBox_b->Text);
		h = Convert::ToDouble(textBox_h->Text);
	    n= Convert::ToInt64(textBox_n->Text);
		epsilon = Convert::ToDouble(textBox_epsilon->Text);
		iterations = Convert::ToDouble(textBox_iterations->Text);
	}


	if (checkBox_Gauss->Checked) {
        int iter = a;

		this->chart->Series[0]->Points->Clear();
		while (iter <= b) {
            
            double k2;
           
            k2 = pow(10, -(n));
            for (int i = 0; i < n * n + n; i++) {
                massiv[i] = 0;
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr1[i][j] = 1;
                    }
                    if (i > j) {
                        matr1[i][j] = 0;
                    }
                    if (i < j) {
                        matr1[i][j] = -1;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr2[i][j] = 1;
                    }
                    if (i > j) {
                        matr2[i][j] = 1;
                    }
                    if (i < j) {
                        matr2[i][j] = -1;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                if (i == (n - 1)) {
                    matr3[i] = 1;
                }
                else {
                    matr3[i] = -1;
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr4[i][j] = matr1[i][j] + epsilon * 4 * matr2[i][j];
                    }
                    if (i > j) {
                        matr4[i][j] = matr1[i][j] + epsilon * 4 * matr2[i][j];
                    }
                    if (i < j) {
                        matr4[i][j] = matr1[i][j] + epsilon * 4 * matr2[i][j];
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    massiv[(n + 1) * i + j] = matr4[i][j];

                }
            }
            for (int i = 0; i < n; i++) {
                massiv[n + i * (n + 1)] = matr3[i];
            }
            
            for (int i = 0; i < n * n + n; i++) {

                if (i % (n + 1) == 0) {
                    //cout << endl;
                }
               // cout << massiv[i] << " ";
                massivdouble[i] = massiv[i];
            }
           // cout << endl;
            //////////////

            for (int i = 0; i < n * n + n; i++) {

                mas[i] = massiv[i];
            }
            for (int i = 0; i < n * n + n; i++) {
                for (int l = 0; l < n; l++) {
                    double k = massiv[l * (n + 1) + l];
                    for (int i = l * (n + 1) + l; i < (l + 1) * (n + 1); i++) {
                        massiv[i] = massiv[i] / k;
                    }

                    for (int j = 1 + l; j <= n; j++) {
                        double k2 = massiv[(n + 1) * j + l];
                        for (int i = (n + 1) * j + l; i < (n + 1) * (j + 1); i++) {
                            massiv[i] = massiv[i] - k2 * massiv[i - (n + 1) * (j - l)];
                        }
                    }
                }
            }
            for (int i = 0; i < n * n + n; i++) {
                // cout << massiv[i] << " ";
                if (i % (n + 1) == n) {
                    // cout << "\n";
                }
            }


            int i = 0;
            double f = 0;

            while (i < n) {
                for (int j = 0; j <= i; j++) {
                    massiv3[j] = massiv[n * n + n - 1 - i * (n + 1) - j];
                }
                for (int j = 0; j <= i; j++) {
                    if (j == 0) {
                        f = massiv[n * n + n - 1 - i * (n + 1) - j];
                    }
                    if (j != 0) {
                        f = f - massiv[n * n + n - 1 - i * (n + 1) - j] * massiv2[n - (j - 1)];
                    }
                }
                massiv2[n - i] = f / massiv[n * n + n - 2 - (i * (n + 1) + i * 1)];
                i++;
            }

            // cout << endl << "Answers for Gauss" << endl;
            for (int i = 1; i <= n; i++) {
                //    cout << setprecision(20) << massiv2[i] << endl;
            }
            //  cout << " \n Zeidel: \n";
             /* for (int i = n - 1; i >= 1; i--) {
                  for (int l = i; l < n; l++) {
                      for (int j = 0; j <= n; j++) {
                          mas[(i - 1) * (n + 1) + j] = mas[(i - 1) * (n + 1) + j] + mas[(l) * (n + 1) + j];
                      }
                  }

              }
              */
            for (int i = 0; i < n; i++) {
                //mas2[i] = mas[n * (i + 1) + i] / mas[i * (n + 2)];////крайний коэфф делю на диаг, получен нулевой столбец членов
               // cout << endl << mas2[i];
                if (i == 0) {
                    mas2[i] = 12;
                }
                if (i > 0) {
                    mas2[i] = 12;
                }
            }
            int j = 0;
            while (j < iter) {
                for (int i = 0; i < n; i++) {
                    double k = 0;
                    if (i >= 1) {
                        mas2[i - 1] = mas3[i - 1];
                    }

                    for (int jj = 0; jj < n; jj++) {
                        k = k + mas[(n + 1) * i + jj] * mas2[jj];
                    }

                    mas3[i] = 1 / mas[i * (n + 2)] * (mas[n * (i + 1) + i] - k + mas[i * (n + 2)] * mas2[i]);///////////
                   // mas3[i] = 1* (mas[n * (i + 1) + i] - k + mas[i * (n + 2)] * mas2[i]);
                }

                for (int i = 0; i < n; i++) {
                    mas2[i] = mas3[i];

                }
                j++;
            }
            
            //невязка

            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= n; j++) {
                    newmassiv[i][j] = massivdouble[i * (n + 1) + j];

                }
            }
            //cout << "cout massiv[]" << endl << endl;
            for (int i = 0; i < n; i++) {
                // cout << endl;
                for (int j = 0; j <= n; j++) {
                    //  cout << setprecision(6) << newmassiv[i][j] <<" ";

                }
            }
            //massiv2[i]G mas3[i]Z
            for (int i = 0; i < n; i++) {
                double k = 0;
                for (int j = 0; j < n; j++) {
                    k += newmassiv[i][j] * massiv2[j+1];

                }
                masnev[i] = k - newmassiv[i][n];
            }
            double massivZG[1000];
            for (int i = 0; i < n; i++) {
                massivZG[i] = massiv2[i] - mas3[i];
            }
            double k0=0;
            for (int i = 0; i < n; i++) {
                k0 += abs(massivZG[i]);
            }
           // cout << endl << "Nevyazka:" << endl;
            double k1 = 0;
            for (int i = 0; i < n; i++) {

                //  cout << setprecision(20)<< masnev[i] << endl;
                k1 += abs(masnev[i]);
            }
            k1 = k1;
            y = k0;
            //cout << setprecision(20) << k1;
			this->chart->Series[0]->Points->AddXY(iter, y);
			iter += h;
		}
	}

	if (checkBox_Zeidel_epsilon->Checked) {
		x = a;
		this->chart->Series[1]->Points->Clear();
		while (x <= b) {
            int iter=iterations;
            double k2;
           
            k2 = pow(10, -(n));
            for (int i = 0; i < n * n + n; i++) {
                massiv[i] = 0;
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr1[i][j] = 1;
                    }
                    if (i > j) {
                        matr1[i][j] = 0;
                    }
                    if (i < j) {
                        matr1[i][j] = -1;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr2[i][j] = 1;
                    }
                    if (i > j) {
                        matr2[i][j] = 1;
                    }
                    if (i < j) {
                        matr2[i][j] = -1;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                if (i == (n - 1)) {
                    matr3[i] = 1;
                }
                else {
                    matr3[i] = -1;
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr4[i][j] = matr1[i][j] + x * 4 * matr2[i][j];
                    }
                    if (i > j) {
                        matr4[i][j] = matr1[i][j] + x * 4 * matr2[i][j];
                    }
                    if (i < j) {
                        matr4[i][j] = matr1[i][j] + x * 4 * matr2[i][j];
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    massiv[(n + 1) * i + j] = matr4[i][j];

                }
            }
            for (int i = 0; i < n; i++) {
                massiv[n + i * (n + 1)] = matr3[i];
            }
            
            for (int i = 0; i < n * n + n; i++) {

                if (i % (n + 1) == 0) {
               //     cout << endl;
                }
              //  cout << massiv[i] << " ";
                massivdouble[i] = massiv[i];
            }
           // cout << endl;
            

            for (int i = 0; i < n * n + n; i++) {

                mas[i] = massiv[i];
            }
            for (int i = 0; i < n * n + n; i++) {
                for (int l = 0; l < n; l++) {
                    double k = massiv[l * (n + 1) + l];
                    for (int i = l * (n + 1) + l; i < (l + 1) * (n + 1); i++) {
                        massiv[i] = massiv[i] / k;
                    }

                    for (int j = 1 + l; j <= n; j++) {
                        double k2 = massiv[(n + 1) * j + l];
                        for (int i = (n + 1) * j + l; i < (n + 1) * (j + 1); i++) {
                            massiv[i] = massiv[i] - k2 * massiv[i - (n + 1) * (j - l)];
                        }
                    }
                }
            }
            for (int i = 0; i < n * n + n; i++) {
                // cout << massiv[i] << " ";
                if (i % (n + 1) == n) {
                    // cout << "\n";
                }
            }


            int i = 0;
            double f = 0;

            while (i < n) {
                for (int j = 0; j <= i; j++) {
                    massiv3[j] = massiv[n * n + n - 1 - i * (n + 1) - j];
                }
                for (int j = 0; j <= i; j++) {
                    if (j == 0) {
                        f = massiv[n * n + n - 1 - i * (n + 1) - j];
                    }
                    if (j != 0) {
                        f = f - massiv[n * n + n - 1 - i * (n + 1) - j] * massiv2[n - (j - 1)];
                    }
                }
                massiv2[n - i] = f / massiv[n * n + n - 2 - (i * (n + 1) + i * 1)];
                i++;
            }

            //cout << endl << "Answers for Gauss" << endl;
            for (int i = 1; i <= n; i++) {
               // cout << setprecision(20) << massiv2[i] << endl;
            }
           // cout << " \n Zeidel: \n";
          //  cout << " \n Zeidel: \n";
          /*  for (int i = n - 1; i >= 1; i--) {
                for (int l = i; l < n; l++) {
                    for (int j = 0; j <= n; j++) {
                        mas[(i - 1) * (n + 1) + j] = mas[(i - 1) * (n + 1) + j] + mas[(l) * (n + 1) + j];
                    }
                }

            }
            */
          
            for (int i = 0; i < n; i++) {
                mas2[i] = mas[n * (i + 1) + i] / mas[i * (n + 2)];////крайний коэфф делю на диаг, получен нулевой столбец членов
               // cout << endl << mas2[i];
                //mas2[i] = mas[n * (i + 1) + i]*10;
               
            }
            int j = 0;
            while (j < iter) {
                for (int i = 0; i < n; i++) {
                    double k = 0;
                    if (i >= 1) {
                        mas2[i - 1] = mas3[i - 1];
                    }

                    for (int jj = 0; jj < n; jj++) {
                        k = k + mas[(n + 1) * i + jj] * mas2[jj];
                    }

                    mas3[i] = 1 / mas[i * (n + 2)] * (mas[n * (i + 1) + i] - k + mas[i * (n + 2)] * mas2[i]);///////////
                   // mas3[i] = 1* (mas[n * (i + 1) + i] - k + mas[i * (n + 2)] * mas2[i]);
                }

                for (int i = 0; i < n; i++) {
                    mas2[i] = mas3[i];

                }
                j++;
            }
           // cout << endl << "Answers for Zeidel:" << endl;
            for (int i = 0; i < n; i++) {
              //  cout << endl;
              //  cout << setprecision(20) << mas3[i] << " ";

            }
            //невязка

            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= n; j++) {
                    newmassiv[i][j] = massivdouble[i * (n + 1) + j];

                }
            }
            //cout << "cout massiv[]" << endl << endl;
            for (int i = 0; i < n; i++) {
                // cout << endl;
                for (int j = 0; j <= n; j++) {
                    //  cout << setprecision(6) << newmassiv[i][j] <<" ";

                }
            }
            //massiv2[i]G mas3[i]Z
            for (int i = 0; i < n; i++) {
                double k = 0;
                for (int j = 0; j < n; j++) {
                    k += newmassiv[i][j] * mas3[j];

                }
                masnev[i] = k - newmassiv[i][n];
            }
           // cout << endl << "Nevyazka:" << endl;
            double k1 = 0;
            for (int i = 0; i < n; i++) {

                //  cout << setprecision(20)<< masnev[i] << endl;
                k1 += abs(masnev[i]);
            }
            k1 = k1;
            y = k1;
            //cout << setprecision(20) << k1;
			this->chart->Series[1]->Points->AddXY(x, y);
			x += h;
		}
	}

	if (checkBox_Zeidel_iterations->Checked) {
		int iter = a;
        
		this->chart->Series[1]->Points->Clear();
		while (iter <= b) {
            
            double k2;
            
            k2 = pow(10, -(n));
            for (int i = 0; i < n * n + n; i++) {
                massiv[i] = 0;
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr1[i][j] = 1;
                    }
                    if (i > j) {
                        matr1[i][j] = 0;
                    }
                    if (i < j) {
                        matr1[i][j] = -1;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr2[i][j] = 1;
                    }
                    if (i > j) {
                        matr2[i][j] = 1;
                    }
                    if (i < j) {
                        matr2[i][j] = -1;
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                if (i == (n - 1)) {
                    matr3[i] = 1;
                }
                else {
                    matr3[i] = -1;
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        matr4[i][j] = matr1[i][j] + epsilon * 4 * matr2[i][j];
                    }
                    if (i > j) {
                        matr4[i][j] = matr1[i][j] + epsilon * 4 * matr2[i][j];
                    }
                    if (i < j) {
                        matr4[i][j] = matr1[i][j] + epsilon * 4 * matr2[i][j];
                    }
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    massiv[(n + 1) * i + j] = matr4[i][j];

                }
            }
            for (int i = 0; i < n; i++) {
                massiv[n + i * (n + 1)] = matr3[i];
            }
            
            for (int i = 0; i < n * n + n; i++) {

                if (i % (n + 1) == 0) {
                   // cout << endl;
                }
               // cout << massiv[i] << " ";
                massivdouble[i] = massiv[i];
            }
           
            //////////////

            for (int i = 0; i < n * n + n; i++) {

                mas[i] = massiv[i];
            }
            for (int i = 0; i < n * n + n; i++) {
                for (int l = 0; l < n; l++) {
                    double k = massiv[l * (n + 1) + l];
                    for (int i = l * (n + 1) + l; i < (l + 1) * (n + 1); i++) {
                        massiv[i] = massiv[i] / k;
                    }

                    for (int j = 1 + l; j <= n; j++) {
                        double k2 = massiv[(n + 1) * j + l];
                        for (int i = (n + 1) * j + l; i < (n + 1) * (j + 1); i++) {
                            massiv[i] = massiv[i] - k2 * massiv[i - (n + 1) * (j - l)];
                        }
                    }
                }
            }
            for (int i = 0; i < n * n + n; i++) {
                // cout << massiv[i] << " ";
                if (i % (n + 1) == n) {
                    // cout << "\n";
                }
            }


            int i = 0;
            double f = 0;

            while (i < n) {
                for (int j = 0; j <= i; j++) {
                    massiv3[j] = massiv[n * n + n - 1 - i * (n + 1) - j];
                }
                for (int j = 0; j <= i; j++) {
                    if (j == 0) {
                        f = massiv[n * n + n - 1 - i * (n + 1) - j];
                    }
                    if (j != 0) {
                        f = f - massiv[n * n + n - 1 - i * (n + 1) - j] * massiv2[n - (j - 1)];
                    }
                }
                massiv2[n - i] = f / massiv[n * n + n - 2 - (i * (n + 1) + i * 1)];
                i++;
            }

           // cout << endl << "Answers for Gauss" << endl;
            for (int i = 1; i <= n; i++) {
            //    cout << setprecision(20) << massiv2[i] << endl;
            }
          //  cout << " \n Zeidel: \n";
           /* for (int i = n - 1; i >= 1; i--) {
                for (int l = i; l < n; l++) {
                    for (int j = 0; j <= n; j++) {
                        mas[(i - 1) * (n + 1) + j] = mas[(i - 1) * (n + 1) + j] + mas[(l) * (n + 1) + j];
                    }
                }

            }
            */
            for (int i = 0; i < n; i++) {
                //mas2[i] = mas[n * (i + 1) + i] / mas[i * (n + 2)];////крайний коэфф делю на диаг, получен нулевой столбец членов
               // cout << endl << mas2[i];
                if (i == 0) {
                    mas2[i] = 12;
                }
                if (i > 0) {
                    mas2[i] = 12;
                }
            }
            int j = 0;
            while (j < iter) {
                for (int i = 0; i < n; i++) {
                    double k = 0;
                    if (i >= 1) {
                        mas2[i - 1] = mas3[i - 1];
                    }

                    for (int jj = 0; jj < n; jj++) {
                        k = k + mas[(n + 1) * i + jj] * mas2[jj];
                    }

                    mas3[i] = 1 / mas[i * (n + 2)] * (mas[n * (i + 1) + i] - k + mas[i * (n + 2)] * mas2[i]);///////////
                   // mas3[i] = 1* (mas[n * (i + 1) + i] - k + mas[i * (n + 2)] * mas2[i]);
                }

                for (int i = 0; i < n; i++) {
                    mas2[i] = mas3[i];

                }
                j++;
            }
         //   cout << endl << "Answers for Zeidel:" << endl;
            for (int i = 0; i < n; i++) {
           //     cout << endl;
           //     cout << setprecision(20) << mas3[i] << " ";

            }
            //невязка

            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= n; j++) {
                    newmassiv[i][j] = massivdouble[i * (n + 1) + j];

                }
            }
            //cout << "cout massiv[]" << endl << endl;
            for (int i = 0; i < n; i++) {
                // cout << endl;
                for (int j = 0; j <= n; j++) {
                    //  cout << setprecision(6) << newmassiv[i][j] <<" ";

                }
            }
            //massiv2[i]G mas3[i]Z
            for (int i = 0; i < n; i++) {
                double k = 0;
                for (int j = 0; j < n; j++) {
                    k += newmassiv[i][j] * mas3[j];

                }
                masnev[i] = k - newmassiv[i][n];
            }
            //cout << endl << "Nevyazka:" << endl;
            double k1 = 0;
            for (int i = 0; i < n; i++) {

                //  cout << setprecision(20)<< masnev[i] << endl;
                k1 += pow(masnev[i],2);
            }
            k1 = k1;
            y = sqrt(k1);
           // cout << setprecision(20) << k1;
			this->chart->Series[1]->Points->AddXY(iter, y);
			iter += h;
		}
	}

}

System::Void ConsoleApplication2matrusy4graphics::MyForm::очиститьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox_Gauss->Checked == false && checkBox_Zeidel_epsilon->Checked == false && checkBox_Zeidel_iterations->Checked == false) {
		MessageBox::Show("Выберите хотябы 1 график", "Внимание!");
		return;
	}

	if (checkBox_Gauss->Checked) {
		this->chart->Series[0]->Points->Clear();
	}

	if (checkBox_Zeidel_epsilon->Checked) {
		this->chart->Series[1]->Points->Clear();
	}

	if (checkBox_Zeidel_iterations->Checked) {
		this->chart->Series[1]->Points->Clear();
	}
}

System::Void ConsoleApplication2matrusy4graphics::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Выйти?", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}

void ConsoleApplication2matrusy4graphics::MyForm::DefaultParams()
{
	a = 0.01;
	b = 0.06;
	h = 0.005;
    n = 5;
    epsilon = 0.00001;
    iterations = 3;
}


