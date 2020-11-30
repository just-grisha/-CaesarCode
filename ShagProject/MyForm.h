#pragma once
#include <string>
std::string ALPHABET_ENG_UPPER = "ABCDEFGHILJKMNOPQRSTUVWXYZ";
std::string ALPHABET_ENG_LOWER = "abcdefghiljkmnopqrstuvwxyz";
std::string ALPHABET_RUS_LOWER = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
std::string ALPHABET_RUS_UPPER = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";
int lang = 0;
bool flag = false;

namespace Project4 {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ зашифорватьТекстToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ расшифроватьТекстToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::ToolStripMenuItem^ языкToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->зашифорватьТекстToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расшифроватьТекстToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->языкToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Шифровать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(389, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Раcшифровать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(62, 26);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(286, 260);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(389, 26);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(286, 260);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 336);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 302);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Сдвиг";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->зашифорватьТекстToolStripMenuItem,
					this->расшифроватьТекстToolStripMenuItem, this->языкToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1221, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// зашифорватьТекстToolStripMenuItem
			// 
			this->зашифорватьТекстToolStripMenuItem->Name = L"зашифорватьТекстToolStripMenuItem";
			this->зашифорватьТекстToolStripMenuItem->Size = System::Drawing::Size(127, 20);
			this->зашифорватьТекстToolStripMenuItem->Text = L"Зашифорвать текст";
			this->зашифорватьТекстToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зашифорватьТекстToolStripMenuItem_Click);
			// 
			// расшифроватьТекстToolStripMenuItem
			// 
			this->расшифроватьТекстToolStripMenuItem->Name = L"расшифроватьТекстToolStripMenuItem";
			this->расшифроватьТекстToolStripMenuItem->Size = System::Drawing::Size(133, 20);
			this->расшифроватьТекстToolStripMenuItem->Text = L"Расшифровать текст";
			this->расшифроватьТекстToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::расшифроватьТекстToolStripMenuItem_Click);
			// 
			// языкToolStripMenuItem
			// 
			this->языкToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->русскийToolStripMenuItem,
					this->английскийToolStripMenuItem
			});
			this->языкToolStripMenuItem->Name = L"языкToolStripMenuItem";
			this->языкToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->языкToolStripMenuItem->Text = L"Язык";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::русскийToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::английскийToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(708, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(244, 207);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Сдвиг";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Текст";
			this->Column2->Name = L"Column2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 642);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int shift = System::Convert::ToInt32(textBox1->Text);
		Encrypt(shift);
	}
		   int GetCode(char c) {
			   String^ small;
			   String^ big;
			   if (lang == 0) {
				   big = gcnew String(ALPHABET_ENG_UPPER.c_str());
				   small = gcnew String(ALPHABET_ENG_LOWER.c_str());

				   for (int i = 0; i < 25; i++)
				   {
					   if ((char)c == (char)big[i] || (char)c == (char)small[i]) {
						   return i;
					   }
				   }

			   }
			   else {
				   big = gcnew String(ALPHABET_RUS_UPPER.c_str());
				   small = gcnew String(ALPHABET_RUS_LOWER.c_str());

				   for (int i = 0; i < 33; i++) {

					   if ((char)c == (char)big[i] || (char)c == (char)small[i]) {

						   return i;
					   }

				   }
			   }

			   return -1;
		   }
		   void Encrypt(int shift) {
			   String^ text = System::Convert::ToString(richTextBox1->Text);
			   String^ NewString;
			   String^ alph;
			   if (lang == 0) {
				   alph = gcnew String(ALPHABET_ENG_UPPER.c_str());
			   }
			   else {
				   alph = gcnew String(ALPHABET_RUS_UPPER.c_str());
			   }

			   for (int i = 0; i < text->Length; i++) {
				   int Code = GetCode(text[i]);

				   if (Code != -1) {
					   if ((Code + shift) >= 25) {
						   Code += shift;
						   int NewCode = Code - 25;
						   NewString += System::Convert::ToString(alph[NewCode]);

					   }
					   else {
						   Code += shift;
						   NewString += System::Convert::ToString(alph[Code]);

					   }
				   }
				   else {
					   MessageBox::Show("Неверный ввод");
					   break;
				   }
			   }

			   richTextBox1->Text = NewString;
		   }
			   void Decrypt() {
				   //dataGridView1->Rows->Add(id, textBox1->Text, textBox2->Text, textBox3->Text, textBox4->Text);
				   int shift = 0;
				   String^ alph;
				   String^ text = System::Convert::ToString(richTextBox2->Text);
				   if (lang == 0) {
					   alph = gcnew String(ALPHABET_ENG_UPPER.c_str());
				   }
				   else if (lang == 1) {
					   alph = gcnew String(ALPHABET_RUS_UPPER.c_str());
				   }
				   String^ NewString = "";
				   for (int j = 0; j < alph->Length; j++) {
					   for (int i = 0; i < text->Length; i++) {
						   int Code = GetCode(text[i]);
						   if (Code != -1) {
							   if (Code - shift < 0) {
								   Code -= shift;
								   int NewCode = Code + (alph->Length - 1);
								   //MessageBox::Show(System::Convert::ToString(Code));
								   NewString += System::Convert::ToString(alph[NewCode]);
							   }
							   else {
								   Code -= shift;
								  //MessageBox::Show(System::Convert::ToString(Code));
								   NewString += System::Convert::ToString(alph[Code]);
							   }
						   }
					   }
					   dataGridView1->Rows->Add(shift, NewString);
					   NewString = "";
					   shift++;
				   }
				   flag = true;
			   }
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		button1->Visible = false;
		button2->Visible = false;
		richTextBox1->Visible = false;
		richTextBox2->Visible = false;
		textBox1->Visible = false;
		label1->Visible = false;
		dataGridView1->Visible = false;
	}
private: System::Void зашифорватьТекстToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	button1->Visible = true;
	richTextBox1->Visible = true;
	textBox1->Visible = true;
	label1->Visible = true;

}
private: System::Void расшифроватьТекстToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	button2->Visible = true;
	richTextBox2->Visible = true;
	if (flag) {
		for (int i = 0; i < dataGridView1->RowCount; i++) {
			dataGridView1->Rows->RemoveAt(i);
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//int shift = System::Convert::ToInt32(textBox2->Text);
	dataGridView1->Visible = true;
	Decrypt();

}  

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	lang = 1;
}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	lang = 0;
}
};
}
