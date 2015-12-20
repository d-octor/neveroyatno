#pragma once
//

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		double temp;
		int flag; 

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(57, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(102, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(39, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 113);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(39, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(57, 113);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(39, 35);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(102, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(39, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 154);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(39, 35);
			this->button7->TabIndex = 6;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(57, 154);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(39, 35);
			this->button8->TabIndex = 7;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(102, 154);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(39, 35);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(12, 194);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(84, 35);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(102, 194);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 35);
			this->button11->TabIndex = 10;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(147, 72);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(39, 35);
			this->button12->TabIndex = 11;
			this->button12->Text = L"C";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(147, 113);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(39, 35);
			this->button13->TabIndex = 12;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Calculator::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(147, 154);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(39, 35);
			this->button14->TabIndex = 13;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Calculator::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(147, 194);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(39, 35);
			this->button15->TabIndex = 14;
			this->button15->Text = L"+";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(237, 72);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(39, 157);
			this->button16->TabIndex = 15;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::button16_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 29);
			this->textBox1->TabIndex = 16;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(192, 72);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(39, 35);
			this->button17->TabIndex = 17;
			this->button17->Text = L"1/x";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(192, 113);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(39, 35);
			this->button18->TabIndex = 18;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Calculator::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(192, 154);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(39, 35);
			this->button19->TabIndex = 19;
			this->button19->Text = L"+-";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Calculator::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(192, 194);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(39, 35);
			this->button20->TabIndex = 20;
			this->button20->Text = L"sqrt";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Calculator::button20_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
				 double result;

				 switch (flag)
				 {
				 case 1:
					 textBox1->Text = Convert::ToString(temp + Convert::ToDouble(textBox1->Text));
					 break;
				 case 2:
					 textBox1->Text = Convert::ToString(temp - Convert::ToDouble(textBox1->Text));
					 break;
				 case 3:
					 textBox1->Text = Convert::ToString(temp * Convert::ToDouble(textBox1->Text));
					 break;
				 case 4:
					 textBox1->Text = Convert::ToString(temp / Convert::ToDouble(textBox1->Text));
					 break;

				 }
	}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = Convert::ToDouble(textBox1->Text);
	textBox1->Text = "";
	flag = 1; //Операция сложения
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "7";
			 }
			 else
				 textBox1->Text += "7";
			 
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "8";
			 }
			 else
				 textBox1->Text += "8";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "9";
			 }
			 else
				 textBox1->Text += "9";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "4";
			 }
			 else
				 textBox1->Text += "4";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "5";
			 }
			 else
				 textBox1->Text += "5";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "6";
			 }
			 else
				 textBox1->Text += "6";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "1";
			 }
			 else

				 textBox1->Text += "1";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "2";
			 }
			 else
				 textBox1->Text += "2";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
				 textBox1->Text = "3";
			 }
			 else
				 textBox1->Text += "3";
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "0")
			 {
			 }
			 else

				 textBox1->Text += "0";
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text == "")
			 {
				 textBox1->Text += "0,";
			 }
			 else
				 textBox1->Text += ",";
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 temp = Convert::ToDouble(textBox1->Text);

			 textBox1->Text = "";
			 flag = 2; //Операция вычитания
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			temp = Convert::ToDouble(textBox1->Text);
			textBox1->Text = "";
			 flag = 3; //Операция умножения
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 temp = Convert::ToDouble(textBox1->Text);
			 if (temp == 0)
			 textBox1->Text = "Недопустимый ввод";
			 else
				 textBox1->Text = Convert::ToString(1 / temp);
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = Convert::ToDouble(textBox1->Text);
	textBox1->Text = "";
	flag = 4; //Операция деления
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = Convert::ToDouble(textBox1->Text);
	if (temp <= 0)
		textBox1->Text = "Недопустимый ввод";
	else
		textBox1->Text = Convert::ToString(Math::Sqrt(temp));
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	temp = 0;//первое значение,введеннок в калькуляторе
	flag = 0;//какая операция
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = -1 * Convert::ToDouble(textBox1->Text);
	textBox1->Text = Convert::ToString(temp);
}
};
}
