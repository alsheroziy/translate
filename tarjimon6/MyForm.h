#pragma once

namespace tarjimon6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBoxUzbek;
	private: System::Windows::Forms::TextBox^  textBoxEnglish;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonTranslate;
	private: System::Windows::Forms::Label^  labelUzbek;
	private: System::Windows::Forms::Label^  labelEnglish;
	private: System::Windows::Forms::Label^  labelResult;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonClear;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBoxUzbek = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEnglish = (gcnew System::Windows::Forms::TextBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonTranslate = (gcnew System::Windows::Forms::Button());
			this->labelUzbek = (gcnew System::Windows::Forms::Label());
			this->labelEnglish = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxUzbek
			// 
			this->textBoxUzbek->Location = System::Drawing::Point(22, 77);
			this->textBoxUzbek->Multiline = true;
			this->textBoxUzbek->Name = L"textBoxUzbek";
			this->textBoxUzbek->Size = System::Drawing::Size(385, 126);
			this->textBoxUzbek->TabIndex = 0;
			// 
			// textBoxEnglish
			// 
			this->textBoxEnglish->Location = System::Drawing::Point(522, 77);
			this->textBoxEnglish->Multiline = true;
			this->textBoxEnglish->Name = L"textBoxEnglish";
			this->textBoxEnglish->Size = System::Drawing::Size(358, 126);
			this->textBoxEnglish->TabIndex = 1;
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(22, 375);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(106, 40);
			this->buttonSave->TabIndex = 2;
			this->buttonSave->Text = L"Faylni saqlash";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &MyForm::buttonSave_Click);
			// 
			// buttonTranslate
			// 
			this->buttonTranslate->Location = System::Drawing::Point(774, 375);
			this->buttonTranslate->Name = L"buttonTranslate";
			this->buttonTranslate->Size = System::Drawing::Size(106, 40);
			this->buttonTranslate->TabIndex = 3;
			this->buttonTranslate->Text = L"Translate";
			this->buttonTranslate->UseVisualStyleBackColor = true;
			this->buttonTranslate->Click += gcnew System::EventHandler(this, &MyForm::buttonTranslate_Click);
			// 
			// labelUzbek
			// 
			this->labelUzbek->AutoSize = true;
			this->labelUzbek->Location = System::Drawing::Point(182, 61);
			this->labelUzbek->Name = L"labelUzbek";
			this->labelUzbek->Size = System::Drawing::Size(56, 13);
			this->labelUzbek->TabIndex = 4;
			this->labelUzbek->Text = L"Uzbekcha";
			// 
			// labelEnglish
			// 
			this->labelEnglish->AutoSize = true;
			this->labelEnglish->Location = System::Drawing::Point(663, 61);
			this->labelEnglish->Name = L"labelEnglish";
			this->labelEnglish->Size = System::Drawing::Size(49, 13);
			this->labelEnglish->TabIndex = 5;
			this->labelEnglish->Text = L"Inglizcha";
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(448, 223);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(34, 13);
			this->labelResult->TabIndex = 6;
			this->labelResult->Text = L"Natija";
			this->labelResult->Click += gcnew System::EventHandler(this, &MyForm::labelResult_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(224, 239);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(488, 130);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(414, 375);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(106, 40);
			this->buttonClear->TabIndex = 8;
			this->buttonClear->Text = L"Tozalash txt fileni";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(949, 450);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->labelEnglish);
			this->Controls->Add(this->labelUzbek);
			this->Controls->Add(this->buttonTranslate);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->textBoxEnglish);
			this->Controls->Add(this->textBoxUzbek);
			this->Name = L"MyForm";
			this->Text = L"Translator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ uzbekText = textBoxUzbek->Text;
		String^ englishText = textBoxEnglish->Text;
		String^ filePath = "tarjimalar.txt";

		StreamWriter^ writer = gcnew StreamWriter(filePath, true);
		writer->WriteLine(uzbekText + " - " + englishText);
		writer->Close();		MessageBox::Show("Tarjima fayliga so'zlar saqlandi.");
	}

	private: System::Void buttonTranslate_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ wordToFindUzbek = textBoxUzbek->Text;
		String^ wordToFindEnglish = textBoxEnglish->Text;
		String^ filePath = "tarjimalar.txt";

		if (!String::IsNullOrEmpty(wordToFindUzbek)) {
			String^ translation = FindTranslation(wordToFindUzbek, filePath);
			textBox1->Text = translation;
		}
		else if (!String::IsNullOrEmpty(wordToFindEnglish)) {
			String^ translation = FindTranslationFromEnglish(wordToFindEnglish, filePath);
			textBox1->Text = translation;
		}
		else {
			MessageBox::Show("Iltimos, tarjima qilish uchun soʻz kiriting.");
		}
	}

	String^ FindTranslation(String^ wordToFind, String^ filePath) {
		if (!File::Exists(filePath)) {
			return "Tarjima fayli topilmadi.";
		}

		StreamReader^ reader = gcnew StreamReader(filePath);
		String^ content = reader->ReadToEnd();
		reader->Close();

		array<String^>^ lines = content->Split(gcnew array<Char>{'\n'});
		String^ result = "Tarjima fayli topilmadi.";

		for each (String^ line in lines) {
			if (line->Contains(wordToFind)) {
				array<String^>^ parts = line->Split(gcnew array<Char>{'-'});
				if (parts->Length == 2 && parts[0]->Trim() == wordToFind) {
					result = "Uzbek: " + parts[0]->Trim() + " => English: " + parts[1]->Trim();
					break;
				}
			}
		}

		return result;
	}

	String^ FindTranslationFromEnglish(String^ wordToFind, String^ filePath) {
		if (!File::Exists(filePath)) {
			return "Tarjima fayli topilmadi.";
		}

		StreamReader^ reader = gcnew StreamReader(filePath);
		String^ content = reader->ReadToEnd();
		reader->Close();

		array<String^>^ lines = content->Split(gcnew array<Char>{'\n'});
		String^ result = "Tarjima fayli topilmadi.";

		for each (String^ line in lines) {
			array<String^>^ parts = line->Split(gcnew array<Char>{'-'});
			if (parts->Length == 2 && parts[1]->Trim() == wordToFind) {
				result = "English: " + parts[1]->Trim() + " => Uzbek: " + parts[0]->Trim();
				break;
			}
		}

		return result;
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void labelResult_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ filePath = "tarjimalar.txt";
		if (File::Exists(filePath)) {
			File::WriteAllText(filePath, String::Empty);
			MessageBox::Show("Tarjima fayli tozalandi.");
		}
		else {
			MessageBox::Show("Tarjima fayli topilmadi.");
		}
	}
};
}
