#pragma once

namespace Banknotes {

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
	private: System::Windows::Forms::Button^ exit_btn;
	private: System::Windows::Forms::Label^ main_lable;
	private: System::Windows::Forms::Label^ result_output;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ divide_btn;

	private: System::Windows::Forms::Button^ multiply_btn;

	private: System::Windows::Forms::Button^ backspace_btn;

	private: System::Windows::Forms::Button^ seven_btn;
	private: System::Windows::Forms::Button^ eight_btn;
	private: System::Windows::Forms::Button^ nine_btn;
	private: System::Windows::Forms::Button^ plus_bnt;
	private: System::Windows::Forms::Button^ fore_btn;
	private: System::Windows::Forms::Button^ five_btn;
	private: System::Windows::Forms::Button^ six_btn;








	private: System::Windows::Forms::Button^ minus_btn;
	private: System::Windows::Forms::Button^ one_btn;
	private: System::Windows::Forms::Button^ two_btn;
	private: System::Windows::Forms::Button^ three_btn;




	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ equli_btn;
	private: System::Windows::Forms::Button^ come_btn;
	private: System::Windows::Forms::Button^ zero_btn;



	private: System::Windows::Forms::Button^ button20;

	private: int first_num;
	private: char user_action = ' ';
	private: bool is_iqual = false;





	protected:




	protected:

	protected:


	protected:


	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->main_lable = (gcnew System::Windows::Forms::Label());
			this->result_output = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->divide_btn = (gcnew System::Windows::Forms::Button());
			this->multiply_btn = (gcnew System::Windows::Forms::Button());
			this->backspace_btn = (gcnew System::Windows::Forms::Button());
			this->seven_btn = (gcnew System::Windows::Forms::Button());
			this->eight_btn = (gcnew System::Windows::Forms::Button());
			this->nine_btn = (gcnew System::Windows::Forms::Button());
			this->plus_bnt = (gcnew System::Windows::Forms::Button());
			this->fore_btn = (gcnew System::Windows::Forms::Button());
			this->five_btn = (gcnew System::Windows::Forms::Button());
			this->six_btn = (gcnew System::Windows::Forms::Button());
			this->minus_btn = (gcnew System::Windows::Forms::Button());
			this->one_btn = (gcnew System::Windows::Forms::Button());
			this->two_btn = (gcnew System::Windows::Forms::Button());
			this->three_btn = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->equli_btn = (gcnew System::Windows::Forms::Button());
			this->come_btn = (gcnew System::Windows::Forms::Button());
			this->zero_btn = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// exit_btn
			// 
			this->exit_btn->BackColor = System::Drawing::Color::Red;
			this->exit_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit_btn->Location = System::Drawing::Point(414, 0);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(60, 31);
			this->exit_btn->TabIndex = 0;
			this->exit_btn->Text = L"X";
			this->exit_btn->UseVisualStyleBackColor = false;
			this->exit_btn->Click += gcnew System::EventHandler(this, &MyForm::exit_btn_Click);
			// 
			// main_lable
			// 
			this->main_lable->AutoSize = true;
			this->main_lable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->main_lable->ForeColor = System::Drawing::Color::White;
			this->main_lable->Location = System::Drawing::Point(12, 9);
			this->main_lable->Name = L"main_lable";
			this->main_lable->Size = System::Drawing::Size(111, 27);
			this->main_lable->TabIndex = 1;
			this->main_lable->Text = L"Glebastus";
			// 
			// result_output
			// 
			this->result_output->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->result_output->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_output->ForeColor = System::Drawing::Color::White;
			this->result_output->Location = System::Drawing::Point(26, 69);
			this->result_output->Name = L"result_output";
			this->result_output->Size = System::Drawing::Size(430, 73);
			this->result_output->TabIndex = 2;
			this->result_output->Text = L"0";
			this->result_output->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(9, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 81);
			this->button1->TabIndex = 3;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// divide_btn
			// 
			this->divide_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->divide_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->divide_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divide_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->divide_btn->Location = System::Drawing::Point(125, 180);
			this->divide_btn->Name = L"divide_btn";
			this->divide_btn->Size = System::Drawing::Size(100, 81);
			this->divide_btn->TabIndex = 4;
			this->divide_btn->Text = L"/";
			this->divide_btn->UseVisualStyleBackColor = true;
			this->divide_btn->Click += gcnew System::EventHandler(this, &MyForm::divide_btn_Click);
			// 
			// multiply_btn
			// 
			this->multiply_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->multiply_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiply_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiply_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->multiply_btn->Location = System::Drawing::Point(247, 180);
			this->multiply_btn->Name = L"multiply_btn";
			this->multiply_btn->Size = System::Drawing::Size(100, 81);
			this->multiply_btn->TabIndex = 5;
			this->multiply_btn->Text = L"X";
			this->multiply_btn->UseVisualStyleBackColor = true;
			this->multiply_btn->Click += gcnew System::EventHandler(this, &MyForm::multiply_btn_Click);
			// 
			// backspace_btn
			// 
			this->backspace_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->backspace_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backspace_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->backspace_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->backspace_btn->Location = System::Drawing::Point(365, 180);
			this->backspace_btn->Name = L"backspace_btn";
			this->backspace_btn->Size = System::Drawing::Size(100, 81);
			this->backspace_btn->TabIndex = 6;
			this->backspace_btn->Text = L"Bsp";
			this->backspace_btn->UseVisualStyleBackColor = true;
			// 
			// seven_btn
			// 
			this->seven_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->seven_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->seven_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->seven_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->seven_btn->Location = System::Drawing::Point(9, 279);
			this->seven_btn->Name = L"seven_btn";
			this->seven_btn->Size = System::Drawing::Size(100, 81);
			this->seven_btn->TabIndex = 7;
			this->seven_btn->Text = L"7";
			this->seven_btn->UseVisualStyleBackColor = true;
			this->seven_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// eight_btn
			// 
			this->eight_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eight_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->eight_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eight_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->eight_btn->Location = System::Drawing::Point(125, 279);
			this->eight_btn->Name = L"eight_btn";
			this->eight_btn->Size = System::Drawing::Size(100, 81);
			this->eight_btn->TabIndex = 8;
			this->eight_btn->Text = L"8";
			this->eight_btn->UseVisualStyleBackColor = true;
			this->eight_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// nine_btn
			// 
			this->nine_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nine_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nine_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nine_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->nine_btn->Location = System::Drawing::Point(247, 279);
			this->nine_btn->Name = L"nine_btn";
			this->nine_btn->Size = System::Drawing::Size(100, 81);
			this->nine_btn->TabIndex = 9;
			this->nine_btn->Text = L"9";
			this->nine_btn->UseVisualStyleBackColor = true;
			this->nine_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// plus_bnt
			// 
			this->plus_bnt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->plus_bnt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus_bnt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus_bnt->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->plus_bnt->Location = System::Drawing::Point(365, 279);
			this->plus_bnt->Name = L"plus_bnt";
			this->plus_bnt->Size = System::Drawing::Size(100, 81);
			this->plus_bnt->TabIndex = 10;
			this->plus_bnt->Text = L"+";
			this->plus_bnt->UseVisualStyleBackColor = true;
			this->plus_bnt->Click += gcnew System::EventHandler(this, &MyForm::plus_bnt_Click);
			// 
			// fore_btn
			// 
			this->fore_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fore_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fore_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fore_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->fore_btn->Location = System::Drawing::Point(9, 378);
			this->fore_btn->Name = L"fore_btn";
			this->fore_btn->Size = System::Drawing::Size(100, 81);
			this->fore_btn->TabIndex = 11;
			this->fore_btn->Text = L"4";
			this->fore_btn->UseVisualStyleBackColor = true;
			this->fore_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// five_btn
			// 
			this->five_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->five_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->five_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->five_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->five_btn->Location = System::Drawing::Point(125, 378);
			this->five_btn->Name = L"five_btn";
			this->five_btn->Size = System::Drawing::Size(100, 81);
			this->five_btn->TabIndex = 12;
			this->five_btn->Text = L"5";
			this->five_btn->UseVisualStyleBackColor = true;
			this->five_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// six_btn
			// 
			this->six_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->six_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->six_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->six_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->six_btn->Location = System::Drawing::Point(247, 378);
			this->six_btn->Name = L"six_btn";
			this->six_btn->Size = System::Drawing::Size(100, 81);
			this->six_btn->TabIndex = 13;
			this->six_btn->Text = L"6";
			this->six_btn->UseVisualStyleBackColor = true;
			this->six_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// minus_btn
			// 
			this->minus_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minus_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->minus_btn->Location = System::Drawing::Point(365, 378);
			this->minus_btn->Name = L"minus_btn";
			this->minus_btn->Size = System::Drawing::Size(100, 81);
			this->minus_btn->TabIndex = 14;
			this->minus_btn->Text = L"-";
			this->minus_btn->UseVisualStyleBackColor = true;
			this->minus_btn->Click += gcnew System::EventHandler(this, &MyForm::minus_btn_Click);
			// 
			// one_btn
			// 
			this->one_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->one_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->one_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->one_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->one_btn->Location = System::Drawing::Point(9, 476);
			this->one_btn->Name = L"one_btn";
			this->one_btn->Size = System::Drawing::Size(100, 81);
			this->one_btn->TabIndex = 15;
			this->one_btn->Text = L"1";
			this->one_btn->UseVisualStyleBackColor = true;
			this->one_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// two_btn
			// 
			this->two_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->two_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->two_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->two_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->two_btn->Location = System::Drawing::Point(125, 476);
			this->two_btn->Name = L"two_btn";
			this->two_btn->Size = System::Drawing::Size(100, 81);
			this->two_btn->TabIndex = 16;
			this->two_btn->Text = L"2";
			this->two_btn->UseVisualStyleBackColor = true;
			this->two_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// three_btn
			// 
			this->three_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->three_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->three_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->three_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->three_btn->Location = System::Drawing::Point(247, 476);
			this->three_btn->Name = L"three_btn";
			this->three_btn->Size = System::Drawing::Size(100, 81);
			this->three_btn->TabIndex = 17;
			this->three_btn->Text = L"3";
			this->three_btn->UseVisualStyleBackColor = true;
			this->three_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button16
			// 
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button16->Location = System::Drawing::Point(365, 476);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 81);
			this->button16->TabIndex = 18;
			this->button16->Text = L"NaN";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// equli_btn
			// 
			this->equli_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->equli_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equli_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equli_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->equli_btn->Location = System::Drawing::Point(365, 577);
			this->equli_btn->Name = L"equli_btn";
			this->equli_btn->Size = System::Drawing::Size(100, 81);
			this->equli_btn->TabIndex = 22;
			this->equli_btn->Text = L"=";
			this->equli_btn->UseVisualStyleBackColor = true;
			this->equli_btn->Click += gcnew System::EventHandler(this, &MyForm::equli_btn_Click);
			// 
			// come_btn
			// 
			this->come_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->come_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->come_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->come_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->come_btn->Location = System::Drawing::Point(247, 577);
			this->come_btn->Name = L"come_btn";
			this->come_btn->Size = System::Drawing::Size(100, 81);
			this->come_btn->TabIndex = 21;
			this->come_btn->Text = L",";
			this->come_btn->UseVisualStyleBackColor = true;
			// 
			// zero_btn
			// 
			this->zero_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->zero_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->zero_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zero_btn->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->zero_btn->Location = System::Drawing::Point(125, 577);
			this->zero_btn->Name = L"zero_btn";
			this->zero_btn->Size = System::Drawing::Size(100, 81);
			this->zero_btn->TabIndex = 20;
			this->zero_btn->Text = L"0";
			this->zero_btn->UseVisualStyleBackColor = true;
			this->zero_btn->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button20
			// 
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->button20->Location = System::Drawing::Point(9, 577);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(100, 81);
			this->button20->TabIndex = 19;
			this->button20->Text = L"NaN";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(54)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->ClientSize = System::Drawing::Size(474, 674);
			this->ControlBox = false;
			this->Controls->Add(this->equli_btn);
			this->Controls->Add(this->come_btn);
			this->Controls->Add(this->zero_btn);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->three_btn);
			this->Controls->Add(this->two_btn);
			this->Controls->Add(this->one_btn);
			this->Controls->Add(this->minus_btn);
			this->Controls->Add(this->six_btn);
			this->Controls->Add(this->five_btn);
			this->Controls->Add(this->fore_btn);
			this->Controls->Add(this->plus_bnt);
			this->Controls->Add(this->nine_btn);
			this->Controls->Add(this->eight_btn);
			this->Controls->Add(this->seven_btn);
			this->Controls->Add(this->backspace_btn);
			this->Controls->Add(this->multiply_btn);
			this->Controls->Add(this->divide_btn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->result_output);
			this->Controls->Add(this->main_lable);
			this->Controls->Add(this->exit_btn);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculater";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (this->result_output->Text == "0" || is_iqual) {
			this->result_output->Text = button->Text;
			is_iqual = false;
		}
		else {
			this->result_output->Text = this->result_output->Text + button->Text;
		}

	}
	
	private: System::Void plus_bnt_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void minus_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void multiply_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void divide_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToInt32(this->result_output->Text);
		this->user_action = action;
		this->result_output->Text = "0";
	}
	private: System::Void equli_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') {
			return;
		}
		int second = System::Convert::ToInt32(this->result_output->Text);
		int res;
		switch (this->user_action) {
			//Сложение
		case '+': res = this->first_num + second; break;
			//Вычитание
		case '-': res = this->first_num - second; break;
			//Умножение
		case '*': res = this->first_num * second; break;
			//Деление
		case '/':
			if (second == 0) {
				res = 0;
				MessageBox::Show(this, "No Valid", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				res = this->first_num / second; break;
			}
		}
		this->is_iqual = true;
		this->result_output->Text = System::Convert::ToString(res);
	}
};
}
