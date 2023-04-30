#pragma once

namespace Banknotes {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
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
		/// Класс иницилизации компонентов для последущей их отрисовки и взаимодействия с ними.
		/// </summary>
		System::ComponentModel::Container ^components;