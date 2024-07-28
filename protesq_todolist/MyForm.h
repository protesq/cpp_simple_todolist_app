#pragma once
#include <string.h>
namespace asd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(401, 63);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(271, 355);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(396, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Yapýlmamýþ Görevler";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(90, 223);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ekle";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 167);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(339, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(166, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Görev";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(90, 197);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(219, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(701, 63);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(271, 355);
			this->listBox2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(696, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Yapýlmýþ Görevler";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(90, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Yapýldý Olarak Ýþaretle";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1010, 440);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ task = textBox1->Text; // text alýndý
		String^ date = dateTimePicker1->Value.ToShortDateString();
		
		if (!String::IsNullOrEmpty(task)) {
			String^ itemText = task + " - " + date;
			listBox1->Items->Add(itemText);
			
			textBox1->Clear();
		}
		else {
			MessageBox::Show("Lütfen görev giriniz.", "Uyarý !", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedIndex = listBox1->SelectedIndex;
	if (selectedIndex != -1) {
		String^ selectedItem = listBox1->Items[selectedIndex]->ToString();
		MessageBox::Show("Yapýldý olarak iþaretlendi");
		listBox1->Items->Remove(selectedItem);
		listBox2->Items->Add("+ " + selectedItem);

	}
	else {
		MessageBox::Show("Lütfen görev giriniz.", "Uyarý !", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
