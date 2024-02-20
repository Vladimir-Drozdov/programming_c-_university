#pragma once

namespace ConsoleApplication2matrusy4graphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox_h;
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::CheckBox^ checkBox_Zeidel_iterations;
	private: System::Windows::Forms::CheckBox^ checkBox_Zeidel_epsilon;
	private: System::Windows::Forms::CheckBox^ checkBox_Gauss;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_iterations;
	private: System::Windows::Forms::TextBox^ textBox_epsilon;
	private: System::Windows::Forms::TextBox^ textBox_n;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_iterations = (gcnew System::Windows::Forms::TextBox());
			this->textBox_epsilon = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_Zeidel_iterations = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_Zeidel_epsilon = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_Gauss = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			legend3->Title = L"����� ��������";
			this->chart->Legends->Add(legend3);
			this->chart->Location = System::Drawing::Point(6, 21);
			this->chart->Name = L"chart";
			series7->BorderWidth = 3;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Color = System::Drawing::Color::Red;
			series7->Legend = L"Legend1";
			series7->LegendText = L"Gauss";
			series7->Name = L"Series1";
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Color = System::Drawing::Color::Navy;
			series8->Legend = L"Legend1";
			series8->LegendText = L"Zeidel epsilon";
			series8->Name = L"Series2";
			series9->BorderWidth = 3;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::DarkOliveGreen;
			series9->Legend = L"Legend1";
			series9->LegendText = L"Zeidel iterations";
			series9->Name = L"Series3";
			this->chart->Series->Add(series7);
			this->chart->Series->Add(series8);
			this->chart->Series->Add(series9);
			this->chart->Size = System::Drawing::Size(856, 311);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1365, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->���������������ToolStripMenuItem->Text = L"��������� ������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart);
			this->groupBox1->Location = System::Drawing::Point(11, 52);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(870, 409);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox_iterations);
			this->groupBox2->Controls->Add(this->textBox_epsilon);
			this->groupBox2->Controls->Add(this->textBox_n);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox_h);
			this->groupBox2->Controls->Add(this->textBox_b);
			this->groupBox2->Controls->Add(this->textBox_a);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(887, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(447, 151);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�";
			// 
			// textBox_iterations
			// 
			this->textBox_iterations->Location = System::Drawing::Point(301, 83);
			this->textBox_iterations->Name = L"textBox_iterations";
			this->textBox_iterations->Size = System::Drawing::Size(107, 22);
			this->textBox_iterations->TabIndex = 12;
			// 
			// textBox_epsilon
			// 
			this->textBox_epsilon->Location = System::Drawing::Point(279, 59);
			this->textBox_epsilon->Name = L"textBox_epsilon";
			this->textBox_epsilon->Size = System::Drawing::Size(107, 22);
			this->textBox_epsilon->TabIndex = 11;
			// 
			// textBox_n
			// 
			this->textBox_n->Location = System::Drawing::Point(311, 34);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(107, 22);
			this->textBox_n->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(212, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"iterations=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(212, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"dimension(n)=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(212, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"epsilon=";
			// 
			// textBox_h
			// 
			this->textBox_h->Location = System::Drawing::Point(82, 81);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(107, 22);
			this->textBox_h->TabIndex = 5;
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(74, 56);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(107, 22);
			this->textBox_b->TabIndex = 4;
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(73, 31);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(107, 22);
			this->textBox_a->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"h(���)=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�(��)=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�(��)=";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox_Zeidel_iterations);
			this->groupBox3->Controls->Add(this->checkBox_Zeidel_epsilon);
			this->groupBox3->Controls->Add(this->checkBox_Gauss);
			this->groupBox3->Location = System::Drawing::Point(887, 209);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(447, 154);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"�������";
			// 
			// checkBox_Zeidel_iterations
			// 
			this->checkBox_Zeidel_iterations->AutoSize = true;
			this->checkBox_Zeidel_iterations->Location = System::Drawing::Point(6, 89);
			this->checkBox_Zeidel_iterations->Name = L"checkBox_Zeidel_iterations";
			this->checkBox_Zeidel_iterations->Size = System::Drawing::Size(131, 21);
			this->checkBox_Zeidel_iterations->TabIndex = 2;
			this->checkBox_Zeidel_iterations->Text = L"Zeidel iterations";
			this->checkBox_Zeidel_iterations->UseVisualStyleBackColor = true;
			// 
			// checkBox_Zeidel_epsilon
			// 
			this->checkBox_Zeidel_epsilon->AutoSize = true;
			this->checkBox_Zeidel_epsilon->Location = System::Drawing::Point(6, 62);
			this->checkBox_Zeidel_epsilon->Name = L"checkBox_Zeidel_epsilon";
			this->checkBox_Zeidel_epsilon->Size = System::Drawing::Size(118, 21);
			this->checkBox_Zeidel_epsilon->TabIndex = 1;
			this->checkBox_Zeidel_epsilon->Text = L"Zeidel epsilon";
			this->checkBox_Zeidel_epsilon->UseVisualStyleBackColor = true;
			// 
			// checkBox_Gauss
			// 
			this->checkBox_Gauss->AutoSize = true;
			this->checkBox_Gauss->Location = System::Drawing::Point(6, 35);
			this->checkBox_Gauss->Name = L"checkBox_Gauss";
			this->checkBox_Gauss->Size = System::Drawing::Size(71, 21);
			this->checkBox_Gauss->TabIndex = 0;
			this->checkBox_Gauss->Text = L"Gauss";
			this->checkBox_Gauss->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1365, 467);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"������ (chart)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double a, b, h, epsilon, iterations;
	private: int n;
	private: double x, y;
	
	private: void DefaultParams();

	private: System::Void ���������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
