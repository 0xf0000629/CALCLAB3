#pragma once
#include <string>
#include <vector>
#include <sstream>
namespace CALCLAB3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ table;
	protected:

	private: System::Windows::Forms::ComboBox^ methods;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ status;
	private: System::Windows::Forms::Button^ bigbutton;
	private: System::Windows::Forms::TextBox^ nbox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ bbox;

	private: System::Windows::Forms::TextBox^ abox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->table = (gcnew System::Windows::Forms::DataGridView());
			this->methods = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bbox = (gcnew System::Windows::Forms::TextBox());
			this->abox = (gcnew System::Windows::Forms::TextBox());
			this->bigbutton = (gcnew System::Windows::Forms::Button());
			this->nbox = (gcnew System::Windows::Forms::TextBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->status = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// table
			// 
			this->table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->table->Location = System::Drawing::Point(12, 327);
			this->table->Name = L"table";
			this->table->Size = System::Drawing::Size(607, 102);
			this->table->TabIndex = 0;
			// 
			// methods
			// 
			this->methods->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->methods->ForeColor = System::Drawing::SystemColors::Info;
			this->methods->FormattingEnabled = true;
			this->methods->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Rectangle (left)", L"Rectangle (right)", L"Rectangle (middle)",
					L"Trapezoid", L"Simpson\'s"
			});
			this->methods->Location = System::Drawing::Point(281, 18);
			this->methods->Name = L"methods";
			this->methods->Size = System::Drawing::Size(311, 21);
			this->methods->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->bbox);
			this->groupBox1->Controls->Add(this->abox);
			this->groupBox1->Controls->Add(this->bigbutton);
			this->groupBox1->Controls->Add(this->nbox);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->methods);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Undertale Dotumche", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(12, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(607, 318);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Input VALUES";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(6, 219);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(210, 66);
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(6, 119);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(210, 71);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(6, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(223, 72);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Determination (8-bit oper. JVE)", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(310, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 37);
			this->label3->TabIndex = 9;
			this->label3->Text = L"B:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Determination (8-bit oper. JVE)", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(310, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 37);
			this->label2->TabIndex = 8;
			this->label2->Text = L"A:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Determination (8-bit oper. JVE)", 26.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(274, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 37);
			this->label1->TabIndex = 7;
			this->label1->Text = L"EPS:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// bbox
			// 
			this->bbox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->bbox->Font = (gcnew System::Drawing::Font(L"Hachicro", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bbox->ForeColor = System::Drawing::SystemColors::Info;
			this->bbox->Location = System::Drawing::Point(369, 124);
			this->bbox->Name = L"bbox";
			this->bbox->Size = System::Drawing::Size(210, 28);
			this->bbox->TabIndex = 6;
			this->bbox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// abox
			// 
			this->abox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->abox->Font = (gcnew System::Drawing::Font(L"Hachicro", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->abox->ForeColor = System::Drawing::SystemColors::Info;
			this->abox->Location = System::Drawing::Point(369, 87);
			this->abox->Name = L"abox";
			this->abox->Size = System::Drawing::Size(210, 28);
			this->abox->TabIndex = 5;
			// 
			// bigbutton
			// 
			this->bigbutton->Font = (gcnew System::Drawing::Font(L"Determination (8-bit oper. JVE)", 48, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bigbutton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bigbutton->Location = System::Drawing::Point(281, 169);
			this->bigbutton->Name = L"bigbutton";
			this->bigbutton->Size = System::Drawing::Size(311, 139);
			this->bigbutton->TabIndex = 4;
			this->bigbutton->Text = L"GO!!!";
			this->bigbutton->UseVisualStyleBackColor = true;
			this->bigbutton->Click += gcnew System::EventHandler(this, &MyForm::bigbutton_Click);
			// 
			// nbox
			// 
			this->nbox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->nbox->Font = (gcnew System::Drawing::Font(L"Hachicro", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nbox->ForeColor = System::Drawing::SystemColors::Info;
			this->nbox->Location = System::Drawing::Point(369, 50);
			this->nbox->Name = L"nbox";
			this->nbox->Size = System::Drawing::Size(210, 28);
			this->nbox->TabIndex = 3;
			this->nbox->TextChanged += gcnew System::EventHandler(this, &MyForm::nbox_TextChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 291);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(105, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Equation 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 196);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(105, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Equation 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 96);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Equation 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// status
			// 
			this->status->Location = System::Drawing::Point(12, 435);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(607, 20);
			this->status->TabIndex = 3;
			this->status->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(631, 468);
			this->Controls->Add(this->status);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->table);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->table))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int sel_eq = 0;
private: double to_double(System::String^ str) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
	std::string ss = chars;

	// Free the allocated memory for const char*
	System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
	std::istringstream iss(ss);
	double result;
	iss >> result;
	return result;
}
private: std::string to_normal(System::String^ str) {
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str)).ToPointer();
	std::string ss = chars;
	return ss;
}
private: System::String^ to_system(std::string s) {
	array<Byte>^ bytes = gcnew array<Byte>(s.length());
	System::Runtime::InteropServices::Marshal::Copy((IntPtr)(char*)s.c_str(), bytes, 0, s.length());

	System::String^ managedString = System::Text::Encoding::UTF8->GetString(bytes);
	return managedString;
}
private: double min(double a, double b) {
	if (a < b) return a; else return b;
}
private: double max(double a, double b) {
	if (a > b) return a; else return b;
}
private: std::vector<std::string> split(std::string k) {
	std::vector<std::string> result;
	System::String^ s = to_system(k);
	array<System::String^>^ parts = s->Split(gcnew array<Char>{' '}, StringSplitOptions::RemoveEmptyEntries);

	for (int i = 0; i < parts->Length; i++)
	{
		System::String^ b = parts[i];
		result.push_back(to_normal(b));
	}

	return result;
}
private: void tableit(std::vector <std::string> a) {
	std::vector <std::vector<std::string> > v;
	int i, j;
	for (i = 0;i < a.size();i++) {
		v.push_back(split(a[i]));
	}
	table->ColumnHeadersVisible = true;
	table->Columns->Clear();
	for (j = 0;j < v[0].size();j++) {
		table->Columns->Add(to_system(v[0][j]), to_system(v[0][j]));
	}
	for (i = 1;i < v.size();i++) {
		table->Rows->Add();
		for (j = 0;j < v[i].size();j++) {
			table->Rows[i - 1]->Cells[j]->Value = to_system(v[i][j]);
		}
	}
	return;
}

private:double f(double x) {
	if (sel_eq == 1)
		return 4 * x * x * x - 5 * x * x + 6 * x - 7;
	if (sel_eq == 2)
		return 3 * x * x * x - 2 * x * x - 7 * x - 8;
	if (sel_eq == 3)
		return x * x * x - 3 * x * x + 7 * x - 10;
}

private: double rect_LR(int n, double a, double b, bool right) {
	int i = 0;
	double h = (b - a) / n;
	std::vector <double> xs(n + 1);
	std::vector <double> ys(n + 1);
	xs[0] = a; ys[0] = f(a);
	xs[n] = b; ys[n] = f(b);
	for (i = 1;i < n;i++) {
		xs[i] = a + h * i;
		ys[i] = f(h * i);
	}
	double sum = 0;
	std::vector <std::string> tbl(3, "");
	tbl[0] += "i ";tbl[1] += "x[i] ";tbl[2] += "y[i] ";
	if (right) {
		for (i = 1;i <= n;i++) {
			tbl[0] += to_normal(i.ToString()) + " ";
			tbl[1] += to_normal(xs[i].ToString()) + " ";
			tbl[2] += to_normal(ys[i].ToString()) + " ";
			sum += ys[i];
		}
		tableit(tbl);
		return h * sum;
	}
	else {
		for (i = 0;i < n;i++) {
			tbl[0] += to_normal(i.ToString()) + " ";
			tbl[1] += to_normal(xs[i].ToString()) + " ";
			tbl[2] += to_normal(ys[i].ToString()) + " ";
			sum += ys[i];
		}
		tableit(tbl);
		return h * sum;
	}
}
double rect_M(int n, double a, double b) {
	int i = 0;
	double h = (b - a) / n;
	std::vector <double> xs(n);
	std::vector <double> ys(n);
	xs[0] = a + h / 2; ys[0] = f(a + h / 2);
	for (i = 1;i < n;i++) {
		xs[i] = a + h * i + h / 2;
		ys[i] = f(xs[i]);
	}
	double sum = 0;
	std::vector <std::string> tbl(3, "");
	tbl[0] += "i ";tbl[1] += "x[i] ";tbl[2] += "y[i] ";
	for (i = 0;i < n;i++) {
		tbl[0] += to_normal(i.ToString()) + " ";
		tbl[1] += to_normal(xs[i].ToString()) + " ";
		tbl[2] += to_normal(ys[i].ToString()) + " ";
		sum += ys[i];
	}
	tableit(tbl);
	return h * sum;
}
double trapez(int n, double a, double b) {
	int i = 0;
	double h = (b - a) / n;
	std::vector <double> xs(n + 1);
	std::vector <double> ys(n + 1);
	xs[0] = a; ys[0] = f(a);
	xs[n] = b; ys[n] = f(b);
	for (i = 1;i < n;i++) {
		xs[i] = a + h * i;
		ys[i] = f(h * i);
	}
	double sum = 0;
	std::vector <std::string> tbl(3, "");
	tbl[0] += "i ";tbl[1] += "x[i] ";tbl[2] += "y[i] ";
	for (i = 1;i < n;i++) {
		tbl[0] += to_normal(i.ToString()) + " ";
		tbl[1] += to_normal(xs[i].ToString()) + " ";
		tbl[2] += to_normal(ys[i].ToString()) + " ";
		sum += ys[i];
	}
	tableit(tbl);
	return h * (sum + (ys[0] + ys[n]) / 2.0);
}
double simpson(int n, double a, double b) {
	int i = 0;
	double h = (b - a) / n;
	std::vector <double> xs(n + 1);
	std::vector <double> ys(n + 1);
	xs[0] = a; ys[0] = f(a);
	xs[n] = b; ys[n] = f(b);
	for (i = 1;i < n;i++) {
		xs[i] = a + h * i;
		ys[i] = f(h * i);
	}
	std::vector <std::string> tbl(3,"");
	tbl[0] += "i ";tbl[1] += "x[i] ";tbl[2] += "y[i] ";
	double sumo = 0;
	double sume = 0;
	for (i = 1;i < n;i++) {
		tbl[0] += to_normal(i.ToString())+" ";
		tbl[1] += to_normal(xs[i].ToString()) + " ";
		tbl[2] += to_normal(ys[i].ToString()) + " ";
		if (i % 2)
			sumo += ys[i];
		else
			sume += ys[i];
	}
	tableit(tbl);
	return h/3 * ((ys[0] + 4 * sumo + 2 * sume + ys[n]));
}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		status->Text = "Selected equation 1.";
		sel_eq = 1;
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		status->Text = "Selected equation 2.";
		sel_eq = 2;
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		status->Text = "Selected equation 3.";
		sel_eq = 3;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void bigbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			switch (methods->SelectedIndex) {
			case 0: {
				double a = to_double(abox->Text);
				double b = to_double(bbox->Text);
				double eps = to_double(nbox->Text);
				double n = 5;
				double ansn, ansn2;
				do {
					ansn = rect_LR(n, a, b, 0);
					ansn2 = rect_LR(n*2, a, b, 0);
					n *= 2;
				} while (fabs(ansn-ansn2)/3 >= eps);
				status->Text = "Answer: " + ansn.ToString() + ", n = " + (n / 2).ToString();
				break;
			}
			case 1: {
				double a = to_double(abox->Text);
				double b = to_double(bbox->Text);
				double eps = to_double(nbox->Text);
				double n = 5;
				double ansn, ansn2;
				do {
					ansn = rect_LR(n, a, b, 1);
					ansn2 = rect_LR(n * 2, a, b, 1);
					n *= 2;
				} while (fabs(ansn - ansn2) / 3 >= eps);
				status->Text = "Answer: " + ansn.ToString() + ", n = " + (n / 2).ToString();
				break;
			}
			case 2: {
				double a = to_double(abox->Text);
				double b = to_double(bbox->Text);
				double eps = to_double(nbox->Text);
				double n = 5;
				double ansn, ansn2;
				do {
					ansn = rect_M(n, a, b);
					ansn2 = rect_M(n * 2, a, b);
					n *= 2;
				} while (fabs(ansn - ansn2) / 3 >= eps);
				status->Text = "Answer: " + ansn.ToString() + ", n = " + (n / 2).ToString();
				break;
			}
			case 3: {
				double a = to_double(abox->Text);
				double b = to_double(bbox->Text);
				double eps = to_double(nbox->Text);
				double n = 5;
				double ansn, ansn2;
				do {
					ansn = trapez(n, a, b);
					ansn2 = trapez(n * 2, a, b);
					n *= 2;
				} while (fabs(ansn - ansn2) / 3 >= eps);
				status->Text = "Answer: " + ansn.ToString() + ", n = " + (n/2).ToString();
				break;
			}
			case 4: {
				double a = to_double(abox->Text);
				double b = to_double(bbox->Text);
				double eps = to_double(nbox->Text);
				double n = 5;
				double ansn, ansn2;
				do {
					ansn = simpson(n, a, b);
					ansn2 = simpson(n * 2, a, b);
					n *= 2;
				} while (fabs(ansn - ansn2) / 15 >= eps);
				status->Text = "Answer: " + ansn.ToString() + ", n = " + (n / 2).ToString();
				break;
			}
			}
		}
		catch (...) {
			status->Text = "Invalid input.";
		}
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
