#pragma once
#include "msclr\marshal_cppstd.h"
#include "FirstDynamicForm.h"
#include "SecondDynamicForm.h"
#include "SearchTreeForm.h"
#include "AVLBalancedSearchTree.h"

namespace PracticeCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:

	public:
		property System::String^ fileName;

		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ fileNameTextBox;
	private: System::Windows::Forms::Label^ authorLabel;
	protected:


	private: System::Windows::Forms::Button^ sendFileNameBtn;
	private: System::Windows::Forms::Button^ clearFileNameBtn;
	private: System::Windows::Forms::Label^ fileNameLabel;
	private: System::Windows::Forms::Label^ studentNameLabel;





	private: System::Windows::Forms::TextBox^ studentNameTextBox;
	private: System::Windows::Forms::Button^ sendStudentNameBtn;
	private: System::Windows::Forms::Button^ clearStudentNameBtn;
	private: System::Windows::Forms::Label^ marksLabel;








	private: System::Windows::Forms::TextBox^ marksTextBox;
	private: System::Windows::Forms::Button^ sendMarksBtn;
	private: System::Windows::Forms::Button^ clearMarksBtn;



	private: System::Windows::Forms::Button^ firstDynamicBtn;
	private: System::Windows::Forms::Button^ secondDynamicBtn;
	private: System::Windows::Forms::Button^ searchTreeBtn;
	private: System::Windows::Forms::Button^ AVLsearchTreeBtn;






	private: System::Windows::Forms::TextBox^ additionalInfoTextBox;
	private: System::Windows::Forms::Label^ bestStudentsLabel;


	private: System::Windows::Forms::TextBox^ bestStudentsTextBox;
	private: System::Windows::Forms::Button^ closeFileBtn;
	private: System::Windows::Forms::Button^ showBestStudentsBtn;





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
			this->fileNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->authorLabel = (gcnew System::Windows::Forms::Label());
			this->sendFileNameBtn = (gcnew System::Windows::Forms::Button());
			this->clearFileNameBtn = (gcnew System::Windows::Forms::Button());
			this->fileNameLabel = (gcnew System::Windows::Forms::Label());
			this->studentNameLabel = (gcnew System::Windows::Forms::Label());
			this->studentNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sendStudentNameBtn = (gcnew System::Windows::Forms::Button());
			this->clearStudentNameBtn = (gcnew System::Windows::Forms::Button());
			this->marksLabel = (gcnew System::Windows::Forms::Label());
			this->marksTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sendMarksBtn = (gcnew System::Windows::Forms::Button());
			this->clearMarksBtn = (gcnew System::Windows::Forms::Button());
			this->firstDynamicBtn = (gcnew System::Windows::Forms::Button());
			this->secondDynamicBtn = (gcnew System::Windows::Forms::Button());
			this->searchTreeBtn = (gcnew System::Windows::Forms::Button());
			this->AVLsearchTreeBtn = (gcnew System::Windows::Forms::Button());
			this->additionalInfoTextBox = (gcnew System::Windows::Forms::TextBox());
			this->bestStudentsLabel = (gcnew System::Windows::Forms::Label());
			this->bestStudentsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->closeFileBtn = (gcnew System::Windows::Forms::Button());
			this->showBestStudentsBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// fileNameTextBox
			// 
			this->fileNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fileNameTextBox->ForeColor = System::Drawing::SystemColors::InfoText;
			this->fileNameTextBox->Location = System::Drawing::Point(169, 38);
			this->fileNameTextBox->Multiline = true;
			this->fileNameTextBox->Name = L"fileNameTextBox";
			this->fileNameTextBox->Size = System::Drawing::Size(150, 30);
			this->fileNameTextBox->TabIndex = 0;
			// 
			// authorLabel
			// 
			this->authorLabel->AutoSize = true;
			this->authorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->authorLabel->Location = System::Drawing::Point(166, 11);
			this->authorLabel->Name = L"authorLabel";
			this->authorLabel->Size = System::Drawing::Size(228, 17);
			this->authorLabel->TabIndex = 1;
			this->authorLabel->Text = L"Бригада 2. 2 курс, 62 группа.";
			// 
			// sendFileNameBtn
			// 
			this->sendFileNameBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sendFileNameBtn->Location = System::Drawing::Point(325, 38);
			this->sendFileNameBtn->Name = L"sendFileNameBtn";
			this->sendFileNameBtn->Size = System::Drawing::Size(80, 30);
			this->sendFileNameBtn->TabIndex = 3;
			this->sendFileNameBtn->Text = L"Отправить";
			this->sendFileNameBtn->UseVisualStyleBackColor = true;
			this->sendFileNameBtn->Click += gcnew System::EventHandler(this, &MainForm::sendFileNameBtn_Click);
			// 
			// clearFileNameBtn
			// 
			this->clearFileNameBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearFileNameBtn->Location = System::Drawing::Point(411, 38);
			this->clearFileNameBtn->Name = L"clearFileNameBtn";
			this->clearFileNameBtn->Size = System::Drawing::Size(80, 30);
			this->clearFileNameBtn->TabIndex = 4;
			this->clearFileNameBtn->Text = L"Очистить";
			this->clearFileNameBtn->UseVisualStyleBackColor = true;
			this->clearFileNameBtn->Click += gcnew System::EventHandler(this, &MainForm::clearFileNameBtn_Click);
			// 
			// fileNameLabel
			// 
			this->fileNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fileNameLabel->Location = System::Drawing::Point(15, 28);
			this->fileNameLabel->Name = L"fileNameLabel";
			this->fileNameLabel->Size = System::Drawing::Size(151, 40);
			this->fileNameLabel->TabIndex = 2;
			this->fileNameLabel->Text = L"Создать/Открыть файл (укажите имя включая расширение .txt):";
			// 
			// studentNameLabel
			// 
			this->studentNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->studentNameLabel->Location = System::Drawing::Point(15, 80);
			this->studentNameLabel->Name = L"studentNameLabel";
			this->studentNameLabel->Size = System::Drawing::Size(151, 30);
			this->studentNameLabel->TabIndex = 5;
			this->studentNameLabel->Text = L"Фамилия Имя:";
			// 
			// studentNameTextBox
			// 
			this->studentNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->studentNameTextBox->ForeColor = System::Drawing::SystemColors::InfoText;
			this->studentNameTextBox->Location = System::Drawing::Point(169, 78);
			this->studentNameTextBox->Multiline = true;
			this->studentNameTextBox->Name = L"studentNameTextBox";
			this->studentNameTextBox->Size = System::Drawing::Size(150, 30);
			this->studentNameTextBox->TabIndex = 6;
			// 
			// sendStudentNameBtn
			// 
			this->sendStudentNameBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sendStudentNameBtn->Location = System::Drawing::Point(325, 78);
			this->sendStudentNameBtn->Name = L"sendStudentNameBtn";
			this->sendStudentNameBtn->Size = System::Drawing::Size(80, 30);
			this->sendStudentNameBtn->TabIndex = 7;
			this->sendStudentNameBtn->Text = L"Отправить";
			this->sendStudentNameBtn->UseVisualStyleBackColor = true;
			this->sendStudentNameBtn->Click += gcnew System::EventHandler(this, &MainForm::sendStudentNameBtn_Click);
			// 
			// clearStudentNameBtn
			// 
			this->clearStudentNameBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->clearStudentNameBtn->Location = System::Drawing::Point(411, 78);
			this->clearStudentNameBtn->Name = L"clearStudentNameBtn";
			this->clearStudentNameBtn->Size = System::Drawing::Size(80, 30);
			this->clearStudentNameBtn->TabIndex = 8;
			this->clearStudentNameBtn->Text = L"Очистить";
			this->clearStudentNameBtn->UseVisualStyleBackColor = true;
			this->clearStudentNameBtn->Click += gcnew System::EventHandler(this, &MainForm::clearStudentNameBtn_Click);
			// 
			// marksLabel
			// 
			this->marksLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->marksLabel->Location = System::Drawing::Point(15, 118);
			this->marksLabel->Name = L"marksLabel";
			this->marksLabel->Size = System::Drawing::Size(151, 40);
			this->marksLabel->TabIndex = 9;
			this->marksLabel->Text = L"Результаты экзаменов: (2 3 4 5 5):";
			// 
			// marksTextBox
			// 
			this->marksTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->marksTextBox->ForeColor = System::Drawing::SystemColors::InfoText;
			this->marksTextBox->Location = System::Drawing::Point(169, 118);
			this->marksTextBox->Multiline = true;
			this->marksTextBox->Name = L"marksTextBox";
			this->marksTextBox->Size = System::Drawing::Size(150, 30);
			this->marksTextBox->TabIndex = 10;
			// 
			// sendMarksBtn
			// 
			this->sendMarksBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sendMarksBtn->Location = System::Drawing::Point(325, 118);
			this->sendMarksBtn->Name = L"sendMarksBtn";
			this->sendMarksBtn->Size = System::Drawing::Size(80, 30);
			this->sendMarksBtn->TabIndex = 11;
			this->sendMarksBtn->Text = L"Отправить";
			this->sendMarksBtn->UseVisualStyleBackColor = true;
			this->sendMarksBtn->Click += gcnew System::EventHandler(this, &MainForm::sendMarksBtn_Click);
			// 
			// clearMarksBtn
			// 
			this->clearMarksBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearMarksBtn->Location = System::Drawing::Point(411, 118);
			this->clearMarksBtn->Name = L"clearMarksBtn";
			this->clearMarksBtn->Size = System::Drawing::Size(80, 30);
			this->clearMarksBtn->TabIndex = 12;
			this->clearMarksBtn->Text = L"Очистить";
			this->clearMarksBtn->UseVisualStyleBackColor = true;
			this->clearMarksBtn->Click += gcnew System::EventHandler(this, &MainForm::clearMarksBtn_Click);
			// 
			// firstDynamicBtn
			// 
			this->firstDynamicBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firstDynamicBtn->Location = System::Drawing::Point(15, 161);
			this->firstDynamicBtn->Name = L"firstDynamicBtn";
			this->firstDynamicBtn->Size = System::Drawing::Size(160, 37);
			this->firstDynamicBtn->TabIndex = 13;
			this->firstDynamicBtn->Text = L"Динамическая цепочка 1";
			this->firstDynamicBtn->UseVisualStyleBackColor = true;
			this->firstDynamicBtn->Click += gcnew System::EventHandler(this, &MainForm::firstDynamicBtn_Click);
			// 
			// secondDynamicBtn
			// 
			this->secondDynamicBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->secondDynamicBtn->Location = System::Drawing::Point(15, 204);
			this->secondDynamicBtn->Name = L"secondDynamicBtn";
			this->secondDynamicBtn->Size = System::Drawing::Size(160, 37);
			this->secondDynamicBtn->TabIndex = 14;
			this->secondDynamicBtn->Text = L"Динамическая цепочка 2";
			this->secondDynamicBtn->UseVisualStyleBackColor = true;
			this->secondDynamicBtn->Click += gcnew System::EventHandler(this, &MainForm::secondDynamicBtn_Click);
			// 
			// searchTreeBtn
			// 
			this->searchTreeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchTreeBtn->Location = System::Drawing::Point(15, 247);
			this->searchTreeBtn->Name = L"searchTreeBtn";
			this->searchTreeBtn->Size = System::Drawing::Size(160, 37);
			this->searchTreeBtn->TabIndex = 15;
			this->searchTreeBtn->Text = L"Дерево поиска";
			this->searchTreeBtn->UseVisualStyleBackColor = true;
			this->searchTreeBtn->Click += gcnew System::EventHandler(this, &MainForm::searchTreeBtn_Click);
			// 
			// AVLsearchTreeBtn
			// 
			this->AVLsearchTreeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AVLsearchTreeBtn->Location = System::Drawing::Point(15, 290);
			this->AVLsearchTreeBtn->Name = L"AVLsearchTreeBtn";
			this->AVLsearchTreeBtn->Size = System::Drawing::Size(160, 37);
			this->AVLsearchTreeBtn->TabIndex = 16;
			this->AVLsearchTreeBtn->Text = L"АВЛ Дерево поиска";
			this->AVLsearchTreeBtn->UseVisualStyleBackColor = true;
			this->AVLsearchTreeBtn->Click += gcnew System::EventHandler(this, &MainForm::AVLsearchTreeBtn_Click);
			// 
			// additionalInfoTextBox
			// 
			this->additionalInfoTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->additionalInfoTextBox->ForeColor = System::Drawing::SystemColors::InfoText;
			this->additionalInfoTextBox->Location = System::Drawing::Point(190, 161);
			this->additionalInfoTextBox->Multiline = true;
			this->additionalInfoTextBox->Name = L"additionalInfoTextBox";
			this->additionalInfoTextBox->Size = System::Drawing::Size(301, 166);
			this->additionalInfoTextBox->TabIndex = 17;
			// 
			// bestStudentsLabel
			// 
			this->bestStudentsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bestStudentsLabel->Location = System::Drawing::Point(4, 347);
			this->bestStudentsLabel->Name = L"bestStudentsLabel";
			this->bestStudentsLabel->Size = System::Drawing::Size(117, 23);
			this->bestStudentsLabel->TabIndex = 18;
			this->bestStudentsLabel->Text = L"Лучшие студенты:";
			// 
			// bestStudentsTextBox
			// 
			this->bestStudentsTextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bestStudentsTextBox->ForeColor = System::Drawing::SystemColors::InfoText;
			this->bestStudentsTextBox->Location = System::Drawing::Point(116, 333);
			this->bestStudentsTextBox->Multiline = true;
			this->bestStudentsTextBox->Name = L"bestStudentsTextBox";
			this->bestStudentsTextBox->Size = System::Drawing::Size(364, 37);
			this->bestStudentsTextBox->TabIndex = 19;
			// 
			// closeFileBtn
			// 
			this->closeFileBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->closeFileBtn->Location = System::Drawing::Point(497, 281);
			this->closeFileBtn->Name = L"closeFileBtn";
			this->closeFileBtn->Size = System::Drawing::Size(69, 46);
			this->closeFileBtn->TabIndex = 20;
			this->closeFileBtn->Text = L"Закрыть Файл";
			this->closeFileBtn->UseVisualStyleBackColor = true;
			this->closeFileBtn->Click += gcnew System::EventHandler(this, &MainForm::closeFileBtn_Click);
			// 
			// showBestStudentsBtn
			// 
			this->showBestStudentsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->showBestStudentsBtn->Location = System::Drawing::Point(486, 333);
			this->showBestStudentsBtn->Name = L"showBestStudentsBtn";
			this->showBestStudentsBtn->Size = System::Drawing::Size(80, 37);
			this->showBestStudentsBtn->TabIndex = 21;
			this->showBestStudentsBtn->Text = L"Показать лучших";
			this->showBestStudentsBtn->UseVisualStyleBackColor = true;
			this->showBestStudentsBtn->Click += gcnew System::EventHandler(this, &MainForm::showBestStudentsBtn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(568, 374);
			this->Controls->Add(this->showBestStudentsBtn);
			this->Controls->Add(this->closeFileBtn);
			this->Controls->Add(this->bestStudentsTextBox);
			this->Controls->Add(this->bestStudentsLabel);
			this->Controls->Add(this->additionalInfoTextBox);
			this->Controls->Add(this->AVLsearchTreeBtn);
			this->Controls->Add(this->searchTreeBtn);
			this->Controls->Add(this->secondDynamicBtn);
			this->Controls->Add(this->firstDynamicBtn);
			this->Controls->Add(this->clearMarksBtn);
			this->Controls->Add(this->sendMarksBtn);
			this->Controls->Add(this->marksTextBox);
			this->Controls->Add(this->marksLabel);
			this->Controls->Add(this->clearStudentNameBtn);
			this->Controls->Add(this->sendStudentNameBtn);
			this->Controls->Add(this->studentNameTextBox);
			this->Controls->Add(this->studentNameLabel);
			this->Controls->Add(this->clearFileNameBtn);
			this->Controls->Add(this->sendFileNameBtn);
			this->Controls->Add(this->fileNameLabel);
			this->Controls->Add(this->authorLabel);
			this->Controls->Add(this->fileNameTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clearFileNameBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->fileNameTextBox->Text = "";
	}
	private: System::Void clearStudentNameBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->studentNameTextBox->Text = "";
	}
	private: System::Void clearMarksBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->marksTextBox->Text = "";
	}
	private: System::Void sendFileNameBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string filename = msclr::interop::marshal_as<std::string>(this->fileNameTextBox->Text);

		fileName = this->fileNameTextBox->Text;

		this->fileNameTextBox->Text = "";
		
		if (std::ifstream(filename))
		{
			//File already exists
		}
		else
		{	
			std::ofstream file(filename);
			//Creating new file...
		}
		
	}

	private: System::Void sendStudentNameBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		std::ofstream file(msclr::interop::marshal_as<std::string>(fileName), std::ios_base::app);
		file << msclr::interop::marshal_as<std::string>(this->studentNameTextBox->Text) << " ";

		this->studentNameTextBox->Text = "";

	}
	private: System::Void sendMarksBtn_Click(System::Object^ sender, System::EventArgs^ e) {


		std::ofstream file(msclr::interop::marshal_as<std::string>(fileName), std::ios_base::app);
		file << msclr::interop::marshal_as<std::string>(this->marksTextBox->Text) << " ";
		file << std::endl;

		this->marksTextBox->Text = "";
	}
	private: System::Void firstDynamicBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		FirstDynamicForm^ firstDynamicForm = gcnew FirstDynamicForm();
		firstDynamicForm->getFileName(fileName);
		firstDynamicForm->Show();
	}
	private: System::Void secondDynamicBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		SecondDynamicForm^ secondDynamicForm = gcnew SecondDynamicForm();
		secondDynamicForm->getFileName(fileName);
		secondDynamicForm->Show();
	}
	private: System::Void searchTreeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchTreeForm^ searchTreeForm = gcnew SearchTreeForm();
		searchTreeForm->getFileName(fileName);
		searchTreeForm->Show();
	}
	private: System::Void AVLsearchTreeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		AVLBalancedSearchTree^ AVLsearchTreeForm = gcnew AVLBalancedSearchTree();
		AVLsearchTreeForm->getFileName(fileName);
		AVLsearchTreeForm->Show();
	}
	private: System::Void closeFileBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fileName != nullptr)
		{
			std::fstream file(msclr::interop::marshal_as<std::string>(fileName));
			file.close();
		}

		this->sendFileNameBtn->Enabled = false;
		this->sendStudentNameBtn->Enabled = false;
		this->sendMarksBtn->Enabled = false;
		this->closeFileBtn->Enabled = false;

		this->clearFileNameBtn->Enabled = false;
		this->clearStudentNameBtn->Enabled = false;
		this->clearMarksBtn->Enabled = false;
	}
	private: System::Void showBestStudentsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fileName != nullptr)
		{
			std::ifstream file(msclr::interop::marshal_as<std::string>(fileName));

			std::vector<Student> studentVector;

			if (isMyFileEmpty(msclr::interop::marshal_as<std::string>(fileName)))
			{
				std::cout << "File is empty..." << std::endl;
				return;
			}
			std::string line;
			while (std::getline(file, line)) {
				std::istringstream iss(line);

				Student studentInfo;


				iss >> studentInfo.firstName >> studentInfo.lastName;
				double avgGrade = 0; int gradesCount = 0;
				for (int j = 0; j < 5; j++) {
					int grade;
					iss >> grade;
					++gradesCount;
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


				studentVector.push_back(studentInfo);

				iss.clear();  // Reset the stream state
				iss.seekg(0, std::ios::beg);  // Move stream position to the beginning of the line
			}
			int maxFives = 0;
			std::vector<Student> topStudents;
			// Find the maximum number of '5' grades and store the top students
			for (const auto& student : studentVector) {
				int numFives = 0;
				for (const auto& grade : student.grades) {
					if (grade == 5) {
						numFives++;
					}
				}
				if (numFives > maxFives) {
					maxFives = numFives;
					topStudents.clear();
					topStudents.push_back(student);
				}
				else if (numFives == maxFives) {
					topStudents.push_back(student);
				}
			}

			// Print student info for the top students
			std::string tempStr;
			for (const auto& student : topStudents) {
				tempStr += student.firstName + " " + student.lastName;
				for (const auto& grade : student.grades) {
					tempStr += " " + std::to_string(grade);
				}
				tempStr += "; ";
			}

			String^ bestStudentsString = gcnew String(tempStr.c_str());
			this->bestStudentsTextBox->Text = bestStudentsString;
		}

	}
};
}
