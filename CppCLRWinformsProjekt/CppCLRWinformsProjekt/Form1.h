#pragma once

#include <iostream>
#include <string>
#include <cmath>  
namespace CppCLRWinformsProjekt {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Èäåíòèôèêàòîð";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(145, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(34, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 47);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ñôîðìèðîâàòü ïàðîëü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(31, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Q";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(82, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(200, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 220);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		label3->Text = con(textBox1->Text, textBox1->Text->Length);
		textBox2->Text = Convert::ToString(textBox1->Text->Length);
	}
	private: String^ con(String^ l, int num) {
		cli::array<String^>^ temp = { "à", "á", "â", "ã", "ä", "å", "¸", "æ", "ç", "è", "é", "ê", "ë", "ì", "í", "î", "ï", "ð", "ñ",
			"ò", "ó", "ô", "õ", "ö", "÷", "ø", "ù", "ú", "û", "ü", "ý", "þ", "ÿ" };
		cli::array<String^>^ templ = { "À", "Á", "Â", "Ã", "Ä", "Å", "¨", "Æ", "Ç", "È", "É", "Ê", "Ë", "Ì", "Í", "Î", "Ï", "Ð", "Ñ",
			"Ò", "Ó", "Ô", "Õ", "Ö", "×", "Ø", "Ù", "Ú", "Û", "Ü", "Ý", "Þ", "ß" };
		String^ cr;
		for (int i; i < 3; i++) {
			cr += temp[rand() % 33];
		}
		for (int i; i < 2; i++) {
			cr += templ[rand() % 33];
		}

		if ((num * num * num * num) % 100 < 10)
			cr += 0;
		else
			cr += (num * num * num * num) % 100;

		cr += (num * num * num * num) % 100;
		l = cr;
		return l;
	}
	};
}
