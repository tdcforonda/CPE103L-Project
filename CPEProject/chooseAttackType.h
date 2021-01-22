#pragma once
#include <iostream>
#include "characterData.h"
#include <chrono>
#include <thread>
#include <ctime>

namespace CPEProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for chooseAttackType
	/// </summary>
	public ref class chooseAttackType : public System::Windows::Forms::Form
	{
	public:
		characterData^ cd = gcnew characterData();
	public:
		int h1;
		int h2;
		int m1;
		int m2;

	private: System::Windows::Forms::Button^ punchButton;
	private: System::Windows::Forms::Button^ whackButton;
	private: System::Windows::Forms::Button^ sliceButton;
	private: System::Windows::Forms::Button^ swordsDance;
	private: System::Windows::Forms::Button^ Maelstorm;
	private: System::Windows::Forms::Button^ doubleSlash;
	private: System::Windows::Forms::Button^ returnButton;
	private: System::Windows::Forms::Label^ statusLabel;
	private: System::Windows::Forms::Label^ aiLabel;
	private: System::Windows::Forms::Button^ button1;


	public:

	public:
		characterData^ pn = gcnew characterData();
	public:
		chooseAttackType(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~chooseAttackType()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ player1Pic;
	private: System::Windows::Forms::PictureBox^ player2Pic;
	protected:

	protected:

	private: System::Windows::Forms::Label^ turnLabel;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ physicalButton;
	private: System::Windows::Forms::Button^ magicButton;
	private: System::Windows::Forms::Button^ blockButton;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ pHealth1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ pMana1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ pHealth2;
	private: System::Windows::Forms::Label^ pMana2;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ cType1;
	private: System::Windows::Forms::Label^ cType2;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(chooseAttackType::typeid));
			this->player1Pic = (gcnew System::Windows::Forms::PictureBox());
			this->player2Pic = (gcnew System::Windows::Forms::PictureBox());
			this->turnLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->physicalButton = (gcnew System::Windows::Forms::Button());
			this->magicButton = (gcnew System::Windows::Forms::Button());
			this->blockButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pHealth1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pMana1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pHealth2 = (gcnew System::Windows::Forms::Label());
			this->pMana2 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->cType1 = (gcnew System::Windows::Forms::Label());
			this->cType2 = (gcnew System::Windows::Forms::Label());
			this->punchButton = (gcnew System::Windows::Forms::Button());
			this->whackButton = (gcnew System::Windows::Forms::Button());
			this->sliceButton = (gcnew System::Windows::Forms::Button());
			this->swordsDance = (gcnew System::Windows::Forms::Button());
			this->Maelstorm = (gcnew System::Windows::Forms::Button());
			this->doubleSlash = (gcnew System::Windows::Forms::Button());
			this->returnButton = (gcnew System::Windows::Forms::Button());
			this->statusLabel = (gcnew System::Windows::Forms::Label());
			this->aiLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1Pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2Pic))->BeginInit();
			this->SuspendLayout();
			// 
			// player1Pic
			// 
			this->player1Pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player1Pic.Image")));
			this->player1Pic->Location = System::Drawing::Point(44, 168);
			this->player1Pic->Name = L"player1Pic";
			this->player1Pic->Size = System::Drawing::Size(236, 282);
			this->player1Pic->TabIndex = 0;
			this->player1Pic->TabStop = false;
			this->player1Pic->Click += gcnew System::EventHandler(this, &chooseAttackType::player1Pic_Click);
			// 
			// player2Pic
			// 
			this->player2Pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"player2Pic.Image")));
			this->player2Pic->Location = System::Drawing::Point(824, 168);
			this->player2Pic->Name = L"player2Pic";
			this->player2Pic->Size = System::Drawing::Size(187, 282);
			this->player2Pic->TabIndex = 1;
			this->player2Pic->TabStop = false;
			this->player2Pic->Click += gcnew System::EventHandler(this, &chooseAttackType::player2Pic_Click);
			// 
			// turnLabel
			// 
			this->turnLabel->AutoSize = true;
			this->turnLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turnLabel->Location = System::Drawing::Point(396, 19);
			this->turnLabel->Name = L"turnLabel";
			this->turnLabel->Size = System::Drawing::Size(95, 40);
			this->turnLabel->TabIndex = 2;
			this->turnLabel->Text = L"Turn";
			this->turnLabel->Click += gcnew System::EventHandler(this, &chooseAttackType::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(159, 453);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Player";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(873, 453);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Computer";
			// 
			// physicalButton
			// 
			this->physicalButton->Location = System::Drawing::Point(226, 476);
			this->physicalButton->Name = L"physicalButton";
			this->physicalButton->Size = System::Drawing::Size(170, 48);
			this->physicalButton->TabIndex = 5;
			this->physicalButton->Text = L"Physical Attack";
			this->physicalButton->UseVisualStyleBackColor = true;
			this->physicalButton->Click += gcnew System::EventHandler(this, &chooseAttackType::button1_Click);
			// 
			// magicButton
			// 
			this->magicButton->Location = System::Drawing::Point(458, 476);
			this->magicButton->Name = L"magicButton";
			this->magicButton->Size = System::Drawing::Size(170, 48);
			this->magicButton->TabIndex = 6;
			this->magicButton->Text = L"Magic Skill";
			this->magicButton->UseVisualStyleBackColor = true;
			this->magicButton->Click += gcnew System::EventHandler(this, &chooseAttackType::button2_Click);
			// 
			// blockButton
			// 
			this->blockButton->Location = System::Drawing::Point(688, 476);
			this->blockButton->Name = L"blockButton";
			this->blockButton->Size = System::Drawing::Size(170, 48);
			this->blockButton->TabIndex = 7;
			this->blockButton->Text = L"Block";
			this->blockButton->UseVisualStyleBackColor = true;
			this->blockButton->Click += gcnew System::EventHandler(this, &chooseAttackType::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Health:";
			// 
			// pHealth1
			// 
			this->pHealth1->AutoSize = true;
			this->pHealth1->Location = System::Drawing::Point(107, 112);
			this->pHealth1->Name = L"pHealth1";
			this->pHealth1->Size = System::Drawing::Size(0, 20);
			this->pHealth1->TabIndex = 9;
			this->pHealth1->Click += gcnew System::EventHandler(this, &chooseAttackType::pHealth1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(40, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Mana:";
			this->label5->Click += gcnew System::EventHandler(this, &chooseAttackType::label5_Click);
			// 
			// pMana1
			// 
			this->pMana1->AutoSize = true;
			this->pMana1->Location = System::Drawing::Point(107, 145);
			this->pMana1->Name = L"pMana1";
			this->pMana1->Size = System::Drawing::Size(0, 20);
			this->pMana1->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(667, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Health:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(667, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Mana:";
			// 
			// pHealth2
			// 
			this->pHealth2->AutoSize = true;
			this->pHealth2->Location = System::Drawing::Point(754, 112);
			this->pHealth2->Name = L"pHealth2";
			this->pHealth2->Size = System::Drawing::Size(0, 20);
			this->pHealth2->TabIndex = 14;
			// 
			// pMana2
			// 
			this->pMana2->AutoSize = true;
			this->pMana2->Location = System::Drawing::Point(754, 145);
			this->pMana2->Name = L"pMana2";
			this->pMana2->Size = System::Drawing::Size(0, 20);
			this->pMana2->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(40, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 20);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Type:";
			this->label11->Click += gcnew System::EventHandler(this, &chooseAttackType::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(667, 79);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(47, 20);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Type:";
			// 
			// cType1
			// 
			this->cType1->AutoSize = true;
			this->cType1->Location = System::Drawing::Point(107, 79);
			this->cType1->Name = L"cType1";
			this->cType1->Size = System::Drawing::Size(0, 20);
			this->cType1->TabIndex = 18;
			// 
			// cType2
			// 
			this->cType2->AutoSize = true;
			this->cType2->Location = System::Drawing::Point(754, 79);
			this->cType2->Name = L"cType2";
			this->cType2->Size = System::Drawing::Size(0, 20);
			this->cType2->TabIndex = 19;
			// 
			// punchButton
			// 
			this->punchButton->Location = System::Drawing::Point(226, 545);
			this->punchButton->Name = L"punchButton";
			this->punchButton->Size = System::Drawing::Size(170, 48);
			this->punchButton->TabIndex = 20;
			this->punchButton->Text = L"Punch";
			this->punchButton->UseVisualStyleBackColor = true;
			this->punchButton->Click += gcnew System::EventHandler(this, &chooseAttackType::punchButton_Click);
			// 
			// whackButton
			// 
			this->whackButton->Location = System::Drawing::Point(458, 545);
			this->whackButton->Name = L"whackButton";
			this->whackButton->Size = System::Drawing::Size(170, 48);
			this->whackButton->TabIndex = 21;
			this->whackButton->Text = L"Whack";
			this->whackButton->UseVisualStyleBackColor = true;
			this->whackButton->Click += gcnew System::EventHandler(this, &chooseAttackType::whackButton_Click);
			// 
			// sliceButton
			// 
			this->sliceButton->Location = System::Drawing::Point(688, 545);
			this->sliceButton->Name = L"sliceButton";
			this->sliceButton->Size = System::Drawing::Size(170, 48);
			this->sliceButton->TabIndex = 22;
			this->sliceButton->Text = L"Slice";
			this->sliceButton->UseVisualStyleBackColor = true;
			this->sliceButton->Click += gcnew System::EventHandler(this, &chooseAttackType::sliceButton_Click);
			// 
			// swordsDance
			// 
			this->swordsDance->Location = System::Drawing::Point(226, 625);
			this->swordsDance->Name = L"swordsDance";
			this->swordsDance->Size = System::Drawing::Size(170, 48);
			this->swordsDance->TabIndex = 23;
			this->swordsDance->Text = L"Sword\'s Dance";
			this->swordsDance->UseVisualStyleBackColor = true;
			this->swordsDance->Click += gcnew System::EventHandler(this, &chooseAttackType::swordsDance_Click);
			// 
			// Maelstorm
			// 
			this->Maelstorm->Location = System::Drawing::Point(458, 625);
			this->Maelstorm->Name = L"Maelstorm";
			this->Maelstorm->Size = System::Drawing::Size(170, 48);
			this->Maelstorm->TabIndex = 24;
			this->Maelstorm->Text = L"Maelstorm";
			this->Maelstorm->UseVisualStyleBackColor = true;
			this->Maelstorm->Click += gcnew System::EventHandler(this, &chooseAttackType::Maelstorm_Click);
			// 
			// doubleSlash
			// 
			this->doubleSlash->Location = System::Drawing::Point(688, 625);
			this->doubleSlash->Name = L"doubleSlash";
			this->doubleSlash->Size = System::Drawing::Size(170, 48);
			this->doubleSlash->TabIndex = 25;
			this->doubleSlash->Text = L"Double Slash";
			this->doubleSlash->UseVisualStyleBackColor = true;
			this->doubleSlash->Click += gcnew System::EventHandler(this, &chooseAttackType::doubleSlash_Click);
			// 
			// returnButton
			// 
			this->returnButton->Location = System::Drawing::Point(877, 545);
			this->returnButton->Name = L"returnButton";
			this->returnButton->Size = System::Drawing::Size(170, 48);
			this->returnButton->TabIndex = 26;
			this->returnButton->Text = L"Return";
			this->returnButton->UseVisualStyleBackColor = true;
			this->returnButton->Click += gcnew System::EventHandler(this, &chooseAttackType::returnButton_Click);
			// 
			// statusLabel
			// 
			this->statusLabel->AutoSize = true;
			this->statusLabel->Location = System::Drawing::Point(463, 279);
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(51, 20);
			this->statusLabel->TabIndex = 27;
			this->statusLabel->Text = L"label4";
			// 
			// aiLabel
			// 
			this->aiLabel->AutoSize = true;
			this->aiLabel->Location = System::Drawing::Point(463, 236);
			this->aiLabel->Name = L"aiLabel";
			this->aiLabel->Size = System::Drawing::Size(0, 20);
			this->aiLabel->TabIndex = 28;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::DarkRed;
			this->button1->Location = System::Drawing::Point(877, 625);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 48);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Quit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chooseAttackType::button1_Click_2);
			// 
			// chooseAttackType
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1182, 760);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->aiLabel);
			this->Controls->Add(this->statusLabel);
			this->Controls->Add(this->returnButton);
			this->Controls->Add(this->doubleSlash);
			this->Controls->Add(this->Maelstorm);
			this->Controls->Add(this->swordsDance);
			this->Controls->Add(this->sliceButton);
			this->Controls->Add(this->whackButton);
			this->Controls->Add(this->punchButton);
			this->Controls->Add(this->cType2);
			this->Controls->Add(this->cType1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pMana2);
			this->Controls->Add(this->pHealth2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pMana1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pHealth1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->blockButton);
			this->Controls->Add(this->magicButton);
			this->Controls->Add(this->physicalButton);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->turnLabel);
			this->Controls->Add(this->player2Pic);
			this->Controls->Add(this->player1Pic);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"chooseAttackType";
			this->Text = L"chooseAttackType";
			this->Load += gcnew System::EventHandler(this, &chooseAttackType::chooseAttackType_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player1Pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player2Pic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) { 
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*physicalButton->Text = "Punch";
		magicButton->Text = "Whack";
		blockButton->Text = "Slice";*/

		
		returnButton->Enabled = true;
		punchButton->Enabled = true;
		whackButton->Enabled = true;
		sliceButton->Enabled = true;
		physicalButton->Enabled = false;
		magicButton->Enabled = false;
		blockButton->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		 
		 
		aiAttack();
		//MessageBox::Show("You blocked", "Blocked Attack", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		time_t(5);
		int random = rand() % 3 + 1;

		if (random == 1)
		{
			statusLabel->Text = "Your block is very effective";
			h1 = h1 + 10;
		}
		else if (random == 2)
		{
			statusLabel->Text = "You blocked the attack";
			h1 = h1 + 7;
		}
		else
		{
			statusLabel->Text = "Your block wasn't very effective";
			h1 = h1 + 3;
		}
		aiAttack();
		victory();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		
		returnButton->Enabled = true;
		swordsDance->Enabled = true;
		Maelstorm->Enabled = true;
		doubleSlash->Enabled = true;
		physicalButton->Enabled = false;
		magicButton->Enabled = false;
		blockButton->Enabled = false;


	}
	private: System::Void chooseAttackType_Load(System::Object^ sender, System::EventArgs^ e) {

		returnButton->Enabled = false;
		punchButton->Enabled = false;
		whackButton->Enabled = false;
		sliceButton->Enabled = false;
		swordsDance->Enabled = false;
		Maelstorm->Enabled = false;
		doubleSlash->Enabled = false;

		cType1->Text = cd->getcharacterClass1();
		cType2->Text = cd->getCharacterClass2();
		turnLabel->Text = pn->getplayerNumber();

		
		String^ type1 = cType1->Text;
		String^ type2 = cType2->Text;


		//Player 1 stats
		if (type1 == "Swordsman")
		{
			h1 = 150;
			m1 = 150;

			pHealth1->Text = System::Convert::ToString(h1);
			pMana1->Text = System::Convert::ToString(m1);

		}
		else if (type1 == "Mage")
		{
			h1 = 50;
			m1 = 250;

			pHealth1->Text = System::Convert::ToString(h1);
			pMana1->Text = System::Convert::ToString(m1);

			punchButton-> Text = "Kick";
			whackButton->Text = "Wand Bash";
			sliceButton->Text = "Strike";
			swordsDance->Text = "Fireball";
			Maelstorm->Text = "Earth Shard";
			doubleSlash->Text = "Gust";
			
		}
		else if (type1 == "Palladin")
		{
			h1 = 250;
			m1 = 50;

			pHealth1->Text = System::Convert::ToString(h1);
			pMana1->Text = System::Convert::ToString(m1);

			punchButton->Text = "Slash";
			whackButton->Text = "Sword Thrush";
			sliceButton->Text = "Shield Bash";
			swordsDance->Text = "Binding Light";
			Maelstorm->Text = "Hammer of Justice";
			doubleSlash->Text = "Smite";
		}
		else if (type1 == "Marksman")
		{
			h1 = 225;
			m1 = 75;

			pHealth1->Text = System::Convert::ToString(h1);
			pMana1->Text = System::Convert::ToString(m1);

			punchButton->Text = "Arrow Shoot";
			whackButton->Text = "Quickshot";
			sliceButton->Text = "Volley";
			swordsDance->Text = "Split Shot";
			Maelstorm->Text = "Piercing Arrow";
			doubleSlash->Text = "Injection Shot";
		}
		else if (type1 == "Rogue")
		{
			h1 = 200;
			m1 = 100;

			pHealth1->Text = System::Convert::ToString(h1);
			pMana1->Text = System::Convert::ToString(m1);

			punchButton->Text = "Lounge";
			whackButton->Text = "Deceit";
			sliceButton->Text = "Slice";
			swordsDance->Text = "Toxin Muck";
			Maelstorm->Text = "Blade Fury";
			doubleSlash->Text = "Sludge Spit";
		}

		//Player 2 stats
		if (type2 == "Swordsman")
		{
			h2 = 150;
			m2 = 150;

			pHealth2->Text = System::Convert::ToString(h2);
			pMana2->Text = System::Convert::ToString(m2);
		}
		else if (type2 == "Mage")
		{
			h2 = 50;
			m2 = 250;

			pHealth2->Text = System::Convert::ToString(h2);
			pMana2->Text = System::Convert::ToString(m2);
		}
		else if (type2 == "Palladin")
		{
			h2 = 250;
			m2 = 50;

			pHealth2->Text = System::Convert::ToString(h2);
			pMana2->Text = System::Convert::ToString(m2);
		}
		else if (type2 == "Marksman")
		{
			h2 = 225;
			m2 = 75;

			pHealth2->Text = System::Convert::ToString(h2);
			pMana2->Text = System::Convert::ToString(m2);
		}
		else if (type2 == "Rogue")
		{
			h2 = 200;
			m2 = 100;

			pHealth2->Text = System::Convert::ToString(h2);
			pMana2->Text = System::Convert::ToString(m2);
		}
		
		String^ trnlbl = turnLabel->Text;
		if (trnlbl == "Computer's Turn")

		{
			 
			 
			aiAttack();
		}

		if (trnlbl == "Player's Turn")
			statusLabel->Text = "Choose an attack";
		
	}

	
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pHealth1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void player1Pic_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void player2Pic_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void returnButton_Click(System::Object^ sender, System::EventArgs^ e) {
	physicalButton->Enabled = true;
	magicButton->Enabled = true;
	blockButton->Enabled = true;
	punchButton->Enabled = false;
	whackButton->Enabled = false;
	sliceButton->Enabled = false;
	swordsDance->Enabled = false;
	Maelstorm->Enabled = false;
	doubleSlash->Enabled = false;
}
private: System::Void punchButton_Click(System::Object^ sender, System::EventArgs^ e) {

	h2 = h2 - 10;

	pHealth2->Text = System::Convert::ToString(h2);
	pMana2->Text = System::Convert::ToString(m2);

	physicalButton->Enabled = true;
	magicButton->Enabled = true;
	blockButton->Enabled = true;
	punchButton->Enabled = false;
	whackButton->Enabled = false;
	sliceButton->Enabled = false;
	swordsDance->Enabled = false;
	Maelstorm->Enabled = false;
	doubleSlash->Enabled = false;
	if (h2 > 0)
	{
		 
		 
		aiAttack();
		victory();
	}
	turnLabel->Text = "Computer's Turn";
}
private: System::Void whackButton_Click(System::Object^ sender, System::EventArgs^ e) {

	h2 = h2 - 13;

	pHealth2->Text = System::Convert::ToString(h2);
	pMana2->Text = System::Convert::ToString(m2);

	physicalButton->Enabled = true;
	magicButton->Enabled = true;
	blockButton->Enabled = true;
	punchButton->Enabled = false;
	whackButton->Enabled = false;
	sliceButton->Enabled = false;
	swordsDance->Enabled = false;
	Maelstorm->Enabled = false;
	doubleSlash->Enabled = false;
	if (h2 > 0)
	{
		 
		 
		aiAttack();
		victory();
	}
	turnLabel->Text = "Computer's Turn";
}
private: System::Void sliceButton_Click(System::Object^ sender, System::EventArgs^ e) {
	h2 = h2 - 15;

	pHealth2->Text = System::Convert::ToString(h2);
	pMana2->Text = System::Convert::ToString(m2);

	physicalButton->Enabled = true;
	magicButton->Enabled = true;
	blockButton->Enabled = true;
	punchButton->Enabled = false;
	whackButton->Enabled = false;
	sliceButton->Enabled = false;
	swordsDance->Enabled = false;
	Maelstorm->Enabled = false;
	doubleSlash->Enabled = false;
	if (h2 > 0)
	{
		 
		 
		aiAttack();
		victory();
	}
	turnLabel->Text = "Computer's Turn";
}
private: System::Void swordsDance_Click(System::Object^ sender, System::EventArgs^ e) {

	if (m1 >= 100)
	{
		h2 = h2 - 30;
		m1 = m1 - 100;

		pHealth2->Text = System::Convert::ToString(h2);
		pMana1->Text = System::Convert::ToString(m1);

		physicalButton->Enabled = true;
		magicButton->Enabled = true;
		blockButton->Enabled = true;
		punchButton->Enabled = false;
		whackButton->Enabled = false;
		sliceButton->Enabled = false;
		swordsDance->Enabled = false;
		Maelstorm->Enabled = false;
		doubleSlash->Enabled = false;
		if (h2 > 0)
		{
			aiAttack();
			victory();
		}
	}

	else if (m1 < 100)
	{
		MessageBox::Show("Player doesn't have enough mana.", "Low on Mana.", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	if (m1 < 0)
	{
		pMana1->Text = "0";
	}

	turnLabel->Text = "Computer's Turn";
	
}
private: System::Void Maelstorm_Click(System::Object^ sender, System::EventArgs^ e) {

	if (m1 >= 50)
	{
		h2 = h2 - 25;
		m1 = m1 - 50;

		

		pHealth2->Text = System::Convert::ToString(h2);
		pMana1->Text = System::Convert::ToString(m1);

		physicalButton->Enabled = true;
		magicButton->Enabled = true;
		blockButton->Enabled = true;
		punchButton->Enabled = false;
		whackButton->Enabled = false;
		sliceButton->Enabled = false;
		swordsDance->Enabled = false;
		Maelstorm->Enabled = false;
		doubleSlash->Enabled = false;
		if (h2 > 0)
		{
			aiAttack();
			victory();
		}
	}

	else if (m1 < 50)
	{
		MessageBox::Show("Player doesn't have enough mana.", "Low on Mana.", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	if (m1 < 0)
	{
		pMana1->Text = "0";
	}
	
	turnLabel->Text = "Computer's Turn";
}
private: System::Void doubleSlash_Click(System::Object^ sender, System::EventArgs^ e) {

	if (m1 >= 25)
	{
		h2 = h2 - 20;
		m1 = m1 - 25;

		pHealth2->Text = System::Convert::ToString(h2);
		pMana1->Text = System::Convert::ToString(m1);

		physicalButton->Enabled = true;
		magicButton->Enabled = true;
		blockButton->Enabled = true;
		punchButton->Enabled = false;
		whackButton->Enabled = false;
		sliceButton->Enabled = false;
		swordsDance->Enabled = false;
		Maelstorm->Enabled = false;
		doubleSlash->Enabled = false;
		if (h2 > 0)
		{
			aiAttack();
			victory();
		}
	}

	else if (m1 < 25)
	{
		MessageBox::Show("Player doesn't have enough mana.", "Low on Mana.", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	if (m1 < 0)
	{
		pMana1->Text = "0";
	}
	
	turnLabel->Text = "Computer's Turn";
}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}

private: void victory()
{
	if (h1 > 0 && h2 > 0)
	{
	}

	else if (h2 <= 0)
	{
		MessageBox::Show("You Won!", "VICTORY", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		Close();
	}
	else if (h1 <= 0) {
		MessageBox::Show("Enemy Won", "LOSE!", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		Close();
	}
}


private: void aiAttack()
{
	int random;
	int random2;
	String^ type = cType2->Text;

	//MessageBox::Show("The computer is deciding its attack.", "Wait!", MessageBoxButtons::OK, MessageBoxIcon::Information);


	//Player Classes

	random = rand() % 2 + 1;
	random2 = rand() % 3 + 1;

	//Swordsman

	if (type == "Swordsman")
	{
		if (random == 1) {
			if (random2 == 1) {
				//MessageBox::Show("Computer used Punch", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				  
				 
				statusLabel->Text = "Computer used Punch \n -10 Damage";
				h1 = h1 - 10;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
			}
			if (random2 == 2) {
				//MessageBox::Show("Computer used Whack", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				 
				statusLabel->Text = "Computer used Whack \n -13 Damage";
				h1 = h1 - 13;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
				
			}
			if (random2 == 3) {
				//MessageBox::Show("Computer used Slice", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Lounge \n -15 Damage";
				h1 = h1 - 15;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
				
			}
		}
		else if (random == 2 && m2 > 25) {
			if (m2 >= 100) {
				//MessageBox::Show("Computer used Sword's Dance", "-30 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Sword's Dance \n -30 Damage";
				h1 = h1 - 30;
				m2 = m2 - 100;
				pHealth1->Text = System::Convert::ToString(h1);
				pMana2->Text = System::Convert::ToString(m2);
				victory();
				
			}
			else if (m2 >= 50 && m2 < 100) {
				//MessageBox::Show("Computer used Maelstorm", "-25 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Maelstorm \n -25 Damage";
				h1 = h1 - 25;
				m2 = m2 - 50;
				pHealth1->Text = System::Convert::ToString(h1);
				pMana2->Text = System::Convert::ToString(m2);
				victory();
				
			}
			else if (m2 >= 25 && m2 < 50) {
				//MessageBox::Show("Computer used Double Slash", "-20 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Double Slash \n -20 Damage";
				h1 = h1 - 20;
				m2 = m2 - 25;
				pHealth1->Text = System::Convert::ToString(h1);
				pMana2->Text = System::Convert::ToString(m2);
				victory();
				
			}
		}

		else {
			if (random2 == 1) {
				//MessageBox::Show("Computer used Punch", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Punch \n -10 Damage";
				h1 = h1 - 10;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
			}
			if (random2 == 2) {
				//MessageBox::Show("Computer used Whack", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Whack \n -13 Damage";
				h1 = h1 - 13;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
			}
			if (random2 == 3) {
				//MessageBox::Show("Computer used Slice", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Slice \n -15 Damage";
				h1 = h1 - 15;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
			}
		}
		turnLabel->Text = "Player's Turn";

	}

	//Mage

	else if (type == "Mage")
	{
		if (random == 1) {
			if (random2 == 1) {
				//MessageBox::Show("Computer used Kick", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Kick \n -10 Damage";
				h1 = h1 - 10;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				

			}
			if (random2 == 2) {
				//MessageBox::Show("Computer used Wand Bash", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Wand Bash \n -13 Damage";
				h1 = h1 - 13;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				

			}
			if (random2 == 3) {
				//MessageBox::Show("Computer used Strike", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Strike \n -15 Damage";
				h1 = h1 - 15;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				

			}
		}
		else if (random == 2 && m2 > 25) {
			if (m2 >= 100) {
				//MessageBox::Show("Computer used Fireball", "-30 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Fireball \n -15 Damage";
				h1 = h1 - 30;
				m2 = m2 - 100;
				pHealth1->Text = System::Convert::ToString(h1);
				pMana2->Text = System::Convert::ToString(m2);
				victory();
				
			}
			else if (m2 >= 50 && m2 < 100) {
				//MessageBox::Show("Computer used Earth Shard", "-25 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Earth Shard \n -25 Damage";
				h1 = h1 - 25;
				m2 = m2 - 50;
				pHealth1->Text = System::Convert::ToString(h1);
				pMana2->Text = System::Convert::ToString(m2);
				victory();
				
			}
			else if (m2 >= 25 && m2 < 50) {
				//MessageBox::Show("Computer used Gust", "-20 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Gust \n -20 Damage";
				h1 = h1 - 20;
				m2 = m2 - 25;
				pHealth1->Text = System::Convert::ToString(h1);
				pMana2->Text = System::Convert::ToString(m2);
				victory();
				
			}
			 ;
		}


		else {
			if (random2 == 1) {
				//MessageBox::Show("Computer used Kick", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Kick \n -10 Damage";
				h1 = h1 - 10;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
			}
			if (random2 == 2) {
				//MessageBox::Show("Computer used Wand Bash", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Wand Bash \n -13 Damage";
				h1 = h1 - 13;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
			}
			if (random2 == 3) {
				//MessageBox::Show("Computer used Strike", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				 
				  
				 
				statusLabel->Text = "Computer used Strike \n -15 Damage";
				h1 = h1 - 15;
				pHealth1->Text = System::Convert::ToString(h1);
				victory();
				
			}
			turnLabel->Text = "Player's Turn";
		}
	}

	//Palladin
	else if (type == "Palladin")
	{
	if (random == 1) {
		if (random2 == 1) {
			//MessageBox::Show("Computer used Slash", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Slash \n -10 Damage";
			h1 = h1 - 10;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		if (random2 == 2) {
			//MessageBox::Show("Computer used Sword Thrush", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Sword Thrush \n -13 Damage";
			h1 = h1 - 13;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		if (random2 == 3) {
			//MessageBox::Show("Computer used Shield Bash", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Shield Bash \n -15 Damage";
			h1 = h1 - 15;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		
	}
	else if (random == 2 && m2 > 25) {
		if (m2 >= 100) {
			//MessageBox::Show("Computer used Bindinglight", "-30 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Bindinglight \n -30 Damage";
			h1 = h1 - 30;
			m2 = m2 - 100;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		else if (m2 >= 50 && m2 < 100) {
			//MessageBox::Show("Computer used Hammer of Justice", "-25 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Hammer of Justice \n -25 Damage";
			h1 = h1 - 25;
			m2 = m2 - 50;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		else if (m2 >= 25 && m2 < 50) {
			//MessageBox::Show("Computer used Smite", "-20 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Smite \n -20 Damage";
			h1 = h1 - 20;
			m2 = m2 - 25;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		
	}

	else {
		if (random2 == 1) {
			//MessageBox::Show("Computer used Slash", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Slash \n -10 Damage";
			h1 = h1 - 10;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		if (random2 == 2) {
			//MessageBox::Show("Computer used Sword Thrush", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Sword Thrush \n -13 Damage";
			h1 = h1 - 13;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		if (random2 == 3) {
			//MessageBox::Show("Computer used Bindinglight", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Bindinglight \n -15 Damage";
			h1 = h1 - 15;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		turnLabel->Text = "Player's Turn";
		
	}
	}

	//Marksman
	else if (type == "Marksman")
	{
	if (random == 1) {
		if (random2 == 1) {
			//MessageBox::Show("Computer used Arrow Shot", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Arrow Shot \n -10 Damage";
			h1 = h1 - 10;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		if (random2 == 2) {
			//MessageBox::Show("Computer used Quickshot", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Quickshot \n -13 Damage";
			h1 = h1 - 13;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		if (random2 == 3) {
			//MessageBox::Show("Computer used Volley", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Volley \n -15 Damage";
			h1 = h1 - 15;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		
	}
	else if (random == 2 && m2 > 25) {
		if (m2 >= 100) {
			//MessageBox::Show("Computer used Split Shot", "-30 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Split Shot \n -30 Damage";
			h1 = h1 - 30;
			m2 = m2 - 100;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		else if (m2 >= 50 && m2 < 100) {
			//MessageBox::Show("Computer used Piercing Arrow", "-25 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Piercing Arrow \n -25 Damage";
			h1 = h1 - 25;
			m2 = m2 - 50;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		else if (m2 >= 25 && m2 < 50) {
			//MessageBox::Show("Computer used Injection Shot", "-20 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Injection Shot \n -20 Damage";
			h1 = h1 - 20;
			m2 = m2 - 25;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		
	}

	else {
		if (random2 == 1) {
			//MessageBox::Show("Computer used Arrow Shot", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Arrow Shot \n -10 Damage";
			h1 = h1 - 10;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		if (random2 == 2) {
			//MessageBox::Show("Computer used Wand Quickshot", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Wand Quickshot \n -13 Damage";
			h1 = h1 - 13;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		if (random2 == 3) {
			//MessageBox::Show("Computer used Volley", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			statusLabel->Text = "Computer used Volley \n -15 Damage";
			h1 = h1 - 15;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		turnLabel->Text = "Player's Turn";
		
	}
	}

	//Rogue
	else if (type == "Rogue")
	{
	if (random == 1) {
		if (random2 == 1) {
			//MessageBox::Show("Computer used Lounge", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			 
			  
			 
			statusLabel->Text = "Computer used Lounge \n -10 Damage";
			h1 = h1 - 10;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		if (random2 == 2) {
			//MessageBox::Show("Computer used Deceit", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			 
			statusLabel->Text = "Computer used Deceit \n -13 Damage";
			h1 = h1 - 13;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		if (random2 == 3) {
			//MessageBox::Show("Computer used Slice", "-15 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			 
			statusLabel->Text = "Computer used Slice \n -15 Damage";
			h1 = h1 - 15;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			

		}
		
	}
	else if (random == 2 && m2 > 25) {
		if (m2 >= 100) {
			//MessageBox::Show("Computer used Toxin Muck", "-30 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			  
			 
			 
			statusLabel->Text = "Computer used Toxin Muck \n -30 Damage";
			h1 = h1 - 30;
			m2 = m2 - 100;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		else if (m2 >= 50 && m2 < 100) {
			//MessageBox::Show("Computer used Blad Fury", "-25 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			 
			statusLabel->Text = "Computer used Blad Fury \n -25 Damage";
			h1 = h1 - 25;
			m2 = m2 - 50;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		else if (m2 >= 25 && m2 < 50) {
			//MessageBox::Show("Computer used Sludge Spit", "-20 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			 
			
			statusLabel->Text = "Computer used Sludge \n -20 Damage";
			h1 = h1 - 20;
			m2 = m2 - 25;
			pHealth1->Text = System::Convert::ToString(h1);
			pMana2->Text = System::Convert::ToString(m2);
			victory();
			
		}
		
	}

	else {
		if (random2 == 1) {
			//MessageBox::Show("Computer used Lounge", "-10 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			 
			statusLabel->Text = "Computer used Lounge \n -10 Damage";
			h1 = h1 - 10;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		if (random2 == 2) {
			//MessageBox::Show("Computer used Deceit", "-13 Damage", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 
			  
			 
			 
			statusLabel->Text = "Computer used Deceit \n -13 damage";
			h1 = h1 - 13;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}
		if (random2 == 3) {
			statusLabel->Text = "Computer used Slice\n -15 damage";
			h1 = h1 - 15;
			pHealth1->Text = System::Convert::ToString(h1);
			victory();
			
		}

		turnLabel->Text = "Player's Turn";
		aiLabel->Text = " ";
		
	}
	turnLabel->Text = "Player's Turn";
	}
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Are you sure you want to exit the game?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
	MessageBox::Show("Enemy wins!", "Lose", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	Close();
}
};
}