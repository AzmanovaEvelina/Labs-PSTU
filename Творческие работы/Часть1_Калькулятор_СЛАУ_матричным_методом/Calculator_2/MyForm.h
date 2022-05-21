#pragma once

namespace Calculator2 {

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

	protected:




	private: System::Windows::Forms::DataGridView^ dataGridView1_matr_1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1_size_n_m;
	private: System::Windows::Forms::Button^ button1_solution;
	private: System::Windows::Forms::Button^ button1_set_matr;
	private: System::Windows::Forms::DataGridView^ dataGridView2_matr_b;



	private: System::Windows::Forms::Button^ button1_set_b;
	private: System::Windows::Forms::Button^ button1_det;
	private: System::Windows::Forms::TextBox^ textBox1_det;
	private: System::Windows::Forms::DataGridView^ dataGridView3_matr_trans;

	private: System::Windows::Forms::ToolStripMenuItem^ обПрограммеToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::DataGridView^ dataGridView1_inverse_matr;

	private: System::Windows::Forms::DataGridView^ dataGridView1_b_for_solution;

	private: System::Windows::Forms::DataGridView^ dataGridView1_solution_x;


	private: System::Windows::Forms::Button^ button1_file;
	private: System::Windows::Forms::TextBox^ textBox1_file;
	private: System::Windows::Forms::TextBox^ textBox1_b;
	private: System::Windows::Forms::Button^ button1_file_b;
	private: System::Windows::Forms::TextBox^ textBox1_det_for_inverse;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label30;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label9;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1_matr_1 = (gcnew System::Windows::Forms::DataGridView());
			this->numericUpDown1_size_n_m = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1_solution = (gcnew System::Windows::Forms::Button());
			this->button1_set_matr = (gcnew System::Windows::Forms::Button());
			this->dataGridView2_matr_b = (gcnew System::Windows::Forms::DataGridView());
			this->button1_set_b = (gcnew System::Windows::Forms::Button());
			this->button1_det = (gcnew System::Windows::Forms::Button());
			this->textBox1_det = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3_matr_trans = (gcnew System::Windows::Forms::DataGridView());
			this->обПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1_inverse_matr = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1_b_for_solution = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1_solution_x = (gcnew System::Windows::Forms::DataGridView());
			this->button1_file = (gcnew System::Windows::Forms::Button());
			this->textBox1_file = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_b = (gcnew System::Windows::Forms::TextBox());
			this->button1_file_b = (gcnew System::Windows::Forms::Button());
			this->textBox1_det_for_inverse = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_matr_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1_size_n_m))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_matr_b))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_matr_trans))->BeginInit();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_inverse_matr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_b_for_solution))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_solution_x))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1_matr_1
			// 
			this->dataGridView1_matr_1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_matr_1->Location = System::Drawing::Point(17, 33);
			this->dataGridView1_matr_1->Name = L"dataGridView1_matr_1";
			this->dataGridView1_matr_1->RowHeadersWidth = 51;
			this->dataGridView1_matr_1->RowTemplate->Height = 24;
			this->dataGridView1_matr_1->Size = System::Drawing::Size(419, 212);
			this->dataGridView1_matr_1->TabIndex = 4;
			// 
			// numericUpDown1_size_n_m
			// 
			this->numericUpDown1_size_n_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDown1_size_n_m->Location = System::Drawing::Point(361, 262);
			this->numericUpDown1_size_n_m->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			this->numericUpDown1_size_n_m->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1_size_n_m->Name = L"numericUpDown1_size_n_m";
			this->numericUpDown1_size_n_m->Size = System::Drawing::Size(76, 30);
			this->numericUpDown1_size_n_m->TabIndex = 5;
			this->numericUpDown1_size_n_m->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// button1_solution
			// 
			this->button1_solution->Location = System::Drawing::Point(329, 447);
			this->button1_solution->Name = L"button1_solution";
			this->button1_solution->Size = System::Drawing::Size(124, 52);
			this->button1_solution->TabIndex = 6;
			this->button1_solution->Text = L"Решить";
			this->button1_solution->UseVisualStyleBackColor = true;
			this->button1_solution->Click += gcnew System::EventHandler(this, &MyForm::button1_solution_Click);
			// 
			// button1_set_matr
			// 
			this->button1_set_matr->Location = System::Drawing::Point(158, 302);
			this->button1_set_matr->Name = L"button1_set_matr";
			this->button1_set_matr->Size = System::Drawing::Size(126, 33);
			this->button1_set_matr->TabIndex = 7;
			this->button1_set_matr->Text = L"Создать";
			this->button1_set_matr->UseVisualStyleBackColor = true;
			this->button1_set_matr->Click += gcnew System::EventHandler(this, &MyForm::button1_set_matr_Click);
			// 
			// dataGridView2_matr_b
			// 
			this->dataGridView2_matr_b->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2_matr_b->Location = System::Drawing::Point(188, 33);
			this->dataGridView2_matr_b->Name = L"dataGridView2_matr_b";
			this->dataGridView2_matr_b->RowHeadersWidth = 51;
			this->dataGridView2_matr_b->RowTemplate->Height = 24;
			this->dataGridView2_matr_b->Size = System::Drawing::Size(132, 212);
			this->dataGridView2_matr_b->TabIndex = 8;
			// 
			// button1_set_b
			// 
			this->button1_set_b->Location = System::Drawing::Point(188, 258);
			this->button1_set_b->Name = L"button1_set_b";
			this->button1_set_b->Size = System::Drawing::Size(132, 32);
			this->button1_set_b->TabIndex = 10;
			this->button1_set_b->Text = L"Создать";
			this->button1_set_b->UseVisualStyleBackColor = true;
			this->button1_set_b->Click += gcnew System::EventHandler(this, &MyForm::button1_set_b_Click);
			// 
			// button1_det
			// 
			this->button1_det->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_det->Location = System::Drawing::Point(17, 409);
			this->button1_det->Name = L"button1_det";
			this->button1_det->Size = System::Drawing::Size(174, 34);
			this->button1_det->TabIndex = 11;
			this->button1_det->Text = L"Определитель";
			this->button1_det->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1_det->UseVisualStyleBackColor = true;
			this->button1_det->UseWaitCursor = true;
			this->button1_det->Click += gcnew System::EventHandler(this, &MyForm::button1_det_Click);
			// 
			// textBox1_det
			// 
			this->textBox1_det->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1_det->Location = System::Drawing::Point(209, 409);
			this->textBox1_det->Name = L"textBox1_det";
			this->textBox1_det->Size = System::Drawing::Size(101, 34);
			this->textBox1_det->TabIndex = 12;
			// 
			// dataGridView3_matr_trans
			// 
			this->dataGridView3_matr_trans->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3_matr_trans->Location = System::Drawing::Point(17, 33);
			this->dataGridView3_matr_trans->Name = L"dataGridView3_matr_trans";
			this->dataGridView3_matr_trans->RowHeadersWidth = 51;
			this->dataGridView3_matr_trans->RowTemplate->Height = 24;
			this->dataGridView3_matr_trans->Size = System::Drawing::Size(409, 212);
			this->dataGridView3_matr_trans->TabIndex = 13;
			// 
			// обПрограммеToolStripMenuItem
			// 
			this->обПрограммеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->обПрограммеToolStripMenuItem->Name = L"обПрограммеToolStripMenuItem";
			this->обПрограммеToolStripMenuItem->Size = System::Drawing::Size(155, 27);
			this->обПрограммеToolStripMenuItem->Text = L"Об программе";
			this->обПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обПрограммеToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->обПрограммеToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(1353, 31);
			this->menuStrip2->TabIndex = 2;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(83, 27);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// dataGridView1_inverse_matr
			// 
			this->dataGridView1_inverse_matr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_inverse_matr->Location = System::Drawing::Point(132, 55);
			this->dataGridView1_inverse_matr->Name = L"dataGridView1_inverse_matr";
			this->dataGridView1_inverse_matr->RowHeadersWidth = 51;
			this->dataGridView1_inverse_matr->RowTemplate->Height = 24;
			this->dataGridView1_inverse_matr->Size = System::Drawing::Size(409, 212);
			this->dataGridView1_inverse_matr->TabIndex = 15;
			// 
			// dataGridView1_b_for_solution
			// 
			this->dataGridView1_b_for_solution->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_b_for_solution->Location = System::Drawing::Point(39, 55);
			this->dataGridView1_b_for_solution->Name = L"dataGridView1_b_for_solution";
			this->dataGridView1_b_for_solution->RowHeadersWidth = 51;
			this->dataGridView1_b_for_solution->RowTemplate->Height = 24;
			this->dataGridView1_b_for_solution->Size = System::Drawing::Size(141, 212);
			this->dataGridView1_b_for_solution->TabIndex = 17;
			// 
			// dataGridView1_solution_x
			// 
			this->dataGridView1_solution_x->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1_solution_x->Location = System::Drawing::Point(18, 55);
			this->dataGridView1_solution_x->Name = L"dataGridView1_solution_x";
			this->dataGridView1_solution_x->RowHeadersWidth = 51;
			this->dataGridView1_solution_x->RowTemplate->Height = 24;
			this->dataGridView1_solution_x->Size = System::Drawing::Size(145, 212);
			this->dataGridView1_solution_x->TabIndex = 19;
			// 
			// button1_file
			// 
			this->button1_file->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_file->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1_file->Location = System::Drawing::Point(17, 355);
			this->button1_file->Name = L"button1_file";
			this->button1_file->Size = System::Drawing::Size(212, 34);
			this->button1_file->TabIndex = 22;
			this->button1_file->Text = L"Скачать из файла";
			this->button1_file->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1_file->UseVisualStyleBackColor = true;
			this->button1_file->UseWaitCursor = true;
			this->button1_file->Click += gcnew System::EventHandler(this, &MyForm::button1_file_Click);
			// 
			// textBox1_file
			// 
			this->textBox1_file->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1_file->Location = System::Drawing::Point(236, 355);
			this->textBox1_file->Name = L"textBox1_file";
			this->textBox1_file->Size = System::Drawing::Size(201, 34);
			this->textBox1_file->TabIndex = 23;
			// 
			// textBox1_b
			// 
			this->textBox1_b->Location = System::Drawing::Point(188, 344);
			this->textBox1_b->Name = L"textBox1_b";
			this->textBox1_b->Size = System::Drawing::Size(161, 34);
			this->textBox1_b->TabIndex = 24;
			// 
			// button1_file_b
			// 
			this->button1_file_b->Location = System::Drawing::Point(6, 302);
			this->button1_file_b->Name = L"button1_file_b";
			this->button1_file_b->Size = System::Drawing::Size(205, 37);
			this->button1_file_b->TabIndex = 25;
			this->button1_file_b->Text = L"Скачать из файла";
			this->button1_file_b->UseVisualStyleBackColor = true;
			this->button1_file_b->UseWaitCursor = true;
			this->button1_file_b->Click += gcnew System::EventHandler(this, &MyForm::button1_file_b_Click);
			// 
			// textBox1_det_for_inverse
			// 
			this->textBox1_det_for_inverse->Location = System::Drawing::Point(21, 149);
			this->textBox1_det_for_inverse->Name = L"textBox1_det_for_inverse";
			this->textBox1_det_for_inverse->Size = System::Drawing::Size(59, 34);
			this->textBox1_det_for_inverse->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label7->Location = System::Drawing::Point(16, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 25);
			this->label7->TabIndex = 27;
			this->label7->Text = L"    1    ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label10->Location = System::Drawing::Point(12, 265);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(343, 25);
			this->label10->TabIndex = 30;
			this->label10->Text = L"Количество неизвестных в системе";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->dataGridView1_matr_1);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->numericUpDown1_size_n_m);
			this->groupBox1->Controls->Add(this->button1_det);
			this->groupBox1->Controls->Add(this->textBox1_det);
			this->groupBox1->Controls->Add(this->button1_file);
			this->groupBox1->Controls->Add(this->textBox1_file);
			this->groupBox1->Controls->Add(this->button1_set_matr);
			this->groupBox1->Controls->Add(this->button1_solution);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(12, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(469, 516);
			this->groupBox1->TabIndex = 31;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Основная матричная система А";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->dataGridView2_matr_b);
			this->groupBox2->Controls->Add(this->button1_set_b);
			this->groupBox2->Controls->Add(this->textBox1_b);
			this->groupBox2->Controls->Add(this->button1_file_b);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(487, 46);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(365, 389);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Столбец свободных коэффициентов";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label5->Location = System::Drawing::Point(134, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 40);
			this->label5->TabIndex = 39;
			this->label5->Text = L"=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Location = System::Drawing::Point(88, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 31);
			this->label4->TabIndex = 31;
			this->label4->Text = L"B ";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->dataGridView3_matr_trans);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(872, 46);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(442, 389);
			this->groupBox3->TabIndex = 33;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Союзная матрица А*";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->groupBox4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox4->Controls->Add(this->label1);
			this->groupBox4->Controls->Add(this->dataGridView1_inverse_matr);
			this->groupBox4->Controls->Add(this->textBox1_det_for_inverse);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(12, 560);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(557, 284);
			this->groupBox4->TabIndex = 34;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Обратная матрица А";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Location = System::Drawing::Point(94, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 35);
			this->label1->TabIndex = 35;
			this->label1->Text = L"*";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox5->Controls->Add(this->dataGridView1_b_for_solution);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(613, 558);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(223, 284);
			this->groupBox5->TabIndex = 35;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Столбец свободных коэффициентов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Location = System::Drawing::Point(575, 699);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 35);
			this->label2->TabIndex = 36;
			this->label2->Text = L"*";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->groupBox6->Controls->Add(this->dataGridView1_solution_x);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(898, 558);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(180, 284);
			this->groupBox6->TabIndex = 37;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Ответ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label3->Location = System::Drawing::Point(849, 694);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 40);
			this->label3->TabIndex = 38;
			this->label3->Text = L"=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label6->Location = System::Drawing::Point(1093, 695);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 40);
			this->label6->TabIndex = 40;
			this->label6->Text = L"=";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label8->Location = System::Drawing::Point(1137, 698);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 31);
			this->label8->TabIndex = 40;
			this->label8->Text = L"X";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->groupBox7->Controls->Add(this->label9);
			this->groupBox7->Controls->Add(this->label30);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->label27);
			this->groupBox7->Controls->Add(this->label26);
			this->groupBox7->Controls->Add(this->label25);
			this->groupBox7->Controls->Add(this->label24);
			this->groupBox7->Controls->Add(this->label23);
			this->groupBox7->Controls->Add(this->label22);
			this->groupBox7->Controls->Add(this->label20);
			this->groupBox7->Controls->Add(this->label21);
			this->groupBox7->Controls->Add(this->label19);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Controls->Add(this->label14);
			this->groupBox7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox7->Location = System::Drawing::Point(493, 441);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(821, 104);
			this->groupBox7->TabIndex = 41;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Теория";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label11->Location = System::Drawing::Point(21, 314);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(341, 25);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Союзная матрица А* составлена из";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label12->Location = System::Drawing::Point(21, 344);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(376, 25);
			this->label12->TabIndex = 32;
			this->label12->Text = L"алгебраических дополнений матрицы А";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label13->Location = System::Drawing::Point(145, 278);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(130, 25);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Замечание!";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label14->Location = System::Drawing::Point(214, 51);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 31);
			this->label14->TabIndex = 40;
			this->label14->Text = L"B ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label15->Location = System::Drawing::Point(56, 52);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 31);
			this->label15->TabIndex = 42;
			this->label15->Text = L"X";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label16->Location = System::Drawing::Point(98, 51);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(39, 40);
			this->label16->TabIndex = 42;
			this->label16->Text = L"=";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label17->Location = System::Drawing::Point(138, 52);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 31);
			this->label17->TabIndex = 43;
			this->label17->Text = L"А";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label18->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label18->Location = System::Drawing::Point(656, 484);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(21, 16);
			this->label18->TabIndex = 42;
			this->label18->Text = L"-1";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label19->Location = System::Drawing::Point(184, 56);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 35);
			this->label19->TabIndex = 43;
			this->label19->Text = L"*";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label20->Location = System::Drawing::Point(659, 268);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(21, 16);
			this->label20->TabIndex = 44;
			this->label20->Text = L"-1";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label21->Location = System::Drawing::Point(141, -164);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(29, 31);
			this->label21->TabIndex = 45;
			this->label21->Text = L"А";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label22->Location = System::Drawing::Point(390, 52);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(29, 31);
			this->label22->TabIndex = 46;
			this->label22->Text = L"А";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label23->Location = System::Drawing::Point(416, 43);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(21, 16);
			this->label23->TabIndex = 43;
			this->label23->Text = L"-1";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label24->Location = System::Drawing::Point(439, 48);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(39, 40);
			this->label24->TabIndex = 47;
			this->label24->Text = L"=";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label25->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label25->Location = System::Drawing::Point(484, 41);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(72, 25);
			this->label25->TabIndex = 36;
			this->label25->Text = L"    1    ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label26->Location = System::Drawing::Point(484, 68);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(59, 25);
			this->label26->TabIndex = 48;
			this->label26->Text = L"detA";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label27->Location = System::Drawing::Point(555, 54);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(32, 35);
			this->label27->TabIndex = 49;
			this->label27->Text = L"*";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label28->Location = System::Drawing::Point(588, 52);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(29, 31);
			this->label28->TabIndex = 50;
			this->label28->Text = L"А";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label30->Location = System::Drawing::Point(629, 37);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(18, 18);
			this->label30->TabIndex = 52;
			this->label30->Text = L"T";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label9->Location = System::Drawing::Point(616, 43);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 21);
			this->label9->TabIndex = 53;
			this->label9->Text = L"*";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1353, 917);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение СЛАУ матричным методом";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_matr_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1_size_n_m))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2_matr_b))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3_matr_trans))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_inverse_matr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_b_for_solution))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1_solution_x))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void обПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_set_matr_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_solution_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_set_b_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_det_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_solution_inverse_b_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_file_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_file_b_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	   private: void Show_Matrix_1();
	   private: void Show_Matrix_b();
	   private: void Show_union_transposition_Matrix();
	   private: void Show_invers_Matrix();
	   private: void Show_Matrix_b_for_solution();
	   private: void Show_Matrix_for_solution();




};

}