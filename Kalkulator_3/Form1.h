#pragma once


namespace Kalkulator_3 {
#include "TKalkulator.h"
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TKalkulator;
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
		    kalkulator = gcnew TKalkulator1;
			pobrano1 = pobrano2 = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  arg1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  arg2;
	
	private: System::Windows::Forms::RadioButton^  dodajButton;
	private: System::Windows::Forms::RadioButton^  odejmijButton;
	private: System::Windows::Forms::RadioButton^  pomnozButton;
	private: System::Windows::Forms::RadioButton^  podzielButton;
	
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  wynik;
	private: System::Windows::Forms::Button^  usun;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dodajButton = (gcnew System::Windows::Forms::RadioButton());
			this->odejmijButton = (gcnew System::Windows::Forms::RadioButton());
			this->pomnozButton = (gcnew System::Windows::Forms::RadioButton());
			this->podzielButton = (gcnew System::Windows::Forms::RadioButton());
			this->arg1 = (gcnew System::Windows::Forms::TextBox());
			this->arg2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->wynik = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usun = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dodajButton
			// 
			this->dodajButton->AutoSize = true;
			this->dodajButton->Checked = true;
			this->dodajButton->Location = System::Drawing::Point(187, 26);
			this->dodajButton->Name = L"dodajButton";
			this->dodajButton->Size = System::Drawing::Size(53, 17);
			this->dodajButton->TabIndex = 0;
			this->dodajButton->TabStop = true;
			this->dodajButton->Text = L"Dodaj";
			this->dodajButton->UseVisualStyleBackColor = true;
			this->dodajButton->Click += gcnew System::EventHandler(this, &Form1::dodajButton_CheckedChanged);
			// 
			// odejmijButton
			// 
			this->odejmijButton->AutoSize = true;
			this->odejmijButton->Location = System::Drawing::Point(187, 82);
			this->odejmijButton->Name = L"odejmijButton";
			this->odejmijButton->Size = System::Drawing::Size(59, 17);
			this->odejmijButton->TabIndex = 1;
			this->odejmijButton->Text = L"Odejmij";
			this->odejmijButton->UseVisualStyleBackColor = true;
			this->odejmijButton->Click += gcnew System::EventHandler(this, &Form1::odejmijButton_CheckedChanged);
			// 
			// pomnozButton
			// 
			this->pomnozButton->AutoSize = true;
			this->pomnozButton->Location = System::Drawing::Point(187, 134);
			this->pomnozButton->Name = L"pomnozButton";
			this->pomnozButton->Size = System::Drawing::Size(63, 17);
			this->pomnozButton->TabIndex = 2;
			this->pomnozButton->Text = L"Pomnoz";
			this->pomnozButton->UseVisualStyleBackColor = true;
			this->pomnozButton->Click += gcnew System::EventHandler(this, &Form1::pomnozButton_CheckedChanged);
			// 
			// podzielButton
			// 
			this->podzielButton->AutoSize = true;
			this->podzielButton->Location = System::Drawing::Point(187, 189);
			this->podzielButton->Name = L"podzielButton";
			this->podzielButton->Size = System::Drawing::Size(59, 17);
			this->podzielButton->TabIndex = 3;
			this->podzielButton->Text = L"Podziel";
			this->podzielButton->UseVisualStyleBackColor = true;
			this->podzielButton->Click += gcnew System::EventHandler(this, &Form1::podzielButton_CheckedChanged);
			// 
			// arg1
			// 
			this->arg1->Location = System::Drawing::Point(41, 36);
			this->arg1->Name = L"arg1";
			this->arg1->Size = System::Drawing::Size(100, 20);
			this->arg1->TabIndex = 4;
			this->arg1->Leave += gcnew System::EventHandler(this, &Form1::arg1_TextChanged);
			// 
			// arg2
			// 
			this->arg2->Location = System::Drawing::Point(41, 107);
			this->arg2->Name = L"arg2";
			this->arg2->Size = System::Drawing::Size(100, 20);
			this->arg2->TabIndex = 5;
			this->arg2->Leave += gcnew System::EventHandler(this, &Form1::arg2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Argument 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Argument 2";
			// 
			// wynik
			// 
			this->wynik->Location = System::Drawing::Point(41, 188);
			this->wynik->Name = L"wynik";
			this->wynik->ReadOnly = true;
			this->wynik->Size = System::Drawing::Size(100, 20);
			this->wynik->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Wynik";
			// 
			// usun
			// 
			this->usun->Location = System::Drawing::Point(41, 229);
			this->usun->Name = L"usun";
			this->usun->Size = System::Drawing::Size(75, 23);
			this->usun->TabIndex = 10;
			this->usun->Text = L"Wyczysc";
			this->usun->UseVisualStyleBackColor = true;
			this->usun->Click += gcnew System::EventHandler(this, &Form1::usun_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(284, 264);
			this->Controls->Add(this->usun);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->wynik);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->arg2);
			this->Controls->Add(this->arg1);
			this->Controls->Add(this->podzielButton);
			this->Controls->Add(this->pomnozButton);
			this->Controls->Add(this->odejmijButton);
			this->Controls->Add(this->dodajButton);
			this->Name = L"Form1";
			this->Text = L"Kalkulator1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: TKalkulator1^ kalkulator;
private: bool pobrano1, pobrano2;
private: System::Void usun_Click(System::Object^  sender, System::EventArgs^  e) {
		 pobrano2=pobrano1=false;
		 arg1->Text="";
		 arg2->Text="";
		 wynik->Text="";
		 }
private: System::Void arg1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 double warg1 = Double::Parse(arg1->Text);
		 kalkulator->setarg1(warg1);
		 pobrano1=true;
		}
private: System::Void arg2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 double warg2 = Double::Parse(arg2->Text);
		 kalkulator->setarg2(warg2);
		 pobrano2=true;
		 }
private: void obsluga(wchar_t oper_)
	 {  if(pobrano1 && pobrano2) 
		 { kalkulator->setoper(oper_);
		   kalkulator->wyniki();
		   wynik->Text=kalkulator->info();
		  }
	 }
private: System::Void dodajButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) { 
		obsluga('+');
		}
private: System::Void odejmijButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 obsluga('-');
		}
private: System::Void pomnozButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		obsluga('*');
		}
private: System::Void podzielButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		obsluga('/');
		}
};
}

