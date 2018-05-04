#pragma once
#include <iostream>
#include <string>
#include "Header.h"
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <codecvt>
#include <locale>
namespace Project13 
{
	using namespace std;
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
			this->MaximizeBox = false;
			comboBox1->Items->Add("0");
			comboBox1->Items->Add("1");
			comboBox1->Items->Add("2");
			comboBox1->Items->Add("3");
			comboBox1->Items->Add("4");
			comboBox1->Items->Add("5");
			comboBox1->Text = "3";
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;



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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(86, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(228, 14);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(344, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Размер";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(13, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(406, 208);
			this->dataGridView1->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(238, 258);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(344, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Результат";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(175, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Точность:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(433, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Ответ:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(436, 42);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(420, 238);
			this->listBox1->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(781, 11);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"X:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(205, 17);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Y:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 261);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Округление:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(89, 258);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(80, 21);
			this->comboBox1->TabIndex = 14;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(13, 14);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(24, 24);
			this->button4->TabIndex = 15;
			this->button4->Text = L"\?";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(869, 290);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор ГЗ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: int x, y;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		x = Convert::ToInt32(textBox1->Text);
		y = Convert::ToInt32(textBox2->Text);
		dataGridView1->ColumnCount = x+1;
		dataGridView1->RowCount = y;		
	}
	
	public:

	void show(double **a, int n, int m)
	{
		String ^str;
		//string str0="";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				str += a[i][j].ToString()+" ";
			}
			listBox1->Items->Add(str);
			str = "";
		}
		listBox1->Items->Add("");
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int i, j, n = 3, k, m = 1;
		double B = 0, alpha = 0, t = 0;
		double **a = new double*[x];//основная матрица
		for (i = 0; i < x; i++)
		{
			a[i] = new double[y];
		}
		double **at = new double*[x];//транспонирование матрицы
		for (i = 0; i < x; i++)
		{
			at[i] = new double[y];
		}
		double **ata = new double*[x];
		for (i = 0; i < x; i++)
		{
			ata[i] = new double[y];
		}
		double **b = new double*[x];//доп матрица
		for (i = 0; i < x; i++)
		{
			b[i] = new double[y];
		}
		double **atb = new double*[x];
		for (i = 0; i < x; i++)
		{
			atb[i] = new double[y];
		}
		double *X = new double[x];
		double *X1 = new double[x];
		double *A = new double[x];
		for (int i = 0; i < x; i++)
		{
			for (int ii = 0; ii < y; ii++)
			{
				a[i][ii] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[ii]->Value);
				b[i][0] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[y]->Value);
			}
		}
		at = transp(at, a, n);
		for (i = 0; i < x; i++) //ata array2 with (a)
		{
			for (j = 0; j < y; j++)
			{
				ata[i][j] = 0;
				for (k = 0; k < n; k++)
					ata[i][j] += at[i][k] * a[k][j];
			}
		}
		for (i = 0; i < x; i++) //atb array2 with (b)
		{
			for (j = 0; j < y; j++)
			{
				atb[i][0] = 0;
				for (k = 0; k < n; k++)
					atb[i][0] += at[i][k] * b[k][0];
			}
		}
		double xi = 0;
		for (i = 0; i < x; i++)
		{
			X[i] = 0;			
		}			
		String ^str;
		int RR = round_value(comboBox1->SelectedIndex);
		do
		{			
			for (i = 0; i < x; i++)
			{
				X1[i] = X[i];
			}
			for (i = 0; i < x; i++)
			{
				for (int p = 0; p < x; p++)
				{
					A[p] = 0;
				}
				alpha = 0;
				B = atb[i][0] / ata[i][i];
				xi = 0;
				for (j = 0; j < y; j++)
				{
					if (i != j)
					{
						A[j] = ata[i][j] / ata[i][i];
						xi += (A[j] * X[j]);
					}
				}
				X[i] = B - xi;
				str += round(X[i] * RR) / RR + "\t";
			}
			listBox1->Items->Add(str);
			str = "";
		} while (!converge(X, X1, x, Convert::ToDouble(textBox3->Text)));
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		listBox1->Items->Clear();
	}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {	
	Help::ShowHelp(this, "H.chm");
}
};
}
