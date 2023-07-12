#pragma once
#include "Tree.h"
#include "msclr\marshal_cppstd.h"
namespace PracticeCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SearchTreeForm
	/// </summary>
	public ref class AVLBalancedSearchTree : public System::Windows::Forms::Form
	{
	private:
		property String^ fileName;
	public:
		void getFileName(String^ _fileName)
		{
			fileName = _fileName;
		}

		AVLBalancedSearchTree(void)
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
		~AVLBalancedSearchTree()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ searchTreeLabel;
	protected:
	private: System::Windows::Forms::TextBox^ searchTreeRootTextBox;
	private: System::Windows::Forms::TextBox^ searchTreeLTextBox;
	private: System::Windows::Forms::TextBox^ searchTreeRTextBox;
	private: System::Windows::Forms::TextBox^ searchTreeLRTextBox;
	private: System::Windows::Forms::TextBox^ searchTreeLLTextBox;
	private: System::Windows::Forms::TextBox^ searchTreeRLTextBox;
	private: System::Windows::Forms::TextBox^ searchTreeRRTextBox;
	private: System::Windows::Forms::Button^ showAVLSearchTreeBtn;

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
			this->searchTreeLabel = (gcnew System::Windows::Forms::Label());
			this->searchTreeRootTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchTreeLTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchTreeRTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchTreeLRTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchTreeLLTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchTreeRLTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchTreeRRTextBox = (gcnew System::Windows::Forms::TextBox());
			this->showAVLSearchTreeBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// searchTreeLabel
			// 
			this->searchTreeLabel->AutoSize = true;
			this->searchTreeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchTreeLabel->Location = System::Drawing::Point(21, 9);
			this->searchTreeLabel->Name = L"searchTreeLabel";
			this->searchTreeLabel->Size = System::Drawing::Size(505, 29);
			this->searchTreeLabel->TabIndex = 0;
			this->searchTreeLabel->Text = L"АВЛ-Сбалансированное Дерево поиска";
			// 
			// searchTreeRootTextBox
			// 
			this->searchTreeRootTextBox->Location = System::Drawing::Point(194, 60);
			this->searchTreeRootTextBox->Multiline = true;
			this->searchTreeRootTextBox->Name = L"searchTreeRootTextBox";
			this->searchTreeRootTextBox->Size = System::Drawing::Size(153, 39);
			this->searchTreeRootTextBox->TabIndex = 1;
			this->searchTreeRootTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// searchTreeLTextBox
			// 
			this->searchTreeLTextBox->Location = System::Drawing::Point(158, 117);
			this->searchTreeLTextBox->Multiline = true;
			this->searchTreeLTextBox->Name = L"searchTreeLTextBox";
			this->searchTreeLTextBox->Size = System::Drawing::Size(106, 39);
			this->searchTreeLTextBox->TabIndex = 2;
			this->searchTreeLTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// searchTreeRTextBox
			// 
			this->searchTreeRTextBox->Location = System::Drawing::Point(278, 117);
			this->searchTreeRTextBox->Multiline = true;
			this->searchTreeRTextBox->Name = L"searchTreeRTextBox";
			this->searchTreeRTextBox->Size = System::Drawing::Size(106, 39);
			this->searchTreeRTextBox->TabIndex = 8;
			this->searchTreeRTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// searchTreeLRTextBox
			// 
			this->searchTreeLRTextBox->Location = System::Drawing::Point(194, 179);
			this->searchTreeLRTextBox->Multiline = true;
			this->searchTreeLRTextBox->Name = L"searchTreeLRTextBox";
			this->searchTreeLRTextBox->Size = System::Drawing::Size(70, 39);
			this->searchTreeLRTextBox->TabIndex = 9;
			this->searchTreeLRTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// searchTreeLLTextBox
			// 
			this->searchTreeLLTextBox->Location = System::Drawing::Point(118, 179);
			this->searchTreeLLTextBox->Multiline = true;
			this->searchTreeLLTextBox->Name = L"searchTreeLLTextBox";
			this->searchTreeLLTextBox->Size = System::Drawing::Size(70, 39);
			this->searchTreeLLTextBox->TabIndex = 10;
			this->searchTreeLLTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// searchTreeRLTextBox
			// 
			this->searchTreeRLTextBox->Location = System::Drawing::Point(278, 179);
			this->searchTreeRLTextBox->Multiline = true;
			this->searchTreeRLTextBox->Name = L"searchTreeRLTextBox";
			this->searchTreeRLTextBox->Size = System::Drawing::Size(70, 39);
			this->searchTreeRLTextBox->TabIndex = 11;
			this->searchTreeRLTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// searchTreeRRTextBox
			// 
			this->searchTreeRRTextBox->Location = System::Drawing::Point(354, 179);
			this->searchTreeRRTextBox->Multiline = true;
			this->searchTreeRRTextBox->Name = L"searchTreeRRTextBox";
			this->searchTreeRRTextBox->Size = System::Drawing::Size(70, 39);
			this->searchTreeRRTextBox->TabIndex = 12;
			this->searchTreeRRTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// showSearchTreeBtn
			// 
			this->showAVLSearchTreeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->showAVLSearchTreeBtn->Location = System::Drawing::Point(454, 323);
			this->showAVLSearchTreeBtn->Name = L"showSearchTreeBtn";
			this->showAVLSearchTreeBtn->Size = System::Drawing::Size(111, 49);
			this->showAVLSearchTreeBtn->TabIndex = 13;
			this->showAVLSearchTreeBtn->Text = L"Показать дерево";
			this->showAVLSearchTreeBtn->UseVisualStyleBackColor = true;
			this->showAVLSearchTreeBtn->Click += gcnew System::EventHandler(this, &AVLBalancedSearchTree::showAVLSearchTreeBtn_Click);
			// 
			// AVLBalancedSearchTree
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 374);
			this->Controls->Add(this->showAVLSearchTreeBtn);
			this->Controls->Add(this->searchTreeRRTextBox);
			this->Controls->Add(this->searchTreeRLTextBox);
			this->Controls->Add(this->searchTreeLLTextBox);
			this->Controls->Add(this->searchTreeLRTextBox);
			this->Controls->Add(this->searchTreeRTextBox);
			this->Controls->Add(this->searchTreeLTextBox);
			this->Controls->Add(this->searchTreeRootTextBox);
			this->Controls->Add(this->searchTreeLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AVLBalancedSearchTree";
			this->Text = L"AVLSearchTreeForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void showAVLSearchTreeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fileName != nullptr)
		{
			std::ifstream file(msclr::interop::marshal_as<std::string>(fileName));

			if (isMyFileEmpty(msclr::interop::marshal_as<std::string>(fileName)))
			{
				std::cout << "File is empty..." << std::endl;
				return;
			}

			std::string line;

			nodeBST* root = nullptr;

			while (std::getline(file, line)) {
				std::istringstream iss(line);

				std::string firstName;
				std::string lastName;
				float sumGrades = 0.0f;
				float grade;
				int numGrades = 0;

				if (iss >> firstName >> lastName) {
					while (iss >> grade) {
						sumGrades += grade;
						++numGrades;
					}

					float averageGrade = (numGrades > 0) ? (sumGrades / numGrades) : 0.0f;
					root = insertAVL(root, firstName, lastName, averageGrade);
				}
			}

			file.close();

			std::cout << "Search Tree (1-3 levels):\n";
			//printLevels(root, 3);
			int numLevels = 3;
			if (root == nullptr || numLevels <= 0) {
				return;
			}

			std::queue<nodeBST*> q;
			q.push(root);

			int currentLevel = 1;
			int nodesInCurrentLevel = 1;
			int nodesInNextLevel = 0;
			int nodeNumber = 0;

			std::pair<int, int> pathOfTheNode;
			std::queue<std::pair<int, int>> pathQueue; // 1 - turned left, 2 - turned right
			while (!q.empty() && currentLevel <= numLevels) {
				nodeBST* node = q.front();
				q.pop();
				++nodeNumber;

				// Print the node
				//std::cout << "Name: " << node->data.firstName << " " << node->data.lastName << ", Average Grade: " << node->data.averageGrade << std::endl;
				if (nodeNumber == 1)
				{
					String^ studentString = gcnew String((node->data.firstName + " " + node->data.lastName + " " + std::to_string(node->data.averageGrade)).c_str());
					this->searchTreeRootTextBox->Text = studentString;
				}
				if (!pathQueue.empty())
				{
					pathOfTheNode = pathQueue.front();
					if (pathOfTheNode.first == 1 && pathOfTheNode.second == 0)
					{
						String^ studentString = gcnew String((node->data.firstName + " " + node->data.lastName + " " + std::to_string(node->data.averageGrade)).c_str());
						this->searchTreeLTextBox->Text = studentString;
					}
					if (pathOfTheNode.first == 2 && pathOfTheNode.second == 0)
					{
						String^ studentString = gcnew String((node->data.firstName + " " + node->data.lastName + " " + std::to_string(node->data.averageGrade)).c_str());
						this->searchTreeRTextBox->Text = studentString;
					}
					if (pathOfTheNode.first == 1 && pathOfTheNode.second == 1)
					{
						String^ studentString = gcnew String((node->data.firstName + " " + node->data.lastName + " " + std::to_string(node->data.averageGrade)).c_str());
						this->searchTreeLLTextBox->Text = studentString;
						pathQueue.pop();
					}
					if (pathOfTheNode.first == 1 && pathOfTheNode.second == 2)
					{
						String^ studentString = gcnew String((node->data.firstName + " " + node->data.lastName + " " + std::to_string(node->data.averageGrade)).c_str());
						this->searchTreeLRTextBox->Text = studentString;
						pathQueue.pop();
					}
					if (pathOfTheNode.first == 2 && pathOfTheNode.second == 1)
					{
						String^ studentString = gcnew String((node->data.firstName + " " + node->data.lastName + " " + std::to_string(node->data.averageGrade)).c_str());
						this->searchTreeRLTextBox->Text = studentString;
						pathQueue.pop();
					}
					if (pathOfTheNode.first == 2 && pathOfTheNode.second == 2)
					{
						String^ studentString = gcnew String((node->data.firstName + " " + node->data.lastName + " " + std::to_string(node->data.averageGrade)).c_str());
						this->searchTreeRRTextBox->Text = studentString;
						pathQueue.pop();
					}
				}
				// Enqueue left and right children if they exist
				// Enqueue left and right children if they exist
				if (currentLevel == 1)
				{
					if (node->left)
					{
						pathQueue.push(std::make_pair(1, 0));
						q.push(node->left);
						++nodesInNextLevel;
					}
					if (node->right)
					{
						pathQueue.push(std::make_pair(2, 0));
						q.push(node->right);
						++nodesInNextLevel;
					}
				}
				else if (currentLevel == 2)
				{
					if (!pathQueue.empty())
					{
						std::pair<int, int> parentPath = pathQueue.front();

						if (parentPath.first == 1) // Left child of its parent
						{
							if (node->left && node->right)
							{
								std::pair<int, int> rememberBackTrackPair = parentPath;
								pathQueue.pop();
								pathQueue.push(std::make_pair(1, 1));
								q.push(node->left);
								++nodesInCurrentLevel;

								pathQueue.push(std::make_pair(1, 2));
								q.push(node->right);
								++nodesInCurrentLevel;

								//pathQueue.push(rememberBackTrackPair);

							}
							else if (node->left && !node->right)
							{
								pathQueue.pop();

								pathQueue.push(std::make_pair(1, 1));
								q.push(node->left);
								++nodesInCurrentLevel;
							}
							else if (!node->left && node->right)
							{
								pathQueue.pop();

								pathQueue.push(std::make_pair(1, 2));
								q.push(node->right);
								++nodesInCurrentLevel;
							}
						}
						else if (parentPath.first == 2) // Right child of its parent
						{
							if (node->left && node->right)
							{
								std::pair<int, int> rememberBackTrackPair = parentPath;
								pathQueue.pop();

								pathQueue.push(std::make_pair(2, 1));
								q.push(node->left);
								++nodesInCurrentLevel;

								pathQueue.push(std::make_pair(2, 2));
								q.push(node->right);
								++nodesInCurrentLevel;

								//pathQueue.push(rememberBackTrackPair);
							}
							else if (node->left && !node->right)
							{
								pathQueue.pop();

								pathQueue.push(std::make_pair(2, 1));
								q.push(node->left);
								++nodesInCurrentLevel;
							}
							else if (!node->left && node->right)
							{
								pathQueue.pop();

								pathQueue.push(std::make_pair(2, 2));
								q.push(node->right);
								++nodesInCurrentLevel;
							}
						}
					}
				}
				// Move to the next level if all nodes in the current level are processed
				--nodesInCurrentLevel;
				if (nodesInCurrentLevel == 0) {
					++currentLevel;
					nodesInCurrentLevel = nodesInNextLevel;
					nodesInNextLevel = 0;

					// Break the loop if we have printed the desired number of levels
					if (currentLevel > numLevels) {
						break;
					}
				}
			}
			std::cout << "==========================\n";

		}
	}
	};
}
