#include "pch.h"
#include "MyForm.h"
#include <math.h>
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ConsoleApplication3ньютон3charts::MyForm form;
    Application::Run(% form);
}

System::Void ConsoleApplication3ньютон3charts::MyForm::построитьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox_bxn_от_e->Checked == false && checkBox_byn_от_e->Checked == false &&
        checkBox_bxn_от_iter->Checked == false && checkBox_byn_от_iter->Checked==false) {
        MessageBox::Show("Выберите хотябы 1 график", "Внимание!");
        return;
    }
    if (textBox_a->Text == "" || textBox_b->Text == "" || textBox_h->Text == "") {
        MessageBox::Show("Параметры по умолчанию!", "Внимание!");
       
    }
    else {
        a = Convert::ToDouble(textBox_a->Text);
        b = Convert::ToDouble(textBox_b->Text);
        h = Convert::ToDouble(textBox_h->Text);
       // n = Convert::ToInt64(textBox_n->Text);
        epsilon = Convert::ToDouble(textBox_epsilon->Text);
        //iterations = Convert::ToDouble(textBox_iterations->Text);
    }


    if (checkBox_bxn_от_iter->Checked) {
        int iter = a;

        this->chart->Series[2]->Points->Clear();
        //while (iter <= b) {
            double x0=0.9, y0=0.9;
            // cin >> x0 >> y0;
            double mas[100][100];
            double p1 = 3, p2 = 3;
           // while (p1 >= epsilon || p2 >= epsilon) {
            while (iter <= b && (p1 >= epsilon || p2 >= epsilon)) {
               // double siny = sin(y0);
               double siny = sin(0.9);
                double right1 = -(cos(y0) + x0 - 1.5);
                //double cosx = cos(x0 - 0.5);
                double cosx = cos(0.9 - 0.5);
                double right2 = -(2 * y0 - sin(x0 - 0.5) - 1);

                mas[0][0] = 1;
                mas[0][1] = -siny;
                mas[0][2] = right1;
                mas[1][0] = -cosx;
                mas[1][1] = 2;
                mas[1][2] = right2;

                for (int j = 0; j <= 2; j++) {
                    mas[1][j] = mas[1][j] / mas[1][0];
                }
                for (int j = 0; j <= 2; j++) {
                    mas[1][j] = mas[1][j] - mas[0][j];
                }
                double bxn, byn;
                byn = mas[1][2] / mas[1][1];
                bxn = mas[0][2] - mas[0][1] * byn;
                p1 = abs(byn);
                p2 = abs(bxn);
                y0 = y0 + byn;
                x0 = x0 + bxn;
                // cout << endl << "x: " << x0 << endl << "y: " << y0;
                
                this->chart->Series[2]->Points->AddXY(iter, abs(bxn));
                iter += h;
            }
            //Точность 
           // cout << endl << "Точность по x: " << p2 << endl << "Точность по y: " << p1;
            //Невязка старым способом
          //  cout << endl << "Невязка: " << endl;
          //cout << abs(cos(y0) + x0 - 1.5) + abs(2 * y0 - sin(x0 - 0.5) - 1);
       // }

    }
    if (checkBox_byn_от_iter->Checked) {
        int iter = a;

        this->chart->Series[3]->Points->Clear();
        //while (iter <= b) {
        double x0 = 0.9, y0 = 0.9;
        // cin >> x0 >> y0;
        double mas[100][100];
        double p1 = 3, p2 = 3;
        // while (p1 >= epsilon || p2 >= epsilon) {
        while (iter <= b && (p1 >= epsilon || p2 >= epsilon)) {
            //double siny = sin(y0);
            double siny = sin(0.9);
            double right1 = -(cos(y0) + x0 - 1.5);
            //double cosx = cos(x0 - 0.5);
            double cosx = cos(0.9 - 0.5);
            double right2 = -(2 * y0 - sin(x0 - 0.5) - 1);

            mas[0][0] = 1;
            mas[0][1] = -siny;
            mas[0][2] = right1;
            mas[1][0] = -cosx;
            mas[1][1] = 2;
            mas[1][2] = right2;

            for (int j = 0; j <= 2; j++) {
                mas[1][j] = mas[1][j] / mas[1][0];
            }
            for (int j = 0; j <= 2; j++) {
                mas[1][j] = mas[1][j] - mas[0][j];
            }
            double bxn, byn;
            byn = mas[1][2] / mas[1][1];
            bxn = mas[0][2] - mas[0][1] * byn;
            p1 = abs(byn);
            p2 = abs(bxn);
            y0 = y0 + byn;
            x0 = x0 + bxn;
            // cout << endl << "x: " << x0 << endl << "y: " << y0;

            this->chart->Series[3]->Points->AddXY(iter, abs(byn));
            iter += h;
        }
        //Точность 
       // cout << endl << "Точность по x: " << p2 << endl << "Точность по y: " << p1;
        //Невязка старым способом
      //  cout << endl << "Невязка: " << endl;
      //cout << abs(cos(y0) + x0 - 1.5) + abs(2 * y0 - sin(x0 - 0.5) - 1);
   // }

    }

}

System::Void ConsoleApplication3ньютон3charts::MyForm::очиститьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBox_bxn_от_e->Checked == false && checkBox_byn_от_e->Checked == false && 
        checkBox_bxn_от_iter->Checked == false && checkBox_byn_от_iter->Checked == false) {
        MessageBox::Show("Выберите хотябы 1 график", "Внимание!");
        return;
    }

    if (checkBox_bxn_от_e->Checked) {
        this->chart->Series[0]->Points->Clear();
    }

    if (checkBox_byn_от_e->Checked) {
        this->chart->Series[1]->Points->Clear();
    }

    if (checkBox_bxn_от_iter->Checked) {
        this->chart->Series[2]->Points->Clear();
    }
    if (checkBox_byn_от_iter->Checked) {
        this->chart->Series[3]->Points->Clear();
    }
}






