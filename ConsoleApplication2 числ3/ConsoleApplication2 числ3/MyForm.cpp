#include "MyForm.h"
#include <math.h>
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;
int facrotial(int q) {
	if (q == 0 || q == 1) {
		return 1;
	}
	else if (q > 1) {
		return q * facrotial(q - 1);
	}
}
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication2числ3::MyForm form;
	Application::Run(% form);
}

System::Void ConsoleApplication2числ3::MyForm::построитьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox_cos->Checked == false && checkBox_sin->Checked == false) {
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
		epsilo = Convert::ToDouble(textBox4_e->Text);
	}
    
    
	if (checkBox_cos->Checked) {
		x = a;
		
		this->chart->Series[0]->Points->Clear();
		while (x <= b) {
			long double v = 0;
			

			long double fi = 2 * x + 0.4;

			long double epsilon1 = epsilo / 1.5;
			long double epsilon2 = epsilo / 2.1;
			long double omega[1000];
			long double omega1 = 0;
			long double omega2[1000];
			long double kk = 0, nn = 0, pp = 0, ii=0;
			long double z = 3 * x + 1, y = 0;
			omega[0] = 1;
			for (int k = 1; k < 30; k++) {
				omega[k] = (0.5) * (omega[k - 1] + (fi / omega[k - 1]));

				if ((abs(omega[k] - omega[k - 1]) < epsilon1)) {
					kk = k;
					omega[k + 1] = 0.5 * (omega[k] + fi / omega[k]);
					omega1 = omega[k];
					break;
				}
			}
			for (int i = 0; i <= 17; i++) {
				if ((pow(z, 2 * i) / facrotial(2 * i)) < epsilon2) {
					ii = i;
					break;
				}
			}
			for (int i = 0; i < ii; i++) {
				y += pow((-1), i) * (pow(z, 2 * i) / facrotial(2 * i));
			}

			for (int n = 1; n < 20; n++) {
				if (abs(pow(y, 2 * n + 1) / (2 * n + 1)) < (epsilo/(3*omega1))) {
					nn = n;
					break;
				}
			}

			for (int i = 0; i <= nn; i++) {

				v += pow((-1), i) * pow(y, 2 * i + 1) / (2 * i + 1);
			}

			/*for (int p = 1; p < 30; p++) {
				omega[p] = 0.5 * (omega[p - 1] + fi / omega[p - 1]);
				if (abs(omega[p] - omega[p - 1]) * v < epsilo) {
					pp = p;
					break;
				}
			} */
			long double second;
			//long double koren = sqrt(2 * x + 0.4);
			//long double sec = koren * atan(cos(3 * x + 1));
			long double sec = omega1 * v;
			y = sec;
			this->chart->Series[0]->Points->AddXY(x, y);
			x += h;
		}
	}

	if (checkBox_sin->Checked) {
		x = a;
		this->chart->Series[1]->Points->Clear();
		while (x <= b) {
			long double v = 0;
			//long double epsilo = 0.000001;

			long double fi = 2 * x + 0.4;

			long double epsilon1 = epsilo / 1.2;
			long double epsilon2 = epsilo / 2.4;
			long double omega[1000];
			long double omega1 = 0;
			long double omega2[1000];
			long double kk = 0, nn = 0, pp = 0, ii=0;
			long double z = 3 * x + 1, y = 0;
			omega[0] = 1;
			for (int k = 1; k < 30; k++) {
				omega[k] = (0.5) * (omega[k - 1] + (fi / omega[k - 1]));

				if ((abs(omega[k] - omega[k - 1]) < epsilon1)) {
					kk = k;
					omega[k + 1] = 0.5 * (omega[k] + fi / omega[k]);
					omega1 = omega[k];
					break;
				}
			}
			for (int i = 0; i <= 17; i++) {
				if ((pow(z, 2 * i) / facrotial(2 * i)) < epsilon2) {
					ii = i;
					break;
				}
			}
			for (int i = 0; i < ii; i++) {
				y += pow((-1), i) * (pow(z, 2 * i) / facrotial(2 * i));
			}

			for (int n = 1; n < 20; n++) {
				if (abs(pow(y, 2 * n + 1) / (2 * n + 1)) < (epsilo / (3 * omega1))) {
					nn = n;
					break;
				}
			}

			for (int i = 0; i <= nn; i++) {

				v += pow((-1), i) * pow(y, 2 * i + 1) / (2 * i + 1);
			}
			long double second;
			long double koren = sqrt(2 * x + 0.4);
			long double sec = koren * atan(cos(3 * x + 1));
			y = -log10(abs(sec - omega1 * v));
			this->chart->Series[1]->Points->AddXY(x, y);
			x += h;
		}
	}
	
}

System::Void ConsoleApplication2числ3::MyForm::очиститьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (checkBox_cos->Checked == false && checkBox_sin->Checked == false) {
		MessageBox::Show("Выберите хотябы 1 график", "Внимание!");
		return;
	}

	if (checkBox_cos->Checked) {
		this->chart->Series[0]->Points->Clear();
	}

	if (checkBox_sin->Checked) {
		this->chart->Series[1]->Points->Clear();
	}
}

System::Void ConsoleApplication2числ3::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (MessageBox::Show("Выйти?", "Внимание!", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}

void ConsoleApplication2числ3::MyForm::DefaultParams()
{
	a = 0.01;
	b = 0.06;
	h = 0.005;
	epsilo = 0.0000000001;
}
