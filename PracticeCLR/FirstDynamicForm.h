#pragma once
#include "AuxFuncs.h"
#include "msclr\marshal_cppstd.h"

namespace PracticeCLR {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FirstDynamicForm
	/// </summary>
	public ref class FirstDynamicForm : public System::Windows::Forms::Form
	{
	private:
		property String^ fileName;
	public:

		void getFileName(String^ _fileName)
		{
			fileName = _fileName;
		}
		FirstDynamicForm(void)
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
		~FirstDynamicForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ firstDynamicObjTextBox1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ authorLabel;
	private: System::Windows::Forms::TextBox^ firstDynamicObjTextBox2;
	private: System::Windows::Forms::TextBox^ firstDynamicObjTextBox3;
	private: System::Windows::Forms::TextBox^ firstDynamicObjTextBox4;
	private: System::Windows::Forms::TextBox^ firstDynamicObjTextBox5;
	private: System::Windows::Forms::Label^ objNum1Label;
	private: System::Windows::Forms::Label^ objNum2Label;
	private: System::Windows::Forms::Label^ objNum3Label;
	private: System::Windows::Forms::Label^ objNum4Label;
	private: System::Windows::Forms::Label^ objNum5Label;
	private: System::Windows::Forms::Button^ showFirstDynamicBtn;





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
			this->firstDynamicObjTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->authorLabel = (gcnew System::Windows::Forms::Label());
			this->firstDynamicObjTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->firstDynamicObjTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->firstDynamicObjTextBox4 = (gcnew System::Windows::Forms::TextBox());
			this->firstDynamicObjTextBox5 = (gcnew System::Windows::Forms::TextBox());
			this->objNum1Label = (gcnew System::Windows::Forms::Label());
			this->objNum2Label = (gcnew System::Windows::Forms::Label());
			this->objNum3Label = (gcnew System::Windows::Forms::Label());
			this->objNum4Label = (gcnew System::Windows::Forms::Label());
			this->objNum5Label = (gcnew System::Windows::Forms::Label());
			this->showFirstDynamicBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// firstDynamicObjTextBox1
			// 
			this->firstDynamicObjTextBox1->Location = System::Drawing::Point(97, 29);
			this->firstDynamicObjTextBox1->Multiline = true;
			this->firstDynamicObjTextBox1->Name = L"firstDynamicObjTextBox1";
			this->firstDynamicObjTextBox1->Size = System::Drawing::Size(361, 36);
			this->firstDynamicObjTextBox1->TabIndex = 0;
			// 
			// authorLabel
			// 
			this->authorLabel->AutoSize = true;
			this->authorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->authorLabel->Location = System::Drawing::Point(94, 9);
			this->authorLabel->Name = L"authorLabel";
			this->authorLabel->Size = System::Drawing::Size(358, 17);
			this->authorLabel->TabIndex = 2;
			this->authorLabel->Text = L"Динамическая цепочка 1(Должники в начале)";
			// 
			// firstDynamicObjTextBox2
			// 
			this->firstDynamicObjTextBox2->Location = System::Drawing::Point(97, 97);
			this->firstDynamicObjTextBox2->Multiline = true;
			this->firstDynamicObjTextBox2->Name = L"firstDynamicObjTextBox2";
			this->firstDynamicObjTextBox2->Size = System::Drawing::Size(361, 36);
			this->firstDynamicObjTextBox2->TabIndex = 3;
			// 
			// firstDynamicObjTextBox3
			// 
			this->firstDynamicObjTextBox3->Location = System::Drawing::Point(97, 168);
			this->firstDynamicObjTextBox3->Multiline = true;
			this->firstDynamicObjTextBox3->Name = L"firstDynamicObjTextBox3";
			this->firstDynamicObjTextBox3->Size = System::Drawing::Size(361, 36);
			this->firstDynamicObjTextBox3->TabIndex = 4;
			// 
			// firstDynamicObjTextBox4
			// 
			this->firstDynamicObjTextBox4->Location = System::Drawing::Point(97, 248);
			this->firstDynamicObjTextBox4->Multiline = true;
			this->firstDynamicObjTextBox4->Name = L"firstDynamicObjTextBox4";
			this->firstDynamicObjTextBox4->Size = System::Drawing::Size(361, 36);
			this->firstDynamicObjTextBox4->TabIndex = 5;
			// 
			// firstDynamicObjTextBox5
			// 
			this->firstDynamicObjTextBox5->Location = System::Drawing::Point(97, 326);
			this->firstDynamicObjTextBox5->Multiline = true;
			this->firstDynamicObjTextBox5->Name = L"firstDynamicObjTextBox5";
			this->firstDynamicObjTextBox5->Size = System::Drawing::Size(361, 36);
			this->firstDynamicObjTextBox5->TabIndex = 6;
			// 
			// objNum1Label
			// 
			this->objNum1Label->AutoSize = true;
			this->objNum1Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->objNum1Label->Location = System::Drawing::Point(61, 34);
			this->objNum1Label->Name = L"objNum1Label";
			this->objNum1Label->Size = System::Drawing::Size(30, 31);
			this->objNum1Label->TabIndex = 7;
			this->objNum1Label->Text = L"1";
			// 
			// objNum2Label
			// 
			this->objNum2Label->AutoSize = true;
			this->objNum2Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->objNum2Label->Location = System::Drawing::Point(61, 102);
			this->objNum2Label->Name = L"objNum2Label";
			this->objNum2Label->Size = System::Drawing::Size(30, 31);
			this->objNum2Label->TabIndex = 8;
			this->objNum2Label->Text = L"2";
			// 
			// objNum3Label
			// 
			this->objNum3Label->AutoSize = true;
			this->objNum3Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->objNum3Label->Location = System::Drawing::Point(61, 173);
			this->objNum3Label->Name = L"objNum3Label";
			this->objNum3Label->Size = System::Drawing::Size(30, 31);
			this->objNum3Label->TabIndex = 9;
			this->objNum3Label->Text = L"3";
			// 
			// objNum4Label
			// 
			this->objNum4Label->AutoSize = true;
			this->objNum4Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->objNum4Label->Location = System::Drawing::Point(61, 253);
			this->objNum4Label->Name = L"objNum4Label";
			this->objNum4Label->Size = System::Drawing::Size(30, 31);
			this->objNum4Label->TabIndex = 10;
			this->objNum4Label->Text = L"4";
			// 
			// objNum5Label
			// 
			this->objNum5Label->AutoSize = true;
			this->objNum5Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->objNum5Label->Location = System::Drawing::Point(61, 331);
			this->objNum5Label->Name = L"objNum5Label";
			this->objNum5Label->Size = System::Drawing::Size(30, 31);
			this->objNum5Label->TabIndex = 11;
			this->objNum5Label->Text = L"5";
			// 
			// showFirstDynamicBtn
			// 
			this->showFirstDynamicBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->showFirstDynamicBtn->Location = System::Drawing::Point(476, 326);
			this->showFirstDynamicBtn->Name = L"showFirstDynamicBtn";
			this->showFirstDynamicBtn->Size = System::Drawing::Size(80, 36);
			this->showFirstDynamicBtn->TabIndex = 12;
			this->showFirstDynamicBtn->Text = L"Показать цепочку";
			this->showFirstDynamicBtn->UseVisualStyleBackColor = true;
			this->showFirstDynamicBtn->Click += gcnew System::EventHandler(this, &FirstDynamicForm::showFirstDynamicBtn_Click);
			// 
			// FirstDynamicForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 374);
			this->Controls->Add(this->showFirstDynamicBtn);
			this->Controls->Add(this->objNum5Label);
			this->Controls->Add(this->objNum4Label);
			this->Controls->Add(this->objNum3Label);
			this->Controls->Add(this->objNum2Label);
			this->Controls->Add(this->objNum1Label);
			this->Controls->Add(this->firstDynamicObjTextBox5);
			this->Controls->Add(this->firstDynamicObjTextBox4);
			this->Controls->Add(this->firstDynamicObjTextBox3);
			this->Controls->Add(this->firstDynamicObjTextBox2);
			this->Controls->Add(this->authorLabel);
			this->Controls->Add(this->firstDynamicObjTextBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FirstDynamicForm";
			this->Text = L"FirstDynamicForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void showFirstDynamicBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fileName != nullptr)
		{
			std::ifstream file(msclr::interop::marshal_as<std::string>(fileName));

			std::list<Student> studentList;
			std::list<Student> debtors;

			if (isMyFileEmpty(msclr::interop::marshal_as<std::string>(fileName)))
			{
				std::cout << "File is empty..." << std::endl;
				return;
			}
			bool hasTwo;
			std::string line;
			// Read a student's information and grades for each iteration
			while (std::getline(file, line)) {
				std::istringstream iss(line);

				Student studentInfo;
				hasTwo = false;


				iss >> studentInfo.firstName >> studentInfo.lastName;
				double avgGrade = 0; int gradesCount = 0;
				for (int j = 0; j < 5; j++) {
					int grade;
					iss >> grade;
					++gradesCount;
					if (grade == 2)
						hasTwo = true;

					if (grade >= 2 && grade <= 5) {
						studentInfo.grades.push_back(grade);
						avgGrade += grade;
					}
					else {
						break;
					}
				}
				avgGrade /= gradesCount;
				studentInfo.averageGrade = avgGrade;

				if (gradesCount < 5 || hasTwo) {
					debtors.push_back(studentInfo);
				}
				else {
					studentList.push_back(studentInfo);
				}
				iss.clear();  // Reset the stream state
				iss.seekg(0, std::ios::beg);  // Move stream position to the beginning of the line
			}

			file.close();

			studentList.splice(studentList.begin(), debtors);
			int count = 0;
			for (const auto& student : studentList)
			{
				if (student.firstName.length() > 0 && count == 0)
				{
					++count;
					String^ firstName = gcnew String(student.firstName.c_str());
					String^ lastName = gcnew String(student.lastName.c_str());
					String^ avgMark = gcnew String(std::to_string(student.averageGrade).c_str());
					std::string gradesTemp = "[ ";
					for (const auto& grade : student.grades)
					{
						gradesTemp += std::to_string(grade) + ", ";
					}
					gradesTemp += "]";
					String^ gradesString = gcnew String(gradesTemp.c_str());
					this->firstDynamicObjTextBox1->Text = firstName + " " + lastName + " " + gradesString + " " + avgMark;
					continue;
				}
				if (student.firstName.length() > 0 && count == 1)
				{
					++count;
					String^ firstName = gcnew String(student.firstName.c_str());
					String^ lastName = gcnew String(student.lastName.c_str());
					String^ avgMark = gcnew String(std::to_string(student.averageGrade).c_str());
					std::string gradesTemp = "[ ";
					for (const auto& grade : student.grades)
					{
						gradesTemp += std::to_string(grade) + ", ";
					}
					gradesTemp += " ]";
					String^ gradesString = gcnew String(gradesTemp.c_str());
					this->firstDynamicObjTextBox2->Text = firstName + " " + lastName + " " + gradesString + " " + avgMark;
					continue;
				}
				if (student.firstName.length() > 0 && count == 2)
				{
					++count;
					String^ firstName = gcnew String(student.firstName.c_str());
					String^ lastName = gcnew String(student.lastName.c_str());
					String^ avgMark = gcnew String(std::to_string(student.averageGrade).c_str());
					std::string gradesTemp = "[ ";
					for (const auto& grade : student.grades)
					{
						gradesTemp += std::to_string(grade) + ", ";
					}
					gradesTemp += " ]";
					String^ gradesString = gcnew String(gradesTemp.c_str());
					this->firstDynamicObjTextBox3->Text = firstName + " " + lastName + " " + gradesString + " " + avgMark;
					continue;
				}
				if (student.firstName.length() > 0 && count == 3)
				{
					++count;
					String^ firstName = gcnew String(student.firstName.c_str());
					String^ lastName = gcnew String(student.lastName.c_str());
					String^ avgMark = gcnew String(std::to_string(student.averageGrade).c_str());
					std::string gradesTemp = "[ ";
					for (const auto& grade : student.grades)
					{
						gradesTemp += std::to_string(grade) + ", ";
					}
					gradesTemp += " ]";
					String^ gradesString = gcnew String(gradesTemp.c_str());
					this->firstDynamicObjTextBox4->Text = firstName + " " + lastName + " " + gradesString + " " + avgMark;
					continue;
				}
				if (student.firstName.length() > 0 && count == 4)
				{
					++count;
					String^ firstName = gcnew String(student.firstName.c_str());
					String^ lastName = gcnew String(student.lastName.c_str());
					String^ avgMark = gcnew String(std::to_string(student.averageGrade).c_str());
					std::string gradesTemp = "[ ";
					for (const auto& grade : student.grades)
					{
						gradesTemp += std::to_string(grade) + ", ";
					}
					gradesTemp += " ]";
					String^ gradesString = gcnew String(gradesTemp.c_str());
					this->firstDynamicObjTextBox5->Text = firstName + " " + lastName + " " + gradesString + " " + avgMark;
					continue;
				}
				if (count > 4)
					break;
			}
		}
	}
};
}
