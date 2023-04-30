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
			//��������
		case '+': res = this->first_num + second; break;
			//���������
		case '-': res = this->first_num - second; break;
			//���������
		case '*': res = this->first_num * second; break;
			//�������
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
