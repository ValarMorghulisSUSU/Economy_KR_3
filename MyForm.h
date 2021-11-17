#pragma once

namespace Practive5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Collections::Generic;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		array <double>^ am1;
		array <double>^ am2;

	public:

		   array <double>^ am3;

		MyForm(void)
		{
			am1 = gcnew array<double>(1);
			am2 = gcnew array<double>(1);
			am3 = gcnew array<double>(1);

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
	private: System::Windows::Forms::TextBox^ start_cost;
	protected:
	private: System::Windows::Forms::TextBox^ period;
	private: System::Windows::Forms::TextBox^ ratio;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ method3;
	private: System::Windows::Forms::CheckBox^ method2;
	private: System::Windows::Forms::CheckBox^ method1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->start_cost = (gcnew System::Windows::Forms::TextBox());
			this->period = (gcnew System::Windows::Forms::TextBox());
			this->ratio = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->method3 = (gcnew System::Windows::Forms::CheckBox());
			this->method2 = (gcnew System::Windows::Forms::CheckBox());
			this->method1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// start_cost
			// 
			this->start_cost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start_cost->Location = System::Drawing::Point(15, 40);
			this->start_cost->Name = L"start_cost";
			this->start_cost->Size = System::Drawing::Size(100, 25);
			this->start_cost->TabIndex = 0;
			// 
			// period
			// 
			this->period->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->period->Location = System::Drawing::Point(286, 108);
			this->period->Name = L"period";
			this->period->Size = System::Drawing::Size(100, 25);
			this->period->TabIndex = 1;
			// 
			// ratio
			// 
			this->ratio->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ratio->Location = System::Drawing::Point(15, 108);
			this->ratio->Name = L"ratio";
			this->ratio->Size = System::Drawing::Size(100, 25);
			this->ratio->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->method3);
			this->groupBox1->Controls->Add(this->method2);
			this->groupBox1->Controls->Add(this->method1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(612, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(445, 114);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Метод амортизации";
			// 
			// method3
			// 
			this->method3->AutoSize = true;
			this->method3->Location = System::Drawing::Point(6, 78);
			this->method3->Name = L"method3";
			this->method3->Size = System::Drawing::Size(239, 21);
			this->method3->TabIndex = 2;
			this->method3->Text = L"Прямым методом суммы числа лет";
			this->method3->UseVisualStyleBackColor = true;
			// 
			// method2
			// 
			this->method2->AutoSize = true;
			this->method2->Location = System::Drawing::Point(6, 51);
			this->method2->Name = L"method2";
			this->method2->Size = System::Drawing::Size(437, 21);
			this->method2->TabIndex = 1;
			this->method2->Text = L"Методом уменьшаемого остатка с учетом коэффициента ускорения";
			this->method2->UseVisualStyleBackColor = true;
			// 
			// method1
			// 
			this->method1->AutoSize = true;
			this->method1->Location = System::Drawing::Point(6, 24);
			this->method1->Name = L"method1";
			this->method1->Size = System::Drawing::Size(127, 21);
			this->method1->TabIndex = 0;
			this->method1->Text = L"Линейный метод";
			this->method1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Первоначальная стоимость";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(283, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Срок полезного использования ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Коэффициент ускорения";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 251);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(535, 373);
			this->dataGridView1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(15, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(1042, 45);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(286, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(130, 65);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Формат рассчета";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 37);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(99, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"По месяцам";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(83, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"По годам";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(567, 228);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(490, 410);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1076, 659);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ratio);
			this->Controls->Add(this->period);
			this->Controls->Add(this->start_cost);
			this->Name = L"MyForm";
			this->Text = L"Расчет амортизации";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		//Подсчет итогов
		double sum(array <double>^ am) {
			double sum = 0;
			for (int i = 0; i < am->Length; i++) {
				sum += am[i];
			}
			return Math::Round(sum);
		}

		//Линейный метод
		array <double>^ amortiz1(int period, double start_cost) {
			List<double>^ list = gcnew List <double>;
			double ostatok = start_cost;
			for (int i = 0; i < period; i++) {
				double am = Math::Round(ostatok / period,2);
				list->Add(am);
			}
			return list->ToArray();
		}

		//Методом уменьшаемого остатка с учетом коэффициента ускорения
		array <double>^ amortiz2(int period, double start_cost, double ratio) {
			List<double>^ list = gcnew List <double>;
			double ostatok = start_cost;
			double norm = 1./period;
			double am = ostatok * norm * ratio;
			ostatok = start_cost - am;

			list->Add(am);

			for (int i = 1; i < period; i++) {
				am = Math::Round(ostatok * norm * (i+1),2);
				ostatok -= am;
				list->Add(am);
			}
			return list->ToArray();
		}

		//Прямым методом суммы числа лет
		array <double>^ amortiz3(int period, double start_cost) {
			List<double>^ list = gcnew List <double>;
			double am = 0;
			double sum_let = (period * (period + 1)) / 2;
			double ostatok = start_cost;
			for (int i = 0; i < period; i++)
			{
				am = Math::Round((period - i) / sum_let * start_cost,2);
				ostatok -= am;
				list->Add(am);
			}
			return list->ToArray();
		}

		//Очистка dataGridView
		void clear_DGV(System::Windows::Forms::DataGridView^ sender) {
			sender->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			sender->AutoResizeColumns();
			sender->Rows->Clear();  // удаление всех строк
			int count = sender->Columns->Count;
			for (int i = 0; i < count; i++) { sender->Columns->RemoveAt(0); } //удаление всех столбцов
		}

		void full_DGV(System::Windows::Forms::DataGridView^ sender, int period, double sc, double ratio) {
			clear_DGV(sender);

			int check = 0;
			List<String^>^ list = gcnew List<String^>;

			if (this->radioButton1->Checked) { list->Add("Год"); }
			if (this->radioButton2->Checked) { list->Add("Месяц"); }
			if (this->method1->Checked) {
				list->Add("Линейный метод");
				am1 = amortiz1(period, sc);
				check++;
			}
			if (this->method2->Checked) {
				list->Add("Метод уменьшаемого остатка с учетом коэффициента ускорения");
				am2 = amortiz2(period, sc, ratio);
				check++;
			}
			if (this->method3->Checked) {
				list->Add("Метод суммы числа лет");
				am3 = amortiz3(period, sc);
				check++;
			}

			int i = 0;
			for each (String ^ el in list)
			{
				sender->Columns->Add("Column" + i, el);
				i++;
			}

			//add to rows
			for (int i = 0; i < period+1; i++) {
				if (period + 1 - i == 1) {
					if (check == 3)
						sender->Rows->Add("Итого", sum(am1), sum(am2), sum(am3));
					if (check == 2) {
						if (this->method1->Checked && this->method2->Checked)
							sender->Rows->Add("Итого", sum(am1), sum(am2));
						if (this->method2->Checked && this->method3->Checked)
							sender->Rows->Add("Итого", sum(am2), sum(am3));
						if (this->method1->Checked && this->method3->Checked)
							sender->Rows->Add("Итого", sum(am1), sum(am3));
					}
					if (check == 1) {
						if (this->method1->Checked)
							sender->Rows->Add("Итого", sum(am1));
						if (this->method2->Checked)
							sender->Rows->Add("Итого", sum(am2));
						if (this->method3->Checked)
							sender->Rows->Add("Итого", sum(am3));
					}
				}
				else {
					if (check == 3)
						sender->Rows->Add(i + 1, am1[i], am2[i], am3[i]);
					if (check == 2) {
						if (this->method1->Checked && this->method2->Checked)
							sender->Rows->Add(i + 1, am1[i], am2[i]);
						if (this->method2->Checked && this->method3->Checked)
							sender->Rows->Add(i + 1, am2[i], am3[i]);
						if (this->method1->Checked && this->method3->Checked)
							sender->Rows->Add(i + 1, am1[i], am3[i]);
					}
					if (check == 1) {
						if (this->method1->Checked)
							sender->Rows->Add(i + 1, am1[i]);
						if (this->method2->Checked)
							sender->Rows->Add(i + 1, am2[i]);
						if (this->method3->Checked)
							sender->Rows->Add(i + 1, am3[i]);
					}
				}
			}			
		}

		void full_Chart(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, int period) {
			this->chart1->Series->Clear();

			if (this->method1->Checked)
				this->chart1->Series->Add("Линейный метод");
			if (this->method2->Checked)
				this->chart1->Series->Add("Метод уменьшаемого остатка с учетом коэффициента ускорения");
			if (this->method3->Checked)
				this->chart1->Series->Add("Метод суммы числа лет");

			for (int i = 0; i < this->chart1->Series->Count; i++) {
				this->chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				this->chart1->Series[i]->Points->Clear();
				this->chart1->Series[i]->BorderWidth = 5;
				for (int j = 0; j < period; j++) {
					if (this->chart1->Series[i]->Name == "Линейный метод") {
						this->chart1->Series[i]->Points->AddXY(j + 1, am1[j]);
					}
					if (this->chart1->Series[i]->Name == "Метод уменьшаемого остатка с учетом коэффициента ускорения") {
						this->chart1->Series[i]->Points->AddXY(j + 1, am2[j]);
					}
					if (this->chart1->Series[i]->Name == "Метод суммы числа лет") {
						this->chart1->Series[i]->Points->AddXY(j + 1, am3[j]);
					}

				}
			}
		}


		

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double start_cost;
	double ratio;
	int period;
	try
	{
		am1 = gcnew array<double>(period);
		am2 = gcnew array<double>(period);
		am3 = gcnew array<double>(period);

		start_cost = Convert::ToDouble(this->start_cost->Text);
		String^ str = this->ratio->Text->Replace(".", ",");
		ratio = Convert::ToDouble(str);
		period = Convert::ToInt16(this->period->Text);
		
		if ((this->radioButton1->Checked || this->radioButton2->Checked) && (this->method1->Checked || this->method2->Checked || this->method3->Checked)) {
			if (this->radioButton2->Checked)
				if (period >= 12) {
					full_DGV(this->dataGridView1, period, start_cost, ratio);
					full_Chart(this->chart1, period);
				}
				else
					MessageBox::Show("Минимальный СПИ - 12 месяцев", "Ошибки", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			if(this->radioButton1->Checked)
				if (period >= 1) {
					full_DGV(this->dataGridView1, period, start_cost, ratio);
					full_Chart(this->chart1, period);
				}
				else
					MessageBox::Show("Минимальный СПИ - 1 год", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
			MessageBox::Show("Выберете метод расчета амортизации", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	catch (...)
	{
		MessageBox::Show("Проверьте введенные значения", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->radioButton1->Checked = true;
	this->start_cost->Text = "800";
	this->ratio->Text = "1.8";
	this->period->Text = "5";
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->radioButton1->Checked)
		this->label2->Text = "Срок полезного использования (в годах)";
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->radioButton2->Checked)
		this->label2->Text = "Срок полезного использования (в месяцах)";
}
};
}
