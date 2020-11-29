#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
namespace pup {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		void bedelPaga(String^ a) {
			if (a == "P") {
				MyForm1^ ob = gcnew MyForm1;
				ob->Show();
			}
			else if (a == "client") {
				MyForm2^ paga = gcnew MyForm2;
				
				paga->Show();
			}
			else if (a == "commande") {
				MyForm3^ paga = gcnew MyForm3;
				
				paga->Show();
			}
			else if (a == "stock") {
				MyForm4^ paga = gcnew MyForm4;
				
				paga->Show();
			}
			else if (a == "stat") {
				MyForm5^ paga = gcnew MyForm5;
				
				paga->Show();
			}


		}
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion du personel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 265);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Gestion du client";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(260, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion des commandes";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(376, 265);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 44);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestion du stock";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(507, 265);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(82, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(610, 342);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		bedelPaga("P");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		bedelPaga("client");
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	bedelPaga("commande");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	bedelPaga("stock");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	bedelPaga("stat");
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
