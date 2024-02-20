#pragma once

namespace ConsoleApplication3ньютон3charts {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ менюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ построитьГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьГрафикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходИзПрограммыToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox_epsilon;
	private: System::Windows::Forms::TextBox^ textBox_h;
	private: System::Windows::Forms::TextBox^ textBox_b;
	private: System::Windows::Forms::TextBox^ textBox_a;
	private: System::Windows::Forms::CheckBox^ checkBox_byn_от_iter;
	private: System::Windows::Forms::CheckBox^ checkBox_bxn_от_iter;
	private: System::Windows::Forms::CheckBox^ checkBox_byn_от_e;
	private: System::Windows::Forms::CheckBox^ checkBox_bxn_от_e;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->менюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->построитьГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьГрафикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзПрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_epsilon = (gcnew System::Windows::Forms::TextBox());
			this->textBox_h = (gcnew System::Windows::Forms::TextBox());
			this->textBox_b = (gcnew System::Windows::Forms::TextBox());
			this->textBox_a = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox_byn_от_iter = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_bxn_от_iter = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_byn_от_e = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_bxn_от_e = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart->Legends->Add(legend1);
			this->chart->Location = System::Drawing::Point(6, 21);
			this->chart->Name = L"chart";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Blue;
			series2->Legend = L"Legend1";
			series2->Name = L"Series2";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series3->Legend = L"Legend1";
			series3->Name = L"Series3";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Green;
			series4->Legend = L"Legend1";
			series4->Name = L"Series4";
			this->chart->Series->Add(series1);
			this->chart->Series->Add(series2);
			this->chart->Series->Add(series3);
			this->chart->Series->Add(series4);
			this->chart->Size = System::Drawing::Size(883, 354);
			this->chart->TabIndex = 0;
			this->chart->Text = L"chart1";
			title1->Name = L"Title1";
			this->chart->Titles->Add(title1);
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(502, 124);
			this->chart2->Name = L"chart2";
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart2->Series->Add(series5);
			this->chart2->Size = System::Drawing::Size(8, 8);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->менюToolStripMenuItem,
					this->выходИзПрограммыToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1291, 30);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// менюToolStripMenuItem
			// 
			this->менюToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->построитьГрафикToolStripMenuItem,
					this->очиститьГрафикToolStripMenuItem
			});
			this->менюToolStripMenuItem->Name = L"менюToolStripMenuItem";
			this->менюToolStripMenuItem->Size = System::Drawing::Size(65, 26);
			this->менюToolStripMenuItem->Text = L"Меню";
			// 
			// построитьГрафикToolStripMenuItem
			// 
			this->построитьГрафикToolStripMenuItem->Name = L"построитьГрафикToolStripMenuItem";
			this->построитьГрафикToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->построитьГрафикToolStripMenuItem->Text = L"Построить график";
			this->построитьГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::построитьГрафикToolStripMenuItem_Click);
			// 
			// очиститьГрафикToolStripMenuItem
			// 
			this->очиститьГрафикToolStripMenuItem->Name = L"очиститьГрафикToolStripMenuItem";
			this->очиститьГрафикToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->очиститьГрафикToolStripMenuItem->Text = L"Очистить график";
			this->очиститьГрафикToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститьГрафикToolStripMenuItem_Click);
			// 
			// выходИзПрограммыToolStripMenuItem
			// 
			this->выходИзПрограммыToolStripMenuItem->Name = L"выходИзПрограммыToolStripMenuItem";
			this->выходИзПрограммыToolStripMenuItem->Size = System::Drawing::Size(174, 26);
			this->выходИзПрограммыToolStripMenuItem->Text = L"Выход из программы";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chart);
			this->groupBox1->Location = System::Drawing::Point(25, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(895, 381);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"График";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox_epsilon);
			this->groupBox2->Controls->Add(this->textBox_h);
			this->groupBox2->Controls->Add(this->textBox_b);
			this->groupBox2->Controls->Add(this->textBox_a);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(1017, 43);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(249, 164);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры";
			// 
			// textBox_epsilon
			// 
			this->textBox_epsilon->Location = System::Drawing::Point(70, 121);
			this->textBox_epsilon->Name = L"textBox_epsilon";
			this->textBox_epsilon->Size = System::Drawing::Size(120, 22);
			this->textBox_epsilon->TabIndex = 7;
			// 
			// textBox_h
			// 
			this->textBox_h->Location = System::Drawing::Point(70, 89);
			this->textBox_h->Name = L"textBox_h";
			this->textBox_h->Size = System::Drawing::Size(120, 22);
			this->textBox_h->TabIndex = 6;
			// 
			// textBox_b
			// 
			this->textBox_b->Location = System::Drawing::Point(70, 55);
			this->textBox_b->Name = L"textBox_b";
			this->textBox_b->Size = System::Drawing::Size(120, 22);
			this->textBox_b->TabIndex = 5;
			// 
			// textBox_a
			// 
			this->textBox_a->Location = System::Drawing::Point(70, 27);
			this->textBox_a->Name = L"textBox_a";
			this->textBox_a->Size = System::Drawing::Size(120, 22);
			this->textBox_a->TabIndex = 4;
			this->textBox_a->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"epsilon= ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"h(шаг)= ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"B(до)= ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(10, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A(от)= ";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox_byn_от_iter);
			this->groupBox3->Controls->Add(this->checkBox_bxn_от_iter);
			this->groupBox3->Controls->Add(this->checkBox_byn_от_e);
			this->groupBox3->Controls->Add(this->checkBox_bxn_от_e);
			this->groupBox3->Location = System::Drawing::Point(926, 213);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(340, 164);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выбор графика";
			// 
			// checkBox_byn_от_iter
			// 
			this->checkBox_byn_от_iter->AutoSize = true;
			this->checkBox_byn_от_iter->Location = System::Drawing::Point(226, 83);
			this->checkBox_byn_от_iter->Name = L"checkBox_byn_от_iter";
			this->checkBox_byn_от_iter->Size = System::Drawing::Size(98, 20);
			this->checkBox_byn_от_iter->TabIndex = 3;
			this->checkBox_byn_от_iter->Text = L"byn_от_iter";
			this->checkBox_byn_от_iter->UseVisualStyleBackColor = true;
			// 
			// checkBox_bxn_от_iter
			// 
			this->checkBox_bxn_от_iter->AutoSize = true;
			this->checkBox_bxn_от_iter->Location = System::Drawing::Point(226, 36);
			this->checkBox_bxn_от_iter->Name = L"checkBox_bxn_от_iter";
			this->checkBox_bxn_от_iter->Size = System::Drawing::Size(97, 20);
			this->checkBox_bxn_от_iter->TabIndex = 2;
			this->checkBox_bxn_от_iter->Text = L"bxn_от_iter";
			this->checkBox_bxn_от_iter->UseVisualStyleBackColor = true;
			// 
			// checkBox_byn_от_e
			// 
			this->checkBox_byn_от_e->AutoSize = true;
			this->checkBox_byn_от_e->Location = System::Drawing::Point(18, 83);
			this->checkBox_byn_от_e->Name = L"checkBox_byn_от_e";
			this->checkBox_byn_от_e->Size = System::Drawing::Size(88, 20);
			this->checkBox_byn_от_e->TabIndex = 1;
			this->checkBox_byn_от_e->Text = L"byn_от_e";
			this->checkBox_byn_от_e->UseVisualStyleBackColor = true;
			// 
			// checkBox_bxn_от_e
			// 
			this->checkBox_bxn_от_e->AutoSize = true;
			this->checkBox_bxn_от_e->Location = System::Drawing::Point(18, 36);
			this->checkBox_bxn_от_e->Name = L"checkBox_bxn_от_e";
			this->checkBox_bxn_от_e->Size = System::Drawing::Size(87, 20);
			this->checkBox_bxn_от_e->TabIndex = 0;
			this->checkBox_bxn_от_e->Text = L"bxn_от_e";
			this->checkBox_bxn_от_e->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1291, 477);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
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
private: double a, b, h, epsilon;
private: double x, y;

private: System::Void построитьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void очиститьГрафикToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
