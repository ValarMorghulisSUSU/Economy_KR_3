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
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// start_cost
			// 
			this->start_cost->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start_cost->Location = System::Drawing::Point(15, 39);
			this->start_cost->Name = L"start_cost";
			this->start_cost->Size = System::Drawing::Size(100, 25);
			this->start_cost->TabIndex = 0;
			// 
			// period
			// 
			this->period->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->period->Location = System::Drawing::Point(238, 104);
			this->period->Name = L"period";
			this->period->Size = System::Drawing::Size(100, 25);
			this->period->TabIndex = 1;
			// 
			// ratio
			// 
			this->ratio->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ratio->Location = System::Drawing::Point(15, 104);
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
			this->groupBox1->Location = System::Drawing::Point(15, 135);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(694, 114);
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
			this->label2->Location = System::Drawing::Point(235, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(272, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Срок полезного использования (в месяцах)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Коэффициент ускорения";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 255);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(535, 352);
			this->dataGridView1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(483, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 45);
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
			this->groupBox2->Location = System::Drawing::Point(238, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 62);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Формат рассчета";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
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
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1190, 689);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ratio);
			this->Controls->Add(this->period);
			this->Controls->Add(this->start_cost);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double start_cost;
	double ratio;
	double period;
	try
	{
		start_cost = Convert::ToDouble(this->start_cost->Text);
		ratio = Convert::ToDouble(this->ratio->Text);
		period = Convert::ToDouble(this->period->Text);
	}
	catch (...)
	{
		MessageBox::Show("Проверьте введенные значения", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
	this->dataGridView1->AutoResizeColumns();

	this->dataGridView1->Rows->Clear();  // удаление всех строк
	int count = this->dataGridView1->Columns->Count;
	for (int i = 0; i < count; i++) { this->dataGridView1->Columns->RemoveAt(0); } //удаление всех столбцов

	if (this->radioButton1->Checked) { // По годам
		List<String^> list;
		list.Add("Год");
		if (this->method1->Checked)
			list.Add("Линейный метод");
		if (this->method2->Checked)
			list.Add("Методом уменьшаемого остатка с учетом коэффициента ускорения");
		if (this->method3->Checked)
			list.Add("Метод суммы числа лет");

		array <String^>^ columnNames = list.ToArray();

		for (int i = 0; i < columnNames->Length; i++) {
			this->dataGridView1->Columns->Add("Column" + i, columnNames[i]);
		}

	}
	if (this->radioButton2->Checked) { //По месяцам
		List<String^> list;
		list.Add("Месяц");
		if (this->method1->Checked)
			list.Add("Линейный метод");
		if (this->method2->Checked)
			list.Add("Методом уменьшаемого остатка с учетом коэффициента ускорения");
		if (this->method3->Checked)
			list.Add("Метод суммы числа лет");

		array <String^>^ columnNames = list.ToArray();

		for (int i = 0; i < columnNames->Length; i++) {
			this->dataGridView1->Columns->Add("Column" + i, columnNames[i]);
		}
	}
}
};
}
