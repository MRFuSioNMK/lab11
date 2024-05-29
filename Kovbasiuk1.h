#pragma once

namespace Max {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Kovbasyuk1
	/// </summary>
	public ref class Kovbasyuk1 : public System::Windows::Forms::Form
	{
	public:
		Kovbasyuk1(void)
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
		~Kovbasyuk1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Kovbasyuk1::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 206);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Розрахувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Kovbasyuk1::button1_Click);
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Kovbasyuk1::button1_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(447, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(285, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введіть секунди у діапазоні від 1 до 86400";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(419, 26);
			this->label4->TabIndex = 5;
			this->label4->Text = L"15. З початку доби минуло N секунд (N – ціле). Знайти кількість повних годин, що\r"
				L"\nминули з початку доби.";
			this->label4->Click += gcnew System::EventHandler(this, &Kovbasyuk1::label4_Click);
			// 
			// Kovbasyuk1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(632, 425);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Kovbasyuk1";
			this->Text = L"Kovbasyuk";
			this->Load += gcnew System::EventHandler(this, &Kovbasyuk1::Kovbasyuk1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Kovbasyuk1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int sec = System::Convert::ToInt32(textBox1->Text);
		sec %= 86400;
		sec /= 3600;
		this->label2->Text = System::Convert::ToString(sec);

	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
