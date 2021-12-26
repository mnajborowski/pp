#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
#include <random>

namespace Chinczyk {


	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	int b1_pole = 0;
	int b2_pole = 0;
	int b3_pole = 0;
	int b4_pole = 0;
	int y1_pole = 0;
	int y2_pole = 0;
	int y3_pole = 0;
	int y4_pole = 0;
	int g1_pole = 0;
	int g2_pole = 0;
	int g3_pole = 0;
	int g4_pole = 0;
	int r1_pole = 0;
	int r2_pole = 0;
	int r3_pole = 0;
	int r4_pole = 0;
	int szostka_b = 0;
	int szostka_y = 0;
	int szostka_g = 0;
	int szostka_r = 0;
	int bije_b = 0;
	int bije_y = 0;
	int bije_g = 0;
	int bije_r = 0;
	int losowa = 0;
	int gracz = 0;
	int graczy = 0;
	int rzut_moc = 0;
	bool rzut = true;


	fstream plik;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			srand(time(NULL));
			int losowa;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zakoñczToolStripMenuItem;

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ToolStripMenuItem^  graczyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  graczyToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  graczyToolStripMenuItem2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;














	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graczyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graczyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graczyToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zakoñczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->graToolStripMenuItem,
					this->pomocToolStripMenuItem, this->zakoñczToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1006, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->graczyToolStripMenuItem,
					this->graczyToolStripMenuItem1, this->graczyToolStripMenuItem2
			});
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(86, 24);
			this->graToolStripMenuItem->Text = L"Nowa gra";
			// 
			// graczyToolStripMenuItem
			// 
			this->graczyToolStripMenuItem->Name = L"graczyToolStripMenuItem";
			this->graczyToolStripMenuItem->Size = System::Drawing::Size(139, 26);
			this->graczyToolStripMenuItem->Text = L"2 graczy";
			this->graczyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::graczyToolStripMenuItem_Click);
			// 
			// graczyToolStripMenuItem1
			// 
			this->graczyToolStripMenuItem1->Name = L"graczyToolStripMenuItem1";
			this->graczyToolStripMenuItem1->Size = System::Drawing::Size(139, 26);
			this->graczyToolStripMenuItem1->Text = L"3 graczy";
			this->graczyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::graczyToolStripMenuItem1_Click);
			// 
			// graczyToolStripMenuItem2
			// 
			this->graczyToolStripMenuItem2->Name = L"graczyToolStripMenuItem2";
			this->graczyToolStripMenuItem2->Size = System::Drawing::Size(139, 26);
			this->graczyToolStripMenuItem2->Text = L"4 graczy";
			this->graczyToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::graczyToolStripMenuItem2_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(68, 24);
			this->pomocToolStripMenuItem->Text = L"Zasady";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pomocToolStripMenuItem_Click);
			// 
			// zakoñczToolStripMenuItem
			// 
			this->zakoñczToolStripMenuItem->Name = L"zakoñczToolStripMenuItem";
			this->zakoñczToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->zakoñczToolStripMenuItem->Text = L"Zakoñcz";
			this->zakoñczToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zakoñczToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(860, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Rzut kostk¹";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseDown);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseUp);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(309, 558);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(262, 558);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(309, 605);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 30);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(262, 605);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(30, 30);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(309, 135);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(262, 135);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 30);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(309, 182);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(30, 30);
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(262, 182);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(30, 30);
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(732, 135);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(30, 30);
			this->pictureBox9->TabIndex = 13;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &MyForm::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(685, 135);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(30, 30);
			this->pictureBox10->TabIndex = 14;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &MyForm::pictureBox10_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(732, 182);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(30, 30);
			this->pictureBox11->TabIndex = 15;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(685, 182);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(30, 30);
			this->pictureBox12->TabIndex = 16;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(732, 558);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(30, 30);
			this->pictureBox13->TabIndex = 17;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &MyForm::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(685, 558);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(30, 30);
			this->pictureBox14->TabIndex = 18;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &MyForm::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(732, 605);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(30, 30);
			this->pictureBox15->TabIndex = 19;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &MyForm::pictureBox15_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(685, 605);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(30, 30);
			this->pictureBox16->TabIndex = 20;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &MyForm::pictureBox16_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(48, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 29);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Teraz gra:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(20, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 80);
			this->label5->TabIndex = 23;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::White;
			this->pictureBox17->Location = System::Drawing::Point(815, 40);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(45, 150);
			this->pictureBox17->TabIndex = 24;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Visible = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::White;
			this->pictureBox18->Location = System::Drawing::Point(940, 40);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(45, 150);
			this->pictureBox18->TabIndex = 25;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Chiñczyk!";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 0)
		{
			if (rzut == true && (b1_pole == 0 && b2_pole == 0 && b3_pole == 0 && b4_pole == 0))
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png");
					rzut_moc++;
				}
				if (losowa == 2) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png");
					rzut_moc++;
				}
				if (losowa == 3) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png");
					rzut_moc++;
				}
				if (losowa == 4) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png");
					rzut_moc++;
				}
				if (losowa == 5) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png");
					rzut_moc++;
				}
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					rzut = false;
					rzut_moc = 0;
					szostka_b++;
				}
				if (rzut_moc == 3)
				{
					rzut_moc = 0;
					if (losowa != 6 && graczy == 2) gracz = (gracz + 1) % 2;
					if (losowa != 6 && graczy == 3) gracz = (gracz + 1) % 3;
					if (losowa != 6 && graczy == 4) gracz = (gracz + 1) % 4;
					zmiana();
					losowa = 0;
				}
			}
			else if (rzut == true)
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png"); }
				if (losowa == 2) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png"); }
				if (losowa == 3) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png"); }
				if (losowa == 4) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png"); }
				if (losowa == 5) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png"); }
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					szostka_b++;
				}
				rzut = false;
			}
		}
		else if (gracz == 1)
		{
			if (rzut == true && (y1_pole == 0 && y2_pole == 0 && y3_pole == 0 && y4_pole == 0))
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png");
					rzut_moc++;
				}
				if (losowa == 2) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png");
					rzut_moc++;
				}
				if (losowa == 3) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png");
					rzut_moc++;
				}
				if (losowa == 4) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png");
					rzut_moc++;
				}
				if (losowa == 5) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png");
					rzut_moc++;
				}
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					rzut = false;
					szostka_y++;
					rzut_moc = 0;
				}
				if (rzut_moc == 3)
				{
					rzut_moc = 0;
					if (losowa != 6 && graczy == 2) gracz = (gracz + 1) % 2;
					if (losowa != 6 && graczy == 3) gracz = (gracz + 1) % 3;
					if (losowa != 6 && graczy == 4) gracz = (gracz + 1) % 4;
					zmiana();
					losowa = 0;
				}
			}
			else if (rzut == true)
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png"); }
				if (losowa == 2) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png"); }
				if (losowa == 3) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png"); }
				if (losowa == 4) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png"); }
				if (losowa == 5) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png"); }
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					szostka_y++;
				}
				rzut = false;
			}
		}
		else if (gracz == 2)
		{
			if (rzut == true && (g1_pole == 0 && g2_pole == 0 && g3_pole == 0 && g4_pole == 0))
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png");
					rzut_moc++;
				}
				if (losowa == 2) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png");
					rzut_moc++;
				}
				if (losowa == 3) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png");
					rzut_moc++;
				}
				if (losowa == 4) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png");
					rzut_moc++;
				}
				if (losowa == 5) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png");
					rzut_moc++;
				}
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					rzut = false;
					rzut_moc = 0;
					szostka_g++;
				}
				if (rzut_moc == 3)
				{
					rzut_moc = 0;
					if (losowa != 6 && graczy == 2) gracz = (gracz + 1) % 2;
					if (losowa != 6 && graczy == 3) gracz = (gracz + 1) % 3;
					if (losowa != 6 && graczy == 4) gracz = (gracz + 1) % 4;
					zmiana();
					losowa = 0;
				}
			}
			else if (rzut == true)
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png"); }
				if (losowa == 2) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png"); }
				if (losowa == 3) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png"); }
				if (losowa == 4) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png"); }
				if (losowa == 5) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png"); }
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					szostka_g++;
				}
				rzut = false;
			}
		}
		else if (gracz == 3)
		{
			if (rzut == true && (r1_pole == 0 && r2_pole == 0 && r3_pole == 0 && r4_pole == 0))
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png");
					rzut_moc++;
				}
				if (losowa == 2) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png");
					rzut_moc++;
				}
				if (losowa == 3) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png");
					rzut_moc++;
				}
				if (losowa == 4) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png");
					rzut_moc++;
				}
				if (losowa == 5) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png");
					rzut_moc++;
				}
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					rzut = false;
					rzut_moc = 0;
					szostka_r++;
				}
				if (rzut_moc == 3)
				{
					rzut_moc = 0;
					if (losowa != 6 && graczy == 2) gracz = (gracz + 1) % 2;
					if (losowa != 6 && graczy == 3) gracz = (gracz + 1) % 3;
					if (losowa != 6 && graczy == 4) gracz = (gracz + 1) % 4;
					zmiana();
					losowa = 0;
				}
			}
			else if (rzut == true)
			{
				button1->Text = "";
				losowa = (rand() % 6) + 1;
				if (losowa == 1) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_1.png"); }
				if (losowa == 2) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_2.png"); }
				if (losowa == 3) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_3.png"); }
				if (losowa == 4) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_4.png"); }
				if (losowa == 5) { this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_5.png"); }
				if (losowa == 6) {
					this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_6.png");
					szostka_r++;
				}
				rzut = false;
			}
		}
	}
	private: System::Void graczyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		graczy = 2;
		gracz = rand() % 1;
		losowa = 0;
		rzut = true;
		rzut_moc = 0;
		b1_pole = b2_pole = b3_pole = b4_pole = y1_pole = y2_pole = y3_pole = y4_pole = 0;
		this->pictureBox1->Visible = true;
		move_b1();
		this->pictureBox2->Visible = true;
		move_b2();
		this->pictureBox3->Visible = true;
		move_b3();
		this->pictureBox4->Visible = true;
		move_b4();
		this->pictureBox5->Visible = true;
		move_y1();
		this->pictureBox6->Visible = true;
		move_y2();
		this->pictureBox7->Visible = true;
		move_y3();
		this->pictureBox8->Visible = true;
		move_y4();
		this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_0.png");
		this->button1->Text = L"Rzut kostk¹";
		zmiana();
	}
	private: System::Void graczyToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		graczy = 3;
		gracz = rand() % 2;
		losowa = 0;
		rzut = true;
		rzut_moc = 0;
		b1_pole = b2_pole = b3_pole = b4_pole = y1_pole = y2_pole = y3_pole = y4_pole = g1_pole = g2_pole = g3_pole = g4_pole = 0;
		this->pictureBox1->Visible = true;
		move_b1();
		this->pictureBox2->Visible = true;
		move_b2();
		this->pictureBox3->Visible = true;
		move_b3();
		this->pictureBox4->Visible = true;
		move_b4();
		this->pictureBox5->Visible = true;
		move_y1();
		this->pictureBox6->Visible = true;
		move_y2();
		this->pictureBox7->Visible = true;
		move_y3();
		this->pictureBox8->Visible = true;
		move_y4();
		this->pictureBox9->Visible = true;
		move_g1();
		this->pictureBox10->Visible = true;
		move_g2();
		this->pictureBox11->Visible = true;
		move_g3();
		this->pictureBox12->Visible = true;
		move_g4();
		this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_0.png");
		this->button1->Text = L"Rzut kostk¹";
		zmiana();
	}
	private: System::Void graczyToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		graczy = 4;
		gracz = rand() % 3;
		losowa = 0;
		rzut = true;
		rzut_moc = 0;
		b1_pole = b2_pole = b3_pole = b4_pole = y1_pole = y2_pole = y3_pole = y4_pole = g1_pole = g2_pole = g3_pole = g4_pole = r1_pole = r2_pole = r3_pole = r4_pole = 0;
		this->pictureBox1->Visible = true;
		move_b1();
		this->pictureBox2->Visible = true;
		move_b2();
		this->pictureBox3->Visible = true;
		move_b3();
		this->pictureBox4->Visible = true;
		move_b4();
		this->pictureBox5->Visible = true;
		move_y1();
		this->pictureBox6->Visible = true;
		move_y2();
		this->pictureBox7->Visible = true;
		move_y3();
		this->pictureBox8->Visible = true;
		move_y4();
		this->pictureBox9->Visible = true;
		move_g1();
		this->pictureBox10->Visible = true;
		move_g2();
		this->pictureBox11->Visible = true;
		move_g3();
		this->pictureBox12->Visible = true;
		move_g4();
		this->pictureBox13->Visible = true;
		move_r1();
		this->pictureBox14->Visible = true;
		move_r2();
		this->pictureBox15->Visible = true;
		move_r3();
		this->pictureBox16->Visible = true;
		move_r4();
		this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_0.png");
		this->button1->Text = L"Rzut kostk¹";
		zmiana();
	}
	private: System::Void zakoñczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult odp =
			MessageBox::Show("Czy na pewno chcesz zamknac aplikacje?", "Zamknij", MessageBoxButtons::YesNo, MessageBoxIcon::Question, MessageBoxDefaultButton::Button2);
		switch (odp)
		{
		case System::Windows::Forms::DialogResult::Yes:
			Close();
		case System::Windows::Forms::DialogResult::No:
			break;
		}

	}
	private: System::Void pomocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult odp =
			MessageBox::Show("Przygotowanie gry\n\nNa pocz¹tek ka¿dy z graczy wybiera sobie kolor pionków (czerwony, ¿ó³ty, niebieski lub zielony)\n\nPrzebieg gry\n\n- gracze, w ustalonej wczeœniej kolejnoœci, rzucaj¹ kostk¹ po trzy razy. Kiedy któryœ z graczy wyrzuci kostk¹ liczbê 6, wtedy ustawia jeden ze swoich czterech pionków na polu startowym (kropka w 'kolorze gracza') i rzuca jeszcze raz, a nastêpnie przesuwa pionek o tak¹ liczbê pól w kierunku zgodnym z ruchem wskazówek zegara, ile wyrzuci kostk¹.\n- gracze przesuwaj¹ siê o tak¹ liczbê pól, jak¹ liczbê wyrzuc¹ kostk¹.\n- pionki przesuwaj¹ siê jedynie na tych polach, które na planszy s¹ oznaczone s¹ kolorem bia³ym (oprócz tego na samym œrodku).\n- je¿eli któryœ z graczy wyrzuci 6, ma prawo do jeszcze jednego rzutu (pozostali czekaj¹ kolejkê). Kiedy przyk³adowo ktoœ wyrzuci 6, a potem 5, rusza siê o 11 pól (6 + 5 = 11). Kiedy wyrzuci 6, a potem jeszcze raz 6, rzuca jeszcze raz itd. Gracz, po wyrzuceniu 6, mo¿e tak¿e wyprowadziæ ze 'schowka' kolejny pionek.\n- jeœli podczas gry pionek jednego gracza stanie na polu zajmowanym przez drugiego, pionek stoj¹cy tutaj poprzednio zostaje zbity i wraca do swojego 'schowka'.\n- kiedy gracz obejdzie pionkiem ca³¹ planszê dooko³a, wprowadza swój pionek do 'domku' - czyli czterech pól oznaczonych w³asnym kolorem. Do 'domku' jednego gracza nie mog¹ wjechaæ swoimi pionkami inni gracze.\n- kiedy gracz wjecha³ swoim pionkiem do 'domku', a na planszy nie ma ¿adnych innych pionków, nie ma ju¿ ¿adnej mo¿liwoœci ruchu, rzuca kostk¹ trzy razy tak, jak na pocz¹tku gry, a¿ nie wyrzuci 6.\n- to samo gracz wykonuje, kiedy wszystkie pionki zosta³y zbite i nie ma ¿adnej mo¿liwoœci ruchu.\n\nZakoñczenie gry\n\nWygrywa ten gracz, który jako pierwszy wprowadzi wszystkie swoje pionki do 'domku'. ", "Zasady", MessageBoxButtons::OK, MessageBoxIcon::Information);
		switch (odp)
		{
		case System::Windows::Forms::DialogResult::OK:
			break;
		}
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 0)
		{
			if (b1_pole != 0)
			{
				if ((b1_pole + losowa) != b2_pole && (b1_pole + losowa) != b3_pole && (b1_pole + losowa) != b4_pole)
				{
					if (b1_pole < 44)
					{
						if (b1_pole == 40 && (losowa == 5 || losowa == 6)) { b1_pole = 40; }
						else if (b1_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { b1_pole = 41; }
						else if (b1_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b1_pole = 42; }
						else if (b1_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b1_pole = 43; }
						else {
							b1_pole = b1_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_b1();
					czy_bije_b();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				if ((b1_pole + losowa) != b2_pole && (b1_pole + losowa) != b3_pole && (b1_pole + losowa) != b4_pole)
				{
					b1_pole = 1;
					move_b1();
					czy_bije_b();
					losowa = 0;
				}
			}
			rzut = true;
		}
		if (b1_pole > 40 && b2_pole > 40 && b3_pole > 40 && b4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ NIEBIESKI!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ NIEBIESKI");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 0)
		{
			if (b2_pole != 0)
			{
				if ((b2_pole + losowa) != b1_pole && (b2_pole + losowa) != b3_pole && (b2_pole + losowa) != b4_pole)
				{
					if (b2_pole < 44)
					{
						if (b2_pole == 40 && (losowa == 5 || losowa == 6)) { b2_pole = 40; }
						else if (b2_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { b2_pole = 41; }
						else if (b2_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b2_pole = 42; }
						else if (b2_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b2_pole = 43; }
						else {
							b2_pole = b2_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_b2();
					czy_bije_b();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				if ((b2_pole + losowa) != b1_pole && (b2_pole + losowa) != b3_pole && (b2_pole + losowa) != b4_pole)
				{
					b2_pole = 1;
					move_b2();
					czy_bije_b();
					losowa = 0;
				}
			}
			rzut = true;
		}
		if (b1_pole > 40 && b2_pole > 40 && b3_pole > 40 && b4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ NIEBIESKI!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ NIEBIESKI");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 0)
		{
			if (b3_pole != 0)
			{
				if ((b3_pole + losowa) != b1_pole && (b3_pole + losowa) != b2_pole && (b3_pole + losowa) != b4_pole)
				{
					if (b3_pole < 44)
					{
						if (b3_pole == 40 && (losowa == 5 || losowa == 6)) { b3_pole = 40; }
						else if (b3_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { b3_pole = 41; }
						else if (b3_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b3_pole = 42; }
						else if (b3_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b3_pole = 43; }
						else {
							b3_pole = b3_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_b3();
					czy_bije_b();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				if ((b3_pole + losowa) != b1_pole && (b3_pole + losowa) != b2_pole && (b3_pole + losowa) != b4_pole)
				{
					b3_pole = 1;
					move_b3();
					czy_bije_b();
					losowa = 0;
				}
			}
			rzut = true;
		}
		if (b1_pole > 40 && b2_pole > 40 && b3_pole > 40 && b4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ NIEBIESKI!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ NIEBIESKI");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 0)
		{
			if (b4_pole != 0)
			{
				if ((b4_pole + losowa) != b1_pole && (b4_pole + losowa) != b2_pole && (b4_pole + losowa) != b3_pole)
				{
					if (b4_pole < 44)
					{
						if (b4_pole == 40 && (losowa == 5 || losowa == 6)) { b4_pole = 40; }
						else if (b4_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { b4_pole = 41; }
						else if (b4_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b4_pole = 42; }
						else if (b4_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { b4_pole = 43; }
						else {
							b4_pole = b4_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_b4();
					czy_bije_b();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				if ((b4_pole + losowa) != b1_pole && (b4_pole + losowa) != b2_pole && (b4_pole + losowa) != b3_pole)
				{
					b4_pole = 1;
					move_b4();
					czy_bije_b();
					losowa = 0;
				}
			}
			rzut = true;
		}
		if (b1_pole > 40 && b2_pole > 40 && b3_pole > 40 && b4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ NIEBIESKI!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ NIEBIESKI");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 1)
		{
			if (y1_pole != 0)
			{

				if ((y1_pole + losowa) != y2_pole && (y1_pole + losowa) != y3_pole && (y1_pole + losowa) != y4_pole)
				{
					if (y1_pole < 44)
					{
						if (y1_pole == 40 && (losowa == 5 || losowa == 6)) { y1_pole = 40; }
						else if (y1_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { y1_pole = 41; }
						else if (y1_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y1_pole = 42; }
						else if (y1_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y1_pole = 43; }
						else {
							y1_pole = y1_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_y1();
					czy_bije_y();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				y1_pole = 1;
				move_y1();
				czy_bije_y();
				losowa = 0;
			}
			rzut = true;
		}
		if (y1_pole > 40 && y2_pole > 40 && y3_pole > 40 && y4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ¯Ó£TY!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ¯Ó£TY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 1)
		{
			if (y2_pole != 0)
			{
				if ((y2_pole + losowa) != y1_pole && (y2_pole + losowa) != y3_pole && (y2_pole + losowa) != y4_pole)
				{
					if (y2_pole < 44)
					{
						if (y2_pole == 40 && (losowa == 5 || losowa == 6)) { y2_pole = 40; }
						else if (y2_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { y2_pole = 41; }
						else if (y2_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y2_pole = 42; }
						else if (y2_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y2_pole = 43; }
						else {
							y2_pole = y2_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_y2();
					czy_bije_y();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				y2_pole = 1;
				move_y2();
				czy_bije_y();
				losowa = 0;
			}
			rzut = true;
		}
		if (y1_pole > 40 && y2_pole > 40 && y3_pole > 40 && y4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ¯Ó£TY!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ¯Ó£TY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 1)
		{
			if (y3_pole != 0)
			{
				if ((y3_pole + losowa) != y1_pole && (y3_pole + losowa) != y2_pole && (y3_pole + losowa) != y4_pole)
				{
					if (y3_pole < 44)
					{
						if (y3_pole == 40 && (losowa == 5 || losowa == 6)) { y3_pole = 40; }
						else if (y3_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { y3_pole = 41; }
						else if (y3_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y3_pole = 42; }
						else if (y3_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y3_pole = 43; }
						else {
							y3_pole = y3_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_y3();
					czy_bije_y();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				y3_pole = 1;
				move_y3();
				czy_bije_y();
				losowa = 0;
			}
			rzut = true;
		}
		if (y1_pole > 40 && y2_pole > 40 && y3_pole > 40 && y4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ¯Ó£TY!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ¯Ó£TY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 1)
		{
			if (y4_pole != 0)
			{
				if ((y4_pole + losowa) != y1_pole && (y4_pole + losowa) != y3_pole && (y4_pole + losowa) != y2_pole)
				{
					if (y4_pole < 44)
					{
						if (y4_pole == 40 && (losowa == 5 || losowa == 6)) { y4_pole = 40; }
						else if (y4_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { y4_pole = 41; }
						else if (y4_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y4_pole = 42; }
						else if (y4_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { y4_pole = 43; }
						else {
							y4_pole = y4_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_y4();
					czy_bije_y();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				y4_pole = 1;
				move_y4();
				czy_bije_y();
				losowa = 0;
			}
			rzut = true;
		}
		if (y1_pole > 40 && y2_pole > 40 && y3_pole > 40 && y4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ¯Ó£TY!", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ¯Ó£TY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 2)
		{
			if (g1_pole != 0)
			{
				if ((g1_pole + losowa) != g2_pole && (g1_pole + losowa) != g4_pole && (g1_pole + losowa) != g3_pole)
				{
					if (g1_pole < 44)
					{
						if (g1_pole == 40 && (losowa == 5 || losowa == 6)) { g1_pole = 40; }
						else if (g1_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { g1_pole = 41; }
						else if (g1_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g1_pole = 42; }
						else if (g1_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g1_pole = 43; }
						else {
							g1_pole = g1_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_g1();
					czy_bije_g();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				g1_pole = 1;
				move_g1();
				czy_bije_g();
				losowa = 0;
			}
			rzut = true;
		}
		if (g1_pole > 40 && g2_pole > 40 && g3_pole > 40 && g4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ZIELONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ZIELONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 2)
		{
			if (g2_pole != 0)
			{
				if ((g2_pole + losowa) != g1_pole && (g2_pole + losowa) != g4_pole && (g2_pole + losowa) != g3_pole)
				{
					if (g2_pole < 44)
					{
						if (g2_pole == 40 && (losowa == 5 || losowa == 6)) { g2_pole = 40; }
						else if (g2_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { g2_pole = 41; }
						else if (g2_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g2_pole = 42; }
						else if (g2_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g2_pole = 43; }
						else {
							g2_pole = g2_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_g2();
					czy_bije_g();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				g2_pole = 1;
				move_g2();
				czy_bije_g();
				losowa = 0;
			}
			rzut = true;
		}
		if (g1_pole > 40 && g2_pole > 40 && g3_pole > 40 && g4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ZIELONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ZIELONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 2)
		{
			if (g3_pole != 0)
			{
				if ((g3_pole + losowa) != g2_pole && (g3_pole + losowa) != g4_pole && (g3_pole + losowa) != g1_pole)
				{
					if (g3_pole < 44)
					{
						if (g3_pole == 40 && (losowa == 5 || losowa == 6)) { g3_pole = 40; }
						else if (g3_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { g3_pole = 41; }
						else if (g3_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g3_pole = 42; }
						else if (g3_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g3_pole = 43; }
						else {
							g3_pole = g3_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_g3();
					czy_bije_g();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				g3_pole = 1;
				move_g3();
				czy_bije_g();
				losowa = 0;
			}
			rzut = true;
		}
		if (g1_pole > 40 && g2_pole > 40 && g3_pole > 40 && g4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ZIELONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ZIELONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 2)
		{
			if (g4_pole != 0)
			{
				if ((g4_pole + losowa) != g2_pole && (g4_pole + losowa) != g1_pole && (g4_pole + losowa) != g3_pole)
				{
					if (g4_pole < 44)
					{
						if (g4_pole == 40 && (losowa == 5 || losowa == 6)) { g4_pole = 40; }
						else if (g4_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { g4_pole = 41; }
						else if (g4_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g4_pole = 42; }
						else if (g4_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { g4_pole = 43; }
						else {
							g4_pole = g4_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_g4();
					czy_bije_g();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				g4_pole = 1;
				move_g4();
				czy_bije_g();
				losowa = 0;
			}
			rzut = true;
		}
		if (g1_pole > 40 && g2_pole > 40 && g3_pole > 40 && g4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ ZIELONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ ZIELONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 3)
		{
			if (r1_pole != 0)
			{
				if ((r1_pole + losowa) != r2_pole && (r1_pole + losowa) != r3_pole && (r1_pole + losowa) != r4_pole)
				{
					if (r1_pole < 44)
					{
						if (r1_pole == 40 && (losowa == 5 || losowa == 6)) { r1_pole = 40; }
						else if (r1_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { r1_pole = 41; }
						else if (r1_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r1_pole = 42; }
						else if (r1_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r1_pole = 43; }
						else {
							r1_pole = r1_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_r1();
					czy_bije_r();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				r1_pole = 1;
				move_r1();
				czy_bije_r();
				losowa = 0;
			}
			rzut = true;
		}
		if (r1_pole > 40 && r2_pole > 40 && r3_pole > 40 && r4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ CZERWONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ CZERWONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 3)
		{
			if (r2_pole != 0)
			{
				if ((r2_pole + losowa) != r1_pole && (r2_pole + losowa) != r3_pole && (r2_pole + losowa) != r4_pole)
				{
					if (r2_pole < 44)
					{
						if (r2_pole == 40 && (losowa == 5 || losowa == 6)) { r2_pole = 40; }
						else if (r2_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { r2_pole = 41; }
						else if (r2_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r2_pole = 42; }
						else if (r2_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r2_pole = 43; }
						else {
							r2_pole = r2_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_r2();
					czy_bije_r();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				r2_pole = 1;
				move_r2();
				czy_bije_r();
				losowa = 0;
			}
			rzut = true;
		}
		if (r1_pole > 40 && r2_pole > 40 && r3_pole > 40 && r4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ CZERWONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ CZERWONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 3)
		{
			if (r3_pole != 0)
			{
				if ((r3_pole + losowa) != r2_pole && (r3_pole + losowa) != r1_pole && (r3_pole + losowa) != r4_pole)
				{
					if (r3_pole < 44)
					{
						if (r3_pole == 40 && (losowa == 5 || losowa == 6)) { r3_pole = 40; }
						else if (r3_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { r3_pole = 41; }
						else if (r3_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r3_pole = 42; }
						else if (r3_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r3_pole = 43; }
						else {
							r3_pole = r3_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}

					move_r3();
					czy_bije_r();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				r3_pole = 1;
				move_r3();
				czy_bije_r();
				losowa = 0;
			}
			rzut = true;
		}
		if (r1_pole > 40 && r2_pole > 40 && r3_pole > 40 && r4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ CZERWONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ CZERWONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
		if (gracz == 3)
		{
			if (r4_pole != 0)
			{
				if ((r4_pole + losowa) != r2_pole && (r4_pole + losowa) != r3_pole && (r4_pole + losowa) != r1_pole)
				{
					if (r4_pole < 44)
					{
						if (r4_pole == 40 && (losowa == 5 || losowa == 6)) { r4_pole = 40; }
						else if (r4_pole == 41 && (losowa == 4 || losowa == 5 || losowa == 6)) { r4_pole = 41; }
						else if (r4_pole == 42 && (losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r4_pole = 42; }
						else if (r4_pole == 43 && (losowa == 2 || losowa == 3 || losowa == 4 || losowa == 5 || losowa == 6)) { r4_pole = 43; }
						else {
							r4_pole = r4_pole + losowa;
							if (losowa == 6) losowa = 0;
						}
					}
					move_r4();
					czy_bije_r();
					if (losowa != 0)
					{
						if (graczy == 2) gracz = (gracz + 1) % 2;
						if (graczy == 3) gracz = (gracz + 1) % 3;
						if (graczy == 4) gracz = (gracz + 1) % 4;
						zmiana();
					}
				}
			}
			else if (losowa == 6)
			{
				r4_pole = 1;
				move_r4();
				czy_bije_r();
				losowa = 0;
			}
			rzut = true;
		}
		if (r1_pole > 40 && r2_pole > 40 && r3_pole > 40 && r4_pole > 40)
		{
			System::Windows::Forms::DialogResult odp =
				MessageBox::Show("Zwyciê¿y³ GRACZ CZERWONY", "Koniec gry", MessageBoxButtons::OK, MessageBoxIcon::Information);
			switch (odp)
			{
			case System::Windows::Forms::DialogResult::OK:
				DateTime czas = DateTime::Now;
				String^ fileName = "textfile.txt";
				StreamWriter^ sw = gcnew StreamWriter("Wynik.txt", true);
				sw->WriteLine(czas.Day.ToString("D2") + "-" + czas.Month.ToString("D2") + "-" + czas.Year.ToString("D2") + " " + czas.DayOfWeek.ToString());
				sw->WriteLine("Iloœæ graczy: " + graczy);
				sw->WriteLine("");
				sw->WriteLine("Zwyciêzca: GRACZ CZERWONY");
				sw->WriteLine("");
				sw->WriteLine("GRACZ NIEBIESKI:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_b);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_b);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ¯Ó£TY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_y);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_y);
				sw->WriteLine("");
				sw->WriteLine("GRACZ ZIELONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_g);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_g);
				sw->WriteLine("");
				sw->WriteLine("GRACZ CZERWONY:");
				sw->WriteLine("Iloœæ zbiæ: " + bije_r);
				sw->WriteLine("Iloœæ wyrzuconych szóstek: " + szostka_r);
				sw->WriteLine("");
				sw->WriteLine("----------------------------------------");
				sw->WriteLine("");
				sw->Close();
				Close();
			}
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		System::Windows::Forms::DialogResult odp =
			MessageBox::Show("Witaj w grze 'Chiñczyk!' W zak³adce 'Nowa gra' wybierz liczbê graczy, aby rozpocz¹æ rozgrywkê.", "Przygotowanie", MessageBoxButtons::OK, MessageBoxIcon::Information, MessageBoxDefaultButton::Button1);
		switch (odp)
		{
		case System::Windows::Forms::DialogResult::OK:
			break;
		}
	}
			 System::Void move_b1()
			 {
				 if (b1_pole == 0) { this->pictureBox1->Location = System::Drawing::Point(309, 558); }
				 if (b1_pole == 1) { this->pictureBox1->Location = System::Drawing::Point(450, 605); }
				 if (b1_pole == 2) { this->pictureBox1->Location = System::Drawing::Point(450, 558); }
				 if (b1_pole == 3) { this->pictureBox1->Location = System::Drawing::Point(450, 511); }
				 if (b1_pole == 4) { this->pictureBox1->Location = System::Drawing::Point(450, 464); }
				 if (b1_pole == 5) { this->pictureBox1->Location = System::Drawing::Point(450, 417); }
				 if (b1_pole == 6) { this->pictureBox1->Location = System::Drawing::Point(403, 417); }
				 if (b1_pole == 7) { this->pictureBox1->Location = System::Drawing::Point(356, 417); }
				 if (b1_pole == 8) { this->pictureBox1->Location = System::Drawing::Point(309, 417); }
				 if (b1_pole == 9) { this->pictureBox1->Location = System::Drawing::Point(262, 417); }
				 if (b1_pole == 10) { this->pictureBox1->Location = System::Drawing::Point(262, 370); }
				 if (b1_pole == 11) { this->pictureBox1->Location = System::Drawing::Point(262, 323); }
				 if (b1_pole == 12) { this->pictureBox1->Location = System::Drawing::Point(309, 323); }
				 if (b1_pole == 13) { this->pictureBox1->Location = System::Drawing::Point(356, 323); }
				 if (b1_pole == 13) { this->pictureBox1->Location = System::Drawing::Point(356, 323); }
				 if (b1_pole == 13) { this->pictureBox1->Location = System::Drawing::Point(356, 323); }
				 if (b1_pole == 14) { this->pictureBox1->Location = System::Drawing::Point(403, 323); }
				 if (b1_pole == 15) { this->pictureBox1->Location = System::Drawing::Point(450, 323); }
				 if (b1_pole == 16) { this->pictureBox1->Location = System::Drawing::Point(450, 276); }
				 if (b1_pole == 17) { this->pictureBox1->Location = System::Drawing::Point(450, 229); }
				 if (b1_pole == 18) { this->pictureBox1->Location = System::Drawing::Point(450, 182); }
				 if (b1_pole == 19) { this->pictureBox1->Location = System::Drawing::Point(450, 135); }
				 if (b1_pole == 20) { this->pictureBox1->Location = System::Drawing::Point(497, 135); }
				 if (b1_pole == 21) { this->pictureBox1->Location = System::Drawing::Point(544, 135); }
				 if (b1_pole == 22) { this->pictureBox1->Location = System::Drawing::Point(544, 182); }
				 if (b1_pole == 23) { this->pictureBox1->Location = System::Drawing::Point(544, 229); }
				 if (b1_pole == 24) { this->pictureBox1->Location = System::Drawing::Point(544, 276); }
				 if (b1_pole == 25) { this->pictureBox1->Location = System::Drawing::Point(544, 323); }
				 if (b1_pole == 26) { this->pictureBox1->Location = System::Drawing::Point(591, 323); }
				 if (b1_pole == 27) { this->pictureBox1->Location = System::Drawing::Point(638, 323); }
				 if (b1_pole == 28) { this->pictureBox1->Location = System::Drawing::Point(685, 323); }
				 if (b1_pole == 29) { this->pictureBox1->Location = System::Drawing::Point(732, 323); }
				 if (b1_pole == 30) { this->pictureBox1->Location = System::Drawing::Point(732, 370); }
				 if (b1_pole == 31) { this->pictureBox1->Location = System::Drawing::Point(732, 417); }
				 if (b1_pole == 32) { this->pictureBox1->Location = System::Drawing::Point(685, 417); }
				 if (b1_pole == 33) { this->pictureBox1->Location = System::Drawing::Point(638, 417); }
				 if (b1_pole == 34) { this->pictureBox1->Location = System::Drawing::Point(591, 417); }
				 if (b1_pole == 35) { this->pictureBox1->Location = System::Drawing::Point(544, 417); }
				 if (b1_pole == 36) { this->pictureBox1->Location = System::Drawing::Point(544, 464); }
				 if (b1_pole == 37) { this->pictureBox1->Location = System::Drawing::Point(544, 511); }
				 if (b1_pole == 38) { this->pictureBox1->Location = System::Drawing::Point(544, 558); }
				 if (b1_pole == 39) { this->pictureBox1->Location = System::Drawing::Point(544, 605); }
				 if (b1_pole == 40) { this->pictureBox1->Location = System::Drawing::Point(497, 605); }
				 if (b1_pole == 41) { this->pictureBox1->Location = System::Drawing::Point(497, 558); }
				 if (b1_pole == 42) { this->pictureBox1->Location = System::Drawing::Point(497, 511); }
				 if (b1_pole == 43) { this->pictureBox1->Location = System::Drawing::Point(497, 464); }
				 if (b1_pole == 44) { this->pictureBox1->Location = System::Drawing::Point(497, 417); }
			 }
			 System::Void move_b2()
			 {
				 if (b2_pole == 0) { this->pictureBox2->Location = System::Drawing::Point(262, 558); }
				 if (b2_pole == 1) { this->pictureBox2->Location = System::Drawing::Point(450, 605); }
				 if (b2_pole == 2) { this->pictureBox2->Location = System::Drawing::Point(450, 558); }
				 if (b2_pole == 3) { this->pictureBox2->Location = System::Drawing::Point(450, 511); }
				 if (b2_pole == 4) { this->pictureBox2->Location = System::Drawing::Point(450, 464); }
				 if (b2_pole == 5) { this->pictureBox2->Location = System::Drawing::Point(450, 417); }
				 if (b2_pole == 6) { this->pictureBox2->Location = System::Drawing::Point(403, 417); }
				 if (b2_pole == 7) { this->pictureBox2->Location = System::Drawing::Point(356, 417); }
				 if (b2_pole == 8) { this->pictureBox2->Location = System::Drawing::Point(309, 417); }
				 if (b2_pole == 9) { this->pictureBox2->Location = System::Drawing::Point(262, 417); }
				 if (b2_pole == 10) { this->pictureBox2->Location = System::Drawing::Point(262, 370); }
				 if (b2_pole == 11) { this->pictureBox2->Location = System::Drawing::Point(262, 323); }
				 if (b2_pole == 12) { this->pictureBox2->Location = System::Drawing::Point(309, 323); }
				 if (b2_pole == 13) { this->pictureBox2->Location = System::Drawing::Point(356, 323); }
				 if (b2_pole == 14) { this->pictureBox2->Location = System::Drawing::Point(403, 323); }
				 if (b2_pole == 15) { this->pictureBox2->Location = System::Drawing::Point(450, 323); }
				 if (b2_pole == 16) { this->pictureBox2->Location = System::Drawing::Point(450, 276); }
				 if (b2_pole == 17) { this->pictureBox2->Location = System::Drawing::Point(450, 229); }
				 if (b2_pole == 18) { this->pictureBox2->Location = System::Drawing::Point(450, 182); }
				 if (b2_pole == 19) { this->pictureBox2->Location = System::Drawing::Point(450, 135); }
				 if (b2_pole == 20) { this->pictureBox2->Location = System::Drawing::Point(497, 135); }
				 if (b2_pole == 21) { this->pictureBox2->Location = System::Drawing::Point(544, 135); }
				 if (b2_pole == 22) { this->pictureBox2->Location = System::Drawing::Point(544, 182); }
				 if (b2_pole == 23) { this->pictureBox2->Location = System::Drawing::Point(544, 229); }
				 if (b2_pole == 24) { this->pictureBox2->Location = System::Drawing::Point(544, 276); }
				 if (b2_pole == 25) { this->pictureBox2->Location = System::Drawing::Point(544, 323); }
				 if (b2_pole == 26) { this->pictureBox2->Location = System::Drawing::Point(591, 323); }
				 if (b2_pole == 27) { this->pictureBox2->Location = System::Drawing::Point(638, 323); }
				 if (b2_pole == 28) { this->pictureBox2->Location = System::Drawing::Point(685, 323); }
				 if (b2_pole == 29) { this->pictureBox2->Location = System::Drawing::Point(732, 323); }
				 if (b2_pole == 30) { this->pictureBox2->Location = System::Drawing::Point(732, 370); }
				 if (b2_pole == 31) { this->pictureBox2->Location = System::Drawing::Point(732, 417); }
				 if (b2_pole == 32) { this->pictureBox2->Location = System::Drawing::Point(685, 417); }
				 if (b2_pole == 33) { this->pictureBox2->Location = System::Drawing::Point(638, 417); }
				 if (b2_pole == 34) { this->pictureBox2->Location = System::Drawing::Point(591, 417); }
				 if (b2_pole == 35) { this->pictureBox2->Location = System::Drawing::Point(544, 417); }
				 if (b2_pole == 36) { this->pictureBox2->Location = System::Drawing::Point(544, 464); }
				 if (b2_pole == 37) { this->pictureBox2->Location = System::Drawing::Point(544, 511); }
				 if (b2_pole == 38) { this->pictureBox2->Location = System::Drawing::Point(544, 558); }
				 if (b2_pole == 39) { this->pictureBox2->Location = System::Drawing::Point(544, 605); }
				 if (b2_pole == 40) { this->pictureBox2->Location = System::Drawing::Point(497, 605); }
				 if (b2_pole == 41) { this->pictureBox2->Location = System::Drawing::Point(497, 558); }
				 if (b2_pole == 42) { this->pictureBox2->Location = System::Drawing::Point(497, 511); }
				 if (b2_pole == 43) { this->pictureBox2->Location = System::Drawing::Point(497, 464); }
				 if (b2_pole == 44) { this->pictureBox2->Location = System::Drawing::Point(497, 417); }
			 }
			 System::Void move_b3()
			 {
				 if (b3_pole == 0) { this->pictureBox3->Location = System::Drawing::Point(309, 605); }
				 if (b3_pole == 1) { this->pictureBox3->Location = System::Drawing::Point(450, 605); }
				 if (b3_pole == 2) { this->pictureBox3->Location = System::Drawing::Point(450, 558); }
				 if (b3_pole == 3) { this->pictureBox3->Location = System::Drawing::Point(450, 511); }
				 if (b3_pole == 4) { this->pictureBox3->Location = System::Drawing::Point(450, 464); }
				 if (b3_pole == 5) { this->pictureBox3->Location = System::Drawing::Point(450, 417); }
				 if (b3_pole == 6) { this->pictureBox3->Location = System::Drawing::Point(403, 417); }
				 if (b3_pole == 7) { this->pictureBox3->Location = System::Drawing::Point(356, 417); }
				 if (b3_pole == 8) { this->pictureBox3->Location = System::Drawing::Point(309, 417); }
				 if (b3_pole == 9) { this->pictureBox3->Location = System::Drawing::Point(262, 417); }
				 if (b3_pole == 10) { this->pictureBox3->Location = System::Drawing::Point(262, 370); }
				 if (b3_pole == 11) { this->pictureBox3->Location = System::Drawing::Point(262, 323); }
				 if (b3_pole == 12) { this->pictureBox3->Location = System::Drawing::Point(309, 323); }
				 if (b3_pole == 13) { this->pictureBox3->Location = System::Drawing::Point(356, 323); }
				 if (b3_pole == 14) { this->pictureBox3->Location = System::Drawing::Point(403, 323); }
				 if (b3_pole == 15) { this->pictureBox3->Location = System::Drawing::Point(450, 323); }
				 if (b3_pole == 16) { this->pictureBox3->Location = System::Drawing::Point(450, 276); }
				 if (b3_pole == 17) { this->pictureBox3->Location = System::Drawing::Point(450, 229); }
				 if (b3_pole == 18) { this->pictureBox3->Location = System::Drawing::Point(450, 182); }
				 if (b3_pole == 19) { this->pictureBox3->Location = System::Drawing::Point(450, 135); }
				 if (b3_pole == 20) { this->pictureBox3->Location = System::Drawing::Point(497, 135); }
				 if (b3_pole == 21) { this->pictureBox3->Location = System::Drawing::Point(544, 135); }
				 if (b3_pole == 22) { this->pictureBox3->Location = System::Drawing::Point(544, 182); }
				 if (b3_pole == 23) { this->pictureBox3->Location = System::Drawing::Point(544, 229); }
				 if (b3_pole == 24) { this->pictureBox3->Location = System::Drawing::Point(544, 276); }
				 if (b3_pole == 25) { this->pictureBox3->Location = System::Drawing::Point(544, 323); }
				 if (b3_pole == 26) { this->pictureBox3->Location = System::Drawing::Point(591, 323); }
				 if (b3_pole == 27) { this->pictureBox3->Location = System::Drawing::Point(638, 323); }
				 if (b3_pole == 28) { this->pictureBox3->Location = System::Drawing::Point(685, 323); }
				 if (b3_pole == 29) { this->pictureBox3->Location = System::Drawing::Point(732, 323); }
				 if (b3_pole == 30) { this->pictureBox3->Location = System::Drawing::Point(732, 370); }
				 if (b3_pole == 31) { this->pictureBox3->Location = System::Drawing::Point(732, 417); }
				 if (b3_pole == 32) { this->pictureBox3->Location = System::Drawing::Point(685, 417); }
				 if (b3_pole == 33) { this->pictureBox3->Location = System::Drawing::Point(638, 417); }
				 if (b3_pole == 34) { this->pictureBox3->Location = System::Drawing::Point(591, 417); }
				 if (b3_pole == 35) { this->pictureBox3->Location = System::Drawing::Point(544, 417); }
				 if (b3_pole == 36) { this->pictureBox3->Location = System::Drawing::Point(544, 464); }
				 if (b3_pole == 37) { this->pictureBox3->Location = System::Drawing::Point(544, 511); }
				 if (b3_pole == 38) { this->pictureBox3->Location = System::Drawing::Point(544, 558); }
				 if (b3_pole == 39) { this->pictureBox3->Location = System::Drawing::Point(544, 605); }
				 if (b3_pole == 40) { this->pictureBox3->Location = System::Drawing::Point(497, 605); }
				 if (b3_pole == 41) { this->pictureBox3->Location = System::Drawing::Point(497, 558); }
				 if (b3_pole == 42) { this->pictureBox3->Location = System::Drawing::Point(497, 511); }
				 if (b3_pole == 43) { this->pictureBox3->Location = System::Drawing::Point(497, 464); }
				 if (b3_pole == 44) { this->pictureBox3->Location = System::Drawing::Point(497, 417); }
			 }
			 System::Void move_b4()
			 {
				 if (b4_pole == 0) { this->pictureBox4->Location = System::Drawing::Point(262, 605); }
				 if (b4_pole == 1) { this->pictureBox4->Location = System::Drawing::Point(450, 605); }
				 if (b4_pole == 2) { this->pictureBox4->Location = System::Drawing::Point(450, 558); }
				 if (b4_pole == 3) { this->pictureBox4->Location = System::Drawing::Point(450, 511); }
				 if (b4_pole == 4) { this->pictureBox4->Location = System::Drawing::Point(450, 464); }
				 if (b4_pole == 5) { this->pictureBox4->Location = System::Drawing::Point(450, 417); }
				 if (b4_pole == 6) { this->pictureBox4->Location = System::Drawing::Point(403, 417); }
				 if (b4_pole == 7) { this->pictureBox4->Location = System::Drawing::Point(356, 417); }
				 if (b4_pole == 8) { this->pictureBox4->Location = System::Drawing::Point(309, 417); }
				 if (b4_pole == 9) { this->pictureBox4->Location = System::Drawing::Point(262, 417); }
				 if (b4_pole == 10) { this->pictureBox4->Location = System::Drawing::Point(262, 370); }
				 if (b4_pole == 11) { this->pictureBox4->Location = System::Drawing::Point(262, 323); }
				 if (b4_pole == 12) { this->pictureBox4->Location = System::Drawing::Point(309, 323); }
				 if (b4_pole == 13) { this->pictureBox4->Location = System::Drawing::Point(356, 323); }
				 if (b4_pole == 14) { this->pictureBox4->Location = System::Drawing::Point(403, 323); }
				 if (b4_pole == 15) { this->pictureBox4->Location = System::Drawing::Point(450, 323); }
				 if (b4_pole == 16) { this->pictureBox4->Location = System::Drawing::Point(450, 276); }
				 if (b4_pole == 17) { this->pictureBox4->Location = System::Drawing::Point(450, 229); }
				 if (b4_pole == 18) { this->pictureBox4->Location = System::Drawing::Point(450, 182); }
				 if (b4_pole == 19) { this->pictureBox4->Location = System::Drawing::Point(450, 135); }
				 if (b4_pole == 20) { this->pictureBox4->Location = System::Drawing::Point(497, 135); }
				 if (b4_pole == 21) { this->pictureBox4->Location = System::Drawing::Point(544, 135); }
				 if (b4_pole == 22) { this->pictureBox4->Location = System::Drawing::Point(544, 182); }
				 if (b4_pole == 23) { this->pictureBox4->Location = System::Drawing::Point(544, 229); }
				 if (b4_pole == 24) { this->pictureBox4->Location = System::Drawing::Point(544, 276); }
				 if (b4_pole == 25) { this->pictureBox4->Location = System::Drawing::Point(544, 323); }
				 if (b4_pole == 26) { this->pictureBox4->Location = System::Drawing::Point(591, 323); }
				 if (b4_pole == 27) { this->pictureBox4->Location = System::Drawing::Point(638, 323); }
				 if (b4_pole == 28) { this->pictureBox4->Location = System::Drawing::Point(685, 323); }
				 if (b4_pole == 29) { this->pictureBox4->Location = System::Drawing::Point(732, 323); }
				 if (b4_pole == 30) { this->pictureBox4->Location = System::Drawing::Point(732, 370); }
				 if (b4_pole == 31) { this->pictureBox4->Location = System::Drawing::Point(732, 417); }
				 if (b4_pole == 32) { this->pictureBox4->Location = System::Drawing::Point(685, 417); }
				 if (b4_pole == 33) { this->pictureBox4->Location = System::Drawing::Point(638, 417); }
				 if (b4_pole == 34) { this->pictureBox4->Location = System::Drawing::Point(591, 417); }
				 if (b4_pole == 35) { this->pictureBox4->Location = System::Drawing::Point(544, 417); }
				 if (b4_pole == 36) { this->pictureBox4->Location = System::Drawing::Point(544, 464); }
				 if (b4_pole == 37) { this->pictureBox4->Location = System::Drawing::Point(544, 511); }
				 if (b4_pole == 38) { this->pictureBox4->Location = System::Drawing::Point(544, 558); }
				 if (b4_pole == 39) { this->pictureBox4->Location = System::Drawing::Point(544, 605); }
				 if (b4_pole == 40) { this->pictureBox4->Location = System::Drawing::Point(497, 605); }
				 if (b4_pole == 41) { this->pictureBox4->Location = System::Drawing::Point(497, 558); }
				 if (b4_pole == 42) { this->pictureBox4->Location = System::Drawing::Point(497, 511); }
				 if (b4_pole == 43) { this->pictureBox4->Location = System::Drawing::Point(497, 464); }
				 if (b4_pole == 44) { this->pictureBox4->Location = System::Drawing::Point(497, 417); }
			 }
			 System::Void move_y1()
			 {
				 if (y1_pole == 0) { this->pictureBox5->Location = System::Drawing::Point(309, 135); }
				 if (y1_pole == 1) { this->pictureBox5->Location = System::Drawing::Point(262, 323); }
				 if (y1_pole == 2) { this->pictureBox5->Location = System::Drawing::Point(309, 323); }
				 if (y1_pole == 3) { this->pictureBox5->Location = System::Drawing::Point(356, 323); }
				 if (y1_pole == 4) { this->pictureBox5->Location = System::Drawing::Point(403, 323); }
				 if (y1_pole == 5) { this->pictureBox5->Location = System::Drawing::Point(450, 323); }
				 if (y1_pole == 6) { this->pictureBox5->Location = System::Drawing::Point(450, 276); }
				 if (y1_pole == 7) { this->pictureBox5->Location = System::Drawing::Point(450, 229); }
				 if (y1_pole == 8) { this->pictureBox5->Location = System::Drawing::Point(450, 182); }
				 if (y1_pole == 9) { this->pictureBox5->Location = System::Drawing::Point(450, 135); }
				 if (y1_pole == 10) { this->pictureBox5->Location = System::Drawing::Point(497, 135); }
				 if (y1_pole == 11) { this->pictureBox5->Location = System::Drawing::Point(544, 135); }
				 if (y1_pole == 12) { this->pictureBox5->Location = System::Drawing::Point(544, 182); }
				 if (y1_pole == 13) { this->pictureBox5->Location = System::Drawing::Point(544, 229); }
				 if (y1_pole == 14) { this->pictureBox5->Location = System::Drawing::Point(544, 276); }
				 if (y1_pole == 15) { this->pictureBox5->Location = System::Drawing::Point(544, 323); }
				 if (y1_pole == 16) { this->pictureBox5->Location = System::Drawing::Point(591, 323); }
				 if (y1_pole == 17) { this->pictureBox5->Location = System::Drawing::Point(638, 323); }
				 if (y1_pole == 18) { this->pictureBox5->Location = System::Drawing::Point(685, 323); }
				 if (y1_pole == 19) { this->pictureBox5->Location = System::Drawing::Point(732, 323); }
				 if (y1_pole == 20) { this->pictureBox5->Location = System::Drawing::Point(732, 370); }
				 if (y1_pole == 21) { this->pictureBox5->Location = System::Drawing::Point(732, 417); }
				 if (y1_pole == 22) { this->pictureBox5->Location = System::Drawing::Point(685, 417); }
				 if (y1_pole == 23) { this->pictureBox5->Location = System::Drawing::Point(638, 417); }
				 if (y1_pole == 24) { this->pictureBox5->Location = System::Drawing::Point(591, 417); }
				 if (y1_pole == 25) { this->pictureBox5->Location = System::Drawing::Point(544, 417); }
				 if (y1_pole == 26) { this->pictureBox5->Location = System::Drawing::Point(544, 464); }
				 if (y1_pole == 27) { this->pictureBox5->Location = System::Drawing::Point(544, 511); }
				 if (y1_pole == 28) { this->pictureBox5->Location = System::Drawing::Point(544, 558); }
				 if (y1_pole == 29) { this->pictureBox5->Location = System::Drawing::Point(544, 605); }
				 if (y1_pole == 30) { this->pictureBox5->Location = System::Drawing::Point(497, 605); }
				 if (y1_pole == 31) { this->pictureBox5->Location = System::Drawing::Point(450, 605); }
				 if (y1_pole == 32) { this->pictureBox5->Location = System::Drawing::Point(450, 558); }
				 if (y1_pole == 33) { this->pictureBox5->Location = System::Drawing::Point(450, 511); }
				 if (y1_pole == 34) { this->pictureBox5->Location = System::Drawing::Point(450, 464); }
				 if (y1_pole == 35) { this->pictureBox5->Location = System::Drawing::Point(450, 417); }
				 if (y1_pole == 36) { this->pictureBox5->Location = System::Drawing::Point(403, 417); }
				 if (y1_pole == 37) { this->pictureBox5->Location = System::Drawing::Point(356, 417); }
				 if (y1_pole == 38) { this->pictureBox5->Location = System::Drawing::Point(309, 417); }
				 if (y1_pole == 39) { this->pictureBox5->Location = System::Drawing::Point(262, 417); }
				 if (y1_pole == 40) { this->pictureBox5->Location = System::Drawing::Point(262, 370); }
				 if (y1_pole == 41) { this->pictureBox5->Location = System::Drawing::Point(309, 370); }
				 if (y1_pole == 42) { this->pictureBox5->Location = System::Drawing::Point(356, 370); }
				 if (y1_pole == 43) { this->pictureBox5->Location = System::Drawing::Point(403, 370); }
				 if (y1_pole == 44) { this->pictureBox5->Location = System::Drawing::Point(450, 370); }
			 }
			 System::Void move_y2()
			 {
				 if (y2_pole == 0) { this->pictureBox6->Location = System::Drawing::Point(262, 135); }
				 if (y2_pole == 1) { this->pictureBox6->Location = System::Drawing::Point(262, 323); }
				 if (y2_pole == 2) { this->pictureBox6->Location = System::Drawing::Point(309, 323); }
				 if (y2_pole == 3) { this->pictureBox6->Location = System::Drawing::Point(356, 323); }
				 if (y2_pole == 4) { this->pictureBox6->Location = System::Drawing::Point(403, 323); }
				 if (y2_pole == 5) { this->pictureBox6->Location = System::Drawing::Point(450, 323); }
				 if (y2_pole == 6) { this->pictureBox6->Location = System::Drawing::Point(450, 276); }
				 if (y2_pole == 7) { this->pictureBox6->Location = System::Drawing::Point(450, 229); }
				 if (y2_pole == 8) { this->pictureBox6->Location = System::Drawing::Point(450, 182); }
				 if (y2_pole == 9) { this->pictureBox6->Location = System::Drawing::Point(450, 135); }
				 if (y2_pole == 10) { this->pictureBox6->Location = System::Drawing::Point(497, 135); }
				 if (y2_pole == 11) { this->pictureBox6->Location = System::Drawing::Point(544, 135); }
				 if (y2_pole == 12) { this->pictureBox6->Location = System::Drawing::Point(544, 182); }
				 if (y2_pole == 13) { this->pictureBox6->Location = System::Drawing::Point(544, 229); }
				 if (y2_pole == 14) { this->pictureBox6->Location = System::Drawing::Point(544, 276); }
				 if (y2_pole == 15) { this->pictureBox6->Location = System::Drawing::Point(544, 323); }
				 if (y2_pole == 16) { this->pictureBox6->Location = System::Drawing::Point(591, 323); }
				 if (y2_pole == 17) { this->pictureBox6->Location = System::Drawing::Point(638, 323); }
				 if (y2_pole == 18) { this->pictureBox6->Location = System::Drawing::Point(685, 323); }
				 if (y2_pole == 19) { this->pictureBox6->Location = System::Drawing::Point(732, 323); }
				 if (y2_pole == 20) { this->pictureBox6->Location = System::Drawing::Point(732, 370); }
				 if (y2_pole == 21) { this->pictureBox6->Location = System::Drawing::Point(732, 417); }
				 if (y2_pole == 22) { this->pictureBox6->Location = System::Drawing::Point(685, 417); }
				 if (y2_pole == 23) { this->pictureBox6->Location = System::Drawing::Point(638, 417); }
				 if (y2_pole == 24) { this->pictureBox6->Location = System::Drawing::Point(591, 417); }
				 if (y2_pole == 25) { this->pictureBox6->Location = System::Drawing::Point(544, 417); }
				 if (y2_pole == 26) { this->pictureBox6->Location = System::Drawing::Point(544, 464); }
				 if (y2_pole == 27) { this->pictureBox6->Location = System::Drawing::Point(544, 511); }
				 if (y2_pole == 28) { this->pictureBox6->Location = System::Drawing::Point(544, 558); }
				 if (y2_pole == 29) { this->pictureBox6->Location = System::Drawing::Point(544, 605); }
				 if (y2_pole == 30) { this->pictureBox6->Location = System::Drawing::Point(497, 605); }
				 if (y2_pole == 31) { this->pictureBox6->Location = System::Drawing::Point(450, 605); }
				 if (y2_pole == 32) { this->pictureBox6->Location = System::Drawing::Point(450, 558); }
				 if (y2_pole == 33) { this->pictureBox6->Location = System::Drawing::Point(450, 511); }
				 if (y2_pole == 34) { this->pictureBox6->Location = System::Drawing::Point(450, 464); }
				 if (y2_pole == 35) { this->pictureBox6->Location = System::Drawing::Point(450, 417); }
				 if (y2_pole == 36) { this->pictureBox6->Location = System::Drawing::Point(403, 417); }
				 if (y2_pole == 37) { this->pictureBox6->Location = System::Drawing::Point(356, 417); }
				 if (y2_pole == 38) { this->pictureBox6->Location = System::Drawing::Point(309, 417); }
				 if (y2_pole == 39) { this->pictureBox6->Location = System::Drawing::Point(262, 417); }
				 if (y2_pole == 40) { this->pictureBox6->Location = System::Drawing::Point(262, 370); }
				 if (y2_pole == 41) { this->pictureBox6->Location = System::Drawing::Point(309, 370); }
				 if (y2_pole == 42) { this->pictureBox6->Location = System::Drawing::Point(356, 370); }
				 if (y2_pole == 43) { this->pictureBox6->Location = System::Drawing::Point(403, 370); }
				 if (y2_pole == 44) { this->pictureBox6->Location = System::Drawing::Point(450, 370); }
			 }
			 System::Void move_y3()
			 {
				 if (y3_pole == 0) { this->pictureBox7->Location = System::Drawing::Point(309, 182); }
				 if (y3_pole == 1) { this->pictureBox7->Location = System::Drawing::Point(262, 323); }
				 if (y3_pole == 2) { this->pictureBox7->Location = System::Drawing::Point(309, 323); }
				 if (y3_pole == 3) { this->pictureBox7->Location = System::Drawing::Point(356, 323); }
				 if (y3_pole == 4) { this->pictureBox7->Location = System::Drawing::Point(403, 323); }
				 if (y3_pole == 5) { this->pictureBox7->Location = System::Drawing::Point(450, 323); }
				 if (y3_pole == 6) { this->pictureBox7->Location = System::Drawing::Point(450, 276); }
				 if (y3_pole == 7) { this->pictureBox7->Location = System::Drawing::Point(450, 229); }
				 if (y3_pole == 8) { this->pictureBox7->Location = System::Drawing::Point(450, 182); }
				 if (y3_pole == 9) { this->pictureBox7->Location = System::Drawing::Point(450, 135); }
				 if (y3_pole == 10) { this->pictureBox7->Location = System::Drawing::Point(497, 135); }
				 if (y3_pole == 11) { this->pictureBox7->Location = System::Drawing::Point(544, 135); }
				 if (y3_pole == 12) { this->pictureBox7->Location = System::Drawing::Point(544, 182); }
				 if (y3_pole == 13) { this->pictureBox7->Location = System::Drawing::Point(544, 229); }
				 if (y3_pole == 14) { this->pictureBox7->Location = System::Drawing::Point(544, 276); }
				 if (y3_pole == 15) { this->pictureBox7->Location = System::Drawing::Point(544, 323); }
				 if (y3_pole == 16) { this->pictureBox7->Location = System::Drawing::Point(591, 323); }
				 if (y3_pole == 17) { this->pictureBox7->Location = System::Drawing::Point(638, 323); }
				 if (y3_pole == 18) { this->pictureBox7->Location = System::Drawing::Point(685, 323); }
				 if (y3_pole == 19) { this->pictureBox7->Location = System::Drawing::Point(732, 323); }
				 if (y3_pole == 20) { this->pictureBox7->Location = System::Drawing::Point(732, 370); }
				 if (y3_pole == 21) { this->pictureBox7->Location = System::Drawing::Point(732, 417); }
				 if (y3_pole == 22) { this->pictureBox7->Location = System::Drawing::Point(685, 417); }
				 if (y3_pole == 23) { this->pictureBox7->Location = System::Drawing::Point(638, 417); }
				 if (y3_pole == 24) { this->pictureBox7->Location = System::Drawing::Point(591, 417); }
				 if (y3_pole == 25) { this->pictureBox7->Location = System::Drawing::Point(544, 417); }
				 if (y3_pole == 26) { this->pictureBox7->Location = System::Drawing::Point(544, 464); }
				 if (y3_pole == 27) { this->pictureBox7->Location = System::Drawing::Point(544, 511); }
				 if (y3_pole == 28) { this->pictureBox7->Location = System::Drawing::Point(544, 558); }
				 if (y3_pole == 29) { this->pictureBox7->Location = System::Drawing::Point(544, 605); }
				 if (y3_pole == 30) { this->pictureBox7->Location = System::Drawing::Point(497, 605); }
				 if (y3_pole == 31) { this->pictureBox7->Location = System::Drawing::Point(450, 605); }
				 if (y3_pole == 32) { this->pictureBox7->Location = System::Drawing::Point(450, 558); }
				 if (y3_pole == 33) { this->pictureBox7->Location = System::Drawing::Point(450, 511); }
				 if (y3_pole == 34) { this->pictureBox7->Location = System::Drawing::Point(450, 464); }
				 if (y3_pole == 35) { this->pictureBox7->Location = System::Drawing::Point(450, 417); }
				 if (y3_pole == 36) { this->pictureBox7->Location = System::Drawing::Point(403, 417); }
				 if (y3_pole == 37) { this->pictureBox7->Location = System::Drawing::Point(356, 417); }
				 if (y3_pole == 38) { this->pictureBox7->Location = System::Drawing::Point(309, 417); }
				 if (y3_pole == 39) { this->pictureBox7->Location = System::Drawing::Point(262, 417); }
				 if (y3_pole == 40) { this->pictureBox7->Location = System::Drawing::Point(262, 370); }
				 if (y3_pole == 41) { this->pictureBox7->Location = System::Drawing::Point(309, 370); }
				 if (y3_pole == 42) { this->pictureBox7->Location = System::Drawing::Point(356, 370); }
				 if (y3_pole == 43) { this->pictureBox7->Location = System::Drawing::Point(403, 370); }
				 if (y3_pole == 44) { this->pictureBox7->Location = System::Drawing::Point(450, 370); }
			 }
			 System::Void move_y4()
			 {
				 if (y4_pole == 0) { this->pictureBox8->Location = System::Drawing::Point(262, 182); }
				 if (y4_pole == 1) { this->pictureBox8->Location = System::Drawing::Point(262, 323); }
				 if (y4_pole == 2) { this->pictureBox8->Location = System::Drawing::Point(309, 323); }
				 if (y4_pole == 3) { this->pictureBox8->Location = System::Drawing::Point(356, 323); }
				 if (y4_pole == 4) { this->pictureBox8->Location = System::Drawing::Point(403, 323); }
				 if (y4_pole == 5) { this->pictureBox8->Location = System::Drawing::Point(450, 323); }
				 if (y4_pole == 6) { this->pictureBox8->Location = System::Drawing::Point(450, 276); }
				 if (y4_pole == 7) { this->pictureBox8->Location = System::Drawing::Point(450, 229); }
				 if (y4_pole == 8) { this->pictureBox8->Location = System::Drawing::Point(450, 182); }
				 if (y4_pole == 9) { this->pictureBox8->Location = System::Drawing::Point(450, 135); }
				 if (y4_pole == 10) { this->pictureBox8->Location = System::Drawing::Point(497, 135); }
				 if (y4_pole == 11) { this->pictureBox8->Location = System::Drawing::Point(544, 135); }
				 if (y4_pole == 12) { this->pictureBox8->Location = System::Drawing::Point(544, 182); }
				 if (y4_pole == 13) { this->pictureBox8->Location = System::Drawing::Point(544, 229); }
				 if (y4_pole == 14) { this->pictureBox8->Location = System::Drawing::Point(544, 276); }
				 if (y4_pole == 15) { this->pictureBox8->Location = System::Drawing::Point(544, 323); }
				 if (y4_pole == 16) { this->pictureBox8->Location = System::Drawing::Point(591, 323); }
				 if (y4_pole == 17) { this->pictureBox8->Location = System::Drawing::Point(638, 323); }
				 if (y4_pole == 18) { this->pictureBox8->Location = System::Drawing::Point(685, 323); }
				 if (y4_pole == 19) { this->pictureBox8->Location = System::Drawing::Point(732, 323); }
				 if (y4_pole == 20) { this->pictureBox8->Location = System::Drawing::Point(732, 370); }
				 if (y4_pole == 21) { this->pictureBox8->Location = System::Drawing::Point(732, 417); }
				 if (y4_pole == 22) { this->pictureBox8->Location = System::Drawing::Point(685, 417); }
				 if (y4_pole == 23) { this->pictureBox8->Location = System::Drawing::Point(638, 417); }
				 if (y4_pole == 24) { this->pictureBox8->Location = System::Drawing::Point(591, 417); }
				 if (y4_pole == 25) { this->pictureBox8->Location = System::Drawing::Point(544, 417); }
				 if (y4_pole == 26) { this->pictureBox8->Location = System::Drawing::Point(544, 464); }
				 if (y4_pole == 27) { this->pictureBox8->Location = System::Drawing::Point(544, 511); }
				 if (y4_pole == 28) { this->pictureBox8->Location = System::Drawing::Point(544, 558); }
				 if (y4_pole == 29) { this->pictureBox8->Location = System::Drawing::Point(544, 605); }
				 if (y4_pole == 30) { this->pictureBox8->Location = System::Drawing::Point(497, 605); }
				 if (y4_pole == 31) { this->pictureBox8->Location = System::Drawing::Point(450, 605); }
				 if (y4_pole == 32) { this->pictureBox8->Location = System::Drawing::Point(450, 558); }
				 if (y4_pole == 33) { this->pictureBox8->Location = System::Drawing::Point(450, 511); }
				 if (y4_pole == 34) { this->pictureBox8->Location = System::Drawing::Point(450, 464); }
				 if (y4_pole == 35) { this->pictureBox8->Location = System::Drawing::Point(450, 417); }
				 if (y4_pole == 36) { this->pictureBox8->Location = System::Drawing::Point(403, 417); }
				 if (y4_pole == 37) { this->pictureBox8->Location = System::Drawing::Point(356, 417); }
				 if (y4_pole == 38) { this->pictureBox8->Location = System::Drawing::Point(309, 417); }
				 if (y4_pole == 39) { this->pictureBox8->Location = System::Drawing::Point(262, 417); }
				 if (y4_pole == 40) { this->pictureBox8->Location = System::Drawing::Point(262, 370); }
				 if (y4_pole == 41) { this->pictureBox8->Location = System::Drawing::Point(309, 370); }
				 if (y4_pole == 42) { this->pictureBox8->Location = System::Drawing::Point(356, 370); }
				 if (y4_pole == 43) { this->pictureBox8->Location = System::Drawing::Point(403, 370); }
				 if (y4_pole == 44) { this->pictureBox8->Location = System::Drawing::Point(450, 370); }
			 }
			 System::Void move_g1()
			 {
				 if (g1_pole == 0) { this->pictureBox9->Location = System::Drawing::Point(732, 135); }
				 if (g1_pole == 1) { this->pictureBox9->Location = System::Drawing::Point(544, 135); }
				 if (g1_pole == 2) { this->pictureBox9->Location = System::Drawing::Point(544, 182); }
				 if (g1_pole == 3) { this->pictureBox9->Location = System::Drawing::Point(544, 229); }
				 if (g1_pole == 4) { this->pictureBox9->Location = System::Drawing::Point(544, 276); }
				 if (g1_pole == 5) { this->pictureBox9->Location = System::Drawing::Point(544, 323); }
				 if (g1_pole == 6) { this->pictureBox9->Location = System::Drawing::Point(591, 323); }
				 if (g1_pole == 7) { this->pictureBox9->Location = System::Drawing::Point(638, 323); }
				 if (g1_pole == 8) { this->pictureBox9->Location = System::Drawing::Point(685, 323); }
				 if (g1_pole == 9) { this->pictureBox9->Location = System::Drawing::Point(732, 323); }
				 if (g1_pole == 10) { this->pictureBox9->Location = System::Drawing::Point(732, 370); }
				 if (g1_pole == 11) { this->pictureBox9->Location = System::Drawing::Point(732, 417); }
				 if (g1_pole == 12) { this->pictureBox9->Location = System::Drawing::Point(685, 417); }
				 if (g1_pole == 13) { this->pictureBox9->Location = System::Drawing::Point(638, 417); }
				 if (g1_pole == 14) { this->pictureBox9->Location = System::Drawing::Point(591, 417); }
				 if (g1_pole == 15) { this->pictureBox9->Location = System::Drawing::Point(544, 417); }
				 if (g1_pole == 16) { this->pictureBox9->Location = System::Drawing::Point(544, 464); }
				 if (g1_pole == 17) { this->pictureBox9->Location = System::Drawing::Point(544, 511); }
				 if (g1_pole == 18) { this->pictureBox9->Location = System::Drawing::Point(544, 558); }
				 if (g1_pole == 19) { this->pictureBox9->Location = System::Drawing::Point(544, 605); }
				 if (g1_pole == 20) { this->pictureBox9->Location = System::Drawing::Point(497, 605); }
				 if (g1_pole == 21) { this->pictureBox9->Location = System::Drawing::Point(450, 605); }
				 if (g1_pole == 22) { this->pictureBox9->Location = System::Drawing::Point(450, 558); }
				 if (g1_pole == 23) { this->pictureBox9->Location = System::Drawing::Point(450, 511); }
				 if (g1_pole == 24) { this->pictureBox9->Location = System::Drawing::Point(450, 464); }
				 if (g1_pole == 25) { this->pictureBox9->Location = System::Drawing::Point(450, 417); }
				 if (g1_pole == 26) { this->pictureBox9->Location = System::Drawing::Point(403, 417); }
				 if (g1_pole == 27) { this->pictureBox9->Location = System::Drawing::Point(356, 417); }
				 if (g1_pole == 28) { this->pictureBox9->Location = System::Drawing::Point(309, 417); }
				 if (g1_pole == 29) { this->pictureBox9->Location = System::Drawing::Point(262, 417); }
				 if (g1_pole == 30) { this->pictureBox9->Location = System::Drawing::Point(262, 370); }
				 if (g1_pole == 31) { this->pictureBox9->Location = System::Drawing::Point(262, 323); }
				 if (g1_pole == 32) { this->pictureBox9->Location = System::Drawing::Point(309, 323); }
				 if (g1_pole == 33) { this->pictureBox9->Location = System::Drawing::Point(356, 323); }
				 if (g1_pole == 34) { this->pictureBox9->Location = System::Drawing::Point(403, 323); }
				 if (g1_pole == 35) { this->pictureBox9->Location = System::Drawing::Point(450, 323); }
				 if (g1_pole == 36) { this->pictureBox9->Location = System::Drawing::Point(450, 276); }
				 if (g1_pole == 37) { this->pictureBox9->Location = System::Drawing::Point(450, 229); }
				 if (g1_pole == 38) { this->pictureBox9->Location = System::Drawing::Point(450, 182); }
				 if (g1_pole == 39) { this->pictureBox9->Location = System::Drawing::Point(450, 135); }
				 if (g1_pole == 40) { this->pictureBox9->Location = System::Drawing::Point(497, 135); }
				 if (g1_pole == 41) { this->pictureBox9->Location = System::Drawing::Point(497, 182); }
				 if (g1_pole == 42) { this->pictureBox9->Location = System::Drawing::Point(497, 229); }
				 if (g1_pole == 43) { this->pictureBox9->Location = System::Drawing::Point(497, 276); }
				 if (g1_pole == 44) { this->pictureBox9->Location = System::Drawing::Point(497, 323); }
			 }
			 System::Void move_g2()
			 {
				 if (g2_pole == 0) { this->pictureBox10->Location = System::Drawing::Point(685, 135); }
				 if (g2_pole == 1) { this->pictureBox10->Location = System::Drawing::Point(544, 135); }
				 if (g2_pole == 2) { this->pictureBox10->Location = System::Drawing::Point(544, 182); }
				 if (g2_pole == 3) { this->pictureBox10->Location = System::Drawing::Point(544, 229); }
				 if (g2_pole == 4) { this->pictureBox10->Location = System::Drawing::Point(544, 276); }
				 if (g2_pole == 5) { this->pictureBox10->Location = System::Drawing::Point(544, 323); }
				 if (g2_pole == 6) { this->pictureBox10->Location = System::Drawing::Point(591, 323); }
				 if (g2_pole == 7) { this->pictureBox10->Location = System::Drawing::Point(638, 323); }
				 if (g2_pole == 8) { this->pictureBox10->Location = System::Drawing::Point(685, 323); }
				 if (g2_pole == 9) { this->pictureBox10->Location = System::Drawing::Point(732, 323); }
				 if (g2_pole == 10) { this->pictureBox10->Location = System::Drawing::Point(732, 370); }
				 if (g2_pole == 11) { this->pictureBox10->Location = System::Drawing::Point(732, 417); }
				 if (g2_pole == 12) { this->pictureBox10->Location = System::Drawing::Point(685, 417); }
				 if (g2_pole == 13) { this->pictureBox10->Location = System::Drawing::Point(638, 417); }
				 if (g2_pole == 14) { this->pictureBox10->Location = System::Drawing::Point(591, 417); }
				 if (g2_pole == 15) { this->pictureBox10->Location = System::Drawing::Point(544, 417); }
				 if (g2_pole == 16) { this->pictureBox10->Location = System::Drawing::Point(544, 464); }
				 if (g2_pole == 17) { this->pictureBox10->Location = System::Drawing::Point(544, 511); }
				 if (g2_pole == 18) { this->pictureBox10->Location = System::Drawing::Point(544, 558); }
				 if (g2_pole == 19) { this->pictureBox10->Location = System::Drawing::Point(544, 605); }
				 if (g2_pole == 20) { this->pictureBox10->Location = System::Drawing::Point(497, 605); }
				 if (g2_pole == 21) { this->pictureBox10->Location = System::Drawing::Point(450, 605); }
				 if (g2_pole == 22) { this->pictureBox10->Location = System::Drawing::Point(450, 558); }
				 if (g2_pole == 23) { this->pictureBox10->Location = System::Drawing::Point(450, 511); }
				 if (g2_pole == 24) { this->pictureBox10->Location = System::Drawing::Point(450, 464); }
				 if (g2_pole == 25) { this->pictureBox10->Location = System::Drawing::Point(450, 417); }
				 if (g2_pole == 26) { this->pictureBox10->Location = System::Drawing::Point(403, 417); }
				 if (g2_pole == 27) { this->pictureBox10->Location = System::Drawing::Point(356, 417); }
				 if (g2_pole == 28) { this->pictureBox10->Location = System::Drawing::Point(309, 417); }
				 if (g2_pole == 29) { this->pictureBox10->Location = System::Drawing::Point(262, 417); }
				 if (g2_pole == 30) { this->pictureBox10->Location = System::Drawing::Point(262, 370); }
				 if (g2_pole == 31) { this->pictureBox10->Location = System::Drawing::Point(262, 323); }
				 if (g2_pole == 32) { this->pictureBox10->Location = System::Drawing::Point(309, 323); }
				 if (g2_pole == 33) { this->pictureBox10->Location = System::Drawing::Point(356, 323); }
				 if (g2_pole == 34) { this->pictureBox10->Location = System::Drawing::Point(403, 323); }
				 if (g2_pole == 35) { this->pictureBox10->Location = System::Drawing::Point(450, 323); }
				 if (g2_pole == 36) { this->pictureBox10->Location = System::Drawing::Point(450, 276); }
				 if (g2_pole == 37) { this->pictureBox10->Location = System::Drawing::Point(450, 229); }
				 if (g2_pole == 38) { this->pictureBox10->Location = System::Drawing::Point(450, 182); }
				 if (g2_pole == 39) { this->pictureBox10->Location = System::Drawing::Point(450, 135); }
				 if (g2_pole == 40) { this->pictureBox10->Location = System::Drawing::Point(497, 135); }
				 if (g2_pole == 41) { this->pictureBox10->Location = System::Drawing::Point(497, 182); }
				 if (g2_pole == 42) { this->pictureBox10->Location = System::Drawing::Point(497, 229); }
				 if (g2_pole == 43) { this->pictureBox10->Location = System::Drawing::Point(497, 276); }
				 if (g2_pole == 44) { this->pictureBox10->Location = System::Drawing::Point(497, 323); }
			 }
			 System::Void move_g3()
			 {
				 if (g3_pole == 0) { this->pictureBox11->Location = System::Drawing::Point(732, 182); }
				 if (g3_pole == 1) { this->pictureBox11->Location = System::Drawing::Point(544, 135); }
				 if (g3_pole == 2) { this->pictureBox11->Location = System::Drawing::Point(544, 182); }
				 if (g3_pole == 3) { this->pictureBox11->Location = System::Drawing::Point(544, 229); }
				 if (g3_pole == 4) { this->pictureBox11->Location = System::Drawing::Point(544, 276); }
				 if (g3_pole == 5) { this->pictureBox11->Location = System::Drawing::Point(544, 323); }
				 if (g3_pole == 6) { this->pictureBox11->Location = System::Drawing::Point(591, 323); }
				 if (g3_pole == 7) { this->pictureBox11->Location = System::Drawing::Point(638, 323); }
				 if (g3_pole == 8) { this->pictureBox11->Location = System::Drawing::Point(685, 323); }
				 if (g3_pole == 9) { this->pictureBox11->Location = System::Drawing::Point(732, 323); }
				 if (g3_pole == 10) { this->pictureBox11->Location = System::Drawing::Point(732, 370); }
				 if (g3_pole == 11) { this->pictureBox11->Location = System::Drawing::Point(732, 417); }
				 if (g3_pole == 12) { this->pictureBox11->Location = System::Drawing::Point(685, 417); }
				 if (g3_pole == 13) { this->pictureBox11->Location = System::Drawing::Point(638, 417); }
				 if (g3_pole == 14) { this->pictureBox11->Location = System::Drawing::Point(591, 417); }
				 if (g3_pole == 15) { this->pictureBox11->Location = System::Drawing::Point(544, 417); }
				 if (g3_pole == 16) { this->pictureBox11->Location = System::Drawing::Point(544, 464); }
				 if (g3_pole == 17) { this->pictureBox11->Location = System::Drawing::Point(544, 511); }
				 if (g3_pole == 18) { this->pictureBox11->Location = System::Drawing::Point(544, 558); }
				 if (g3_pole == 19) { this->pictureBox11->Location = System::Drawing::Point(544, 605); }
				 if (g3_pole == 20) { this->pictureBox11->Location = System::Drawing::Point(497, 605); }
				 if (g3_pole == 21) { this->pictureBox11->Location = System::Drawing::Point(450, 605); }
				 if (g3_pole == 22) { this->pictureBox11->Location = System::Drawing::Point(450, 558); }
				 if (g3_pole == 23) { this->pictureBox11->Location = System::Drawing::Point(450, 511); }
				 if (g3_pole == 24) { this->pictureBox11->Location = System::Drawing::Point(450, 464); }
				 if (g3_pole == 25) { this->pictureBox11->Location = System::Drawing::Point(450, 417); }
				 if (g3_pole == 26) { this->pictureBox11->Location = System::Drawing::Point(403, 417); }
				 if (g3_pole == 27) { this->pictureBox11->Location = System::Drawing::Point(356, 417); }
				 if (g3_pole == 28) { this->pictureBox11->Location = System::Drawing::Point(309, 417); }
				 if (g3_pole == 29) { this->pictureBox11->Location = System::Drawing::Point(262, 417); }
				 if (g3_pole == 30) { this->pictureBox11->Location = System::Drawing::Point(262, 370); }
				 if (g3_pole == 31) { this->pictureBox11->Location = System::Drawing::Point(262, 323); }
				 if (g3_pole == 32) { this->pictureBox11->Location = System::Drawing::Point(309, 323); }
				 if (g3_pole == 33) { this->pictureBox11->Location = System::Drawing::Point(356, 323); }
				 if (g3_pole == 34) { this->pictureBox11->Location = System::Drawing::Point(403, 323); }
				 if (g3_pole == 35) { this->pictureBox11->Location = System::Drawing::Point(450, 323); }
				 if (g3_pole == 36) { this->pictureBox11->Location = System::Drawing::Point(450, 276); }
				 if (g3_pole == 37) { this->pictureBox11->Location = System::Drawing::Point(450, 229); }
				 if (g3_pole == 38) { this->pictureBox11->Location = System::Drawing::Point(450, 182); }
				 if (g3_pole == 39) { this->pictureBox11->Location = System::Drawing::Point(450, 135); }
				 if (g3_pole == 40) { this->pictureBox11->Location = System::Drawing::Point(497, 135); }
				 if (g3_pole == 41) { this->pictureBox11->Location = System::Drawing::Point(497, 182); }
				 if (g3_pole == 42) { this->pictureBox11->Location = System::Drawing::Point(497, 229); }
				 if (g3_pole == 43) { this->pictureBox11->Location = System::Drawing::Point(497, 276); }
				 if (g3_pole == 44) { this->pictureBox11->Location = System::Drawing::Point(497, 323); }
			 }
			 System::Void move_g4()
			 {
				 if (g4_pole == 0) { this->pictureBox12->Location = System::Drawing::Point(685, 182); }
				 if (g4_pole == 1) { this->pictureBox12->Location = System::Drawing::Point(544, 135); }
				 if (g4_pole == 2) { this->pictureBox12->Location = System::Drawing::Point(544, 182); }
				 if (g4_pole == 3) { this->pictureBox12->Location = System::Drawing::Point(544, 229); }
				 if (g4_pole == 4) { this->pictureBox12->Location = System::Drawing::Point(544, 276); }
				 if (g4_pole == 5) { this->pictureBox12->Location = System::Drawing::Point(544, 323); }
				 if (g4_pole == 6) { this->pictureBox12->Location = System::Drawing::Point(591, 323); }
				 if (g4_pole == 7) { this->pictureBox12->Location = System::Drawing::Point(638, 323); }
				 if (g4_pole == 8) { this->pictureBox12->Location = System::Drawing::Point(685, 323); }
				 if (g4_pole == 9) { this->pictureBox12->Location = System::Drawing::Point(732, 323); }
				 if (g4_pole == 10) { this->pictureBox12->Location = System::Drawing::Point(732, 370); }
				 if (g4_pole == 11) { this->pictureBox12->Location = System::Drawing::Point(732, 417); }
				 if (g4_pole == 12) { this->pictureBox12->Location = System::Drawing::Point(685, 417); }
				 if (g4_pole == 13) { this->pictureBox12->Location = System::Drawing::Point(638, 417); }
				 if (g4_pole == 14) { this->pictureBox12->Location = System::Drawing::Point(591, 417); }
				 if (g4_pole == 15) { this->pictureBox12->Location = System::Drawing::Point(544, 417); }
				 if (g4_pole == 16) { this->pictureBox12->Location = System::Drawing::Point(544, 464); }
				 if (g4_pole == 17) { this->pictureBox12->Location = System::Drawing::Point(544, 511); }
				 if (g4_pole == 18) { this->pictureBox12->Location = System::Drawing::Point(544, 558); }
				 if (g4_pole == 19) { this->pictureBox12->Location = System::Drawing::Point(544, 605); }
				 if (g4_pole == 20) { this->pictureBox12->Location = System::Drawing::Point(497, 605); }
				 if (g4_pole == 21) { this->pictureBox12->Location = System::Drawing::Point(450, 605); }
				 if (g4_pole == 22) { this->pictureBox12->Location = System::Drawing::Point(450, 558); }
				 if (g4_pole == 23) { this->pictureBox12->Location = System::Drawing::Point(450, 511); }
				 if (g4_pole == 24) { this->pictureBox12->Location = System::Drawing::Point(450, 464); }
				 if (g4_pole == 25) { this->pictureBox12->Location = System::Drawing::Point(450, 417); }
				 if (g4_pole == 26) { this->pictureBox12->Location = System::Drawing::Point(403, 417); }
				 if (g4_pole == 27) { this->pictureBox12->Location = System::Drawing::Point(356, 417); }
				 if (g4_pole == 28) { this->pictureBox12->Location = System::Drawing::Point(309, 417); }
				 if (g4_pole == 29) { this->pictureBox12->Location = System::Drawing::Point(262, 417); }
				 if (g4_pole == 30) { this->pictureBox12->Location = System::Drawing::Point(262, 370); }
				 if (g4_pole == 31) { this->pictureBox12->Location = System::Drawing::Point(262, 323); }
				 if (g4_pole == 32) { this->pictureBox12->Location = System::Drawing::Point(309, 323); }
				 if (g4_pole == 33) { this->pictureBox12->Location = System::Drawing::Point(356, 323); }
				 if (g4_pole == 34) { this->pictureBox12->Location = System::Drawing::Point(403, 323); }
				 if (g4_pole == 35) { this->pictureBox12->Location = System::Drawing::Point(450, 323); }
				 if (g4_pole == 36) { this->pictureBox12->Location = System::Drawing::Point(450, 276); }
				 if (g4_pole == 37) { this->pictureBox12->Location = System::Drawing::Point(450, 229); }
				 if (g4_pole == 38) { this->pictureBox12->Location = System::Drawing::Point(450, 182); }
				 if (g4_pole == 39) { this->pictureBox12->Location = System::Drawing::Point(450, 135); }
				 if (g4_pole == 40) { this->pictureBox12->Location = System::Drawing::Point(497, 135); }
				 if (g4_pole == 41) { this->pictureBox12->Location = System::Drawing::Point(497, 182); }
				 if (g4_pole == 42) { this->pictureBox12->Location = System::Drawing::Point(497, 229); }
				 if (g4_pole == 43) { this->pictureBox12->Location = System::Drawing::Point(497, 276); }
				 if (g4_pole == 44) { this->pictureBox12->Location = System::Drawing::Point(497, 323); }
			 }
			 System::Void move_r1()
			 {
				 if (r1_pole == 0) { this->pictureBox13->Location = System::Drawing::Point(732, 558); }
				 if (r1_pole == 1) { this->pictureBox13->Location = System::Drawing::Point(732, 417); }
				 if (r1_pole == 2) { this->pictureBox13->Location = System::Drawing::Point(685, 417); }
				 if (r1_pole == 3) { this->pictureBox13->Location = System::Drawing::Point(638, 417); }
				 if (r1_pole == 4) { this->pictureBox13->Location = System::Drawing::Point(591, 417); }
				 if (r1_pole == 5) { this->pictureBox13->Location = System::Drawing::Point(544, 417); }
				 if (r1_pole == 6) { this->pictureBox13->Location = System::Drawing::Point(544, 464); }
				 if (r1_pole == 7) { this->pictureBox13->Location = System::Drawing::Point(544, 511); }
				 if (r1_pole == 8) { this->pictureBox13->Location = System::Drawing::Point(544, 558); }
				 if (r1_pole == 9) { this->pictureBox13->Location = System::Drawing::Point(544, 605); }
				 if (r1_pole == 10) { this->pictureBox13->Location = System::Drawing::Point(497, 605); }
				 if (r1_pole == 11) { this->pictureBox13->Location = System::Drawing::Point(450, 605); }
				 if (r1_pole == 12) { this->pictureBox13->Location = System::Drawing::Point(450, 558); }
				 if (r1_pole == 13) { this->pictureBox13->Location = System::Drawing::Point(450, 511); }
				 if (r1_pole == 14) { this->pictureBox13->Location = System::Drawing::Point(450, 464); }
				 if (r1_pole == 15) { this->pictureBox13->Location = System::Drawing::Point(450, 417); }
				 if (r1_pole == 16) { this->pictureBox13->Location = System::Drawing::Point(403, 417); }
				 if (r1_pole == 17) { this->pictureBox13->Location = System::Drawing::Point(356, 417); }
				 if (r1_pole == 18) { this->pictureBox13->Location = System::Drawing::Point(309, 417); }
				 if (r1_pole == 19) { this->pictureBox13->Location = System::Drawing::Point(262, 417); }
				 if (r1_pole == 20) { this->pictureBox13->Location = System::Drawing::Point(262, 370); }
				 if (r1_pole == 21) { this->pictureBox13->Location = System::Drawing::Point(262, 323); }
				 if (r1_pole == 22) { this->pictureBox13->Location = System::Drawing::Point(309, 323); }
				 if (r1_pole == 23) { this->pictureBox13->Location = System::Drawing::Point(356, 323); }
				 if (r1_pole == 24) { this->pictureBox13->Location = System::Drawing::Point(403, 323); }
				 if (r1_pole == 25) { this->pictureBox13->Location = System::Drawing::Point(450, 323); }
				 if (r1_pole == 26) { this->pictureBox13->Location = System::Drawing::Point(450, 276); }
				 if (r1_pole == 27) { this->pictureBox13->Location = System::Drawing::Point(450, 229); }
				 if (r1_pole == 28) { this->pictureBox13->Location = System::Drawing::Point(450, 182); }
				 if (r1_pole == 29) { this->pictureBox13->Location = System::Drawing::Point(450, 135); }
				 if (r1_pole == 30) { this->pictureBox13->Location = System::Drawing::Point(497, 135); }
				 if (r1_pole == 31) { this->pictureBox13->Location = System::Drawing::Point(544, 135); }
				 if (r1_pole == 32) { this->pictureBox13->Location = System::Drawing::Point(544, 182); }
				 if (r1_pole == 33) { this->pictureBox13->Location = System::Drawing::Point(544, 229); }
				 if (r1_pole == 34) { this->pictureBox13->Location = System::Drawing::Point(544, 276); }
				 if (r1_pole == 35) { this->pictureBox13->Location = System::Drawing::Point(544, 323); }
				 if (r1_pole == 36) { this->pictureBox13->Location = System::Drawing::Point(591, 323); }
				 if (r1_pole == 37) { this->pictureBox13->Location = System::Drawing::Point(638, 323); }
				 if (r1_pole == 38) { this->pictureBox13->Location = System::Drawing::Point(685, 323); }
				 if (r1_pole == 39) { this->pictureBox13->Location = System::Drawing::Point(732, 323); }
				 if (r1_pole == 40) { this->pictureBox13->Location = System::Drawing::Point(732, 370); }
				 if (r1_pole == 41) { this->pictureBox13->Location = System::Drawing::Point(685, 370); }
				 if (r1_pole == 42) { this->pictureBox13->Location = System::Drawing::Point(638, 370); }
				 if (r1_pole == 43) { this->pictureBox13->Location = System::Drawing::Point(591, 370); }
				 if (r1_pole == 44) { this->pictureBox13->Location = System::Drawing::Point(544, 370); }
			 }
			 System::Void move_r2()
			 {
				 if (r2_pole == 0) { this->pictureBox14->Location = System::Drawing::Point(685, 558); }
				 if (r2_pole == 1) { this->pictureBox14->Location = System::Drawing::Point(732, 417); }
				 if (r2_pole == 2) { this->pictureBox14->Location = System::Drawing::Point(685, 417); }
				 if (r2_pole == 3) { this->pictureBox14->Location = System::Drawing::Point(638, 417); }
				 if (r2_pole == 4) { this->pictureBox14->Location = System::Drawing::Point(591, 417); }
				 if (r2_pole == 5) { this->pictureBox14->Location = System::Drawing::Point(544, 417); }
				 if (r2_pole == 6) { this->pictureBox14->Location = System::Drawing::Point(544, 464); }
				 if (r2_pole == 7) { this->pictureBox14->Location = System::Drawing::Point(544, 511); }
				 if (r2_pole == 8) { this->pictureBox14->Location = System::Drawing::Point(544, 558); }
				 if (r2_pole == 9) { this->pictureBox14->Location = System::Drawing::Point(544, 605); }
				 if (r2_pole == 10) { this->pictureBox14->Location = System::Drawing::Point(497, 605); }
				 if (r2_pole == 11) { this->pictureBox14->Location = System::Drawing::Point(450, 605); }
				 if (r2_pole == 12) { this->pictureBox14->Location = System::Drawing::Point(450, 558); }
				 if (r2_pole == 13) { this->pictureBox14->Location = System::Drawing::Point(450, 511); }
				 if (r2_pole == 14) { this->pictureBox14->Location = System::Drawing::Point(450, 464); }
				 if (r2_pole == 15) { this->pictureBox14->Location = System::Drawing::Point(450, 417); }
				 if (r2_pole == 16) { this->pictureBox14->Location = System::Drawing::Point(403, 417); }
				 if (r2_pole == 17) { this->pictureBox14->Location = System::Drawing::Point(356, 417); }
				 if (r2_pole == 18) { this->pictureBox14->Location = System::Drawing::Point(309, 417); }
				 if (r2_pole == 19) { this->pictureBox14->Location = System::Drawing::Point(262, 417); }
				 if (r2_pole == 20) { this->pictureBox14->Location = System::Drawing::Point(262, 370); }
				 if (r2_pole == 21) { this->pictureBox14->Location = System::Drawing::Point(262, 323); }
				 if (r2_pole == 22) { this->pictureBox14->Location = System::Drawing::Point(309, 323); }
				 if (r2_pole == 23) { this->pictureBox14->Location = System::Drawing::Point(356, 323); }
				 if (r2_pole == 24) { this->pictureBox14->Location = System::Drawing::Point(403, 323); }
				 if (r2_pole == 25) { this->pictureBox14->Location = System::Drawing::Point(450, 323); }
				 if (r2_pole == 26) { this->pictureBox14->Location = System::Drawing::Point(450, 276); }
				 if (r2_pole == 27) { this->pictureBox14->Location = System::Drawing::Point(450, 229); }
				 if (r2_pole == 28) { this->pictureBox14->Location = System::Drawing::Point(450, 182); }
				 if (r2_pole == 29) { this->pictureBox14->Location = System::Drawing::Point(450, 135); }
				 if (r2_pole == 30) { this->pictureBox14->Location = System::Drawing::Point(497, 135); }
				 if (r2_pole == 31) { this->pictureBox14->Location = System::Drawing::Point(544, 135); }
				 if (r2_pole == 32) { this->pictureBox14->Location = System::Drawing::Point(544, 182); }
				 if (r2_pole == 33) { this->pictureBox14->Location = System::Drawing::Point(544, 229); }
				 if (r2_pole == 34) { this->pictureBox14->Location = System::Drawing::Point(544, 276); }
				 if (r2_pole == 35) { this->pictureBox14->Location = System::Drawing::Point(544, 323); }
				 if (r2_pole == 36) { this->pictureBox14->Location = System::Drawing::Point(591, 323); }
				 if (r2_pole == 37) { this->pictureBox14->Location = System::Drawing::Point(638, 323); }
				 if (r2_pole == 38) { this->pictureBox14->Location = System::Drawing::Point(685, 323); }
				 if (r2_pole == 39) { this->pictureBox14->Location = System::Drawing::Point(732, 323); }
				 if (r2_pole == 40) { this->pictureBox14->Location = System::Drawing::Point(732, 370); }
				 if (r2_pole == 41) { this->pictureBox14->Location = System::Drawing::Point(685, 370); }
				 if (r2_pole == 42) { this->pictureBox14->Location = System::Drawing::Point(638, 370); }
				 if (r2_pole == 43) { this->pictureBox14->Location = System::Drawing::Point(591, 370); }
				 if (r2_pole == 44) { this->pictureBox14->Location = System::Drawing::Point(544, 370); }
			 }
			 System::Void move_r3()
			 {
				 if (r3_pole == 0) { this->pictureBox15->Location = System::Drawing::Point(732, 605); }
				 if (r3_pole == 1) { this->pictureBox15->Location = System::Drawing::Point(732, 417); }
				 if (r3_pole == 2) { this->pictureBox15->Location = System::Drawing::Point(685, 417); }
				 if (r3_pole == 3) { this->pictureBox15->Location = System::Drawing::Point(638, 417); }
				 if (r3_pole == 4) { this->pictureBox15->Location = System::Drawing::Point(591, 417); }
				 if (r3_pole == 5) { this->pictureBox15->Location = System::Drawing::Point(544, 417); }
				 if (r3_pole == 6) { this->pictureBox15->Location = System::Drawing::Point(544, 464); }
				 if (r3_pole == 7) { this->pictureBox15->Location = System::Drawing::Point(544, 511); }
				 if (r3_pole == 8) { this->pictureBox15->Location = System::Drawing::Point(544, 558); }
				 if (r3_pole == 9) { this->pictureBox15->Location = System::Drawing::Point(544, 605); }
				 if (r3_pole == 10) { this->pictureBox15->Location = System::Drawing::Point(497, 605); }
				 if (r3_pole == 11) { this->pictureBox15->Location = System::Drawing::Point(450, 605); }
				 if (r3_pole == 12) { this->pictureBox15->Location = System::Drawing::Point(450, 558); }
				 if (r3_pole == 13) { this->pictureBox15->Location = System::Drawing::Point(450, 511); }
				 if (r3_pole == 14) { this->pictureBox15->Location = System::Drawing::Point(450, 464); }
				 if (r3_pole == 15) { this->pictureBox15->Location = System::Drawing::Point(450, 417); }
				 if (r3_pole == 16) { this->pictureBox15->Location = System::Drawing::Point(403, 417); }
				 if (r3_pole == 17) { this->pictureBox15->Location = System::Drawing::Point(356, 417); }
				 if (r3_pole == 18) { this->pictureBox15->Location = System::Drawing::Point(309, 417); }
				 if (r3_pole == 19) { this->pictureBox15->Location = System::Drawing::Point(262, 417); }
				 if (r3_pole == 20) { this->pictureBox15->Location = System::Drawing::Point(262, 370); }
				 if (r3_pole == 21) { this->pictureBox15->Location = System::Drawing::Point(262, 323); }
				 if (r3_pole == 22) { this->pictureBox15->Location = System::Drawing::Point(309, 323); }
				 if (r3_pole == 23) { this->pictureBox15->Location = System::Drawing::Point(356, 323); }
				 if (r3_pole == 24) { this->pictureBox15->Location = System::Drawing::Point(403, 323); }
				 if (r3_pole == 25) { this->pictureBox15->Location = System::Drawing::Point(450, 323); }
				 if (r3_pole == 26) { this->pictureBox15->Location = System::Drawing::Point(450, 276); }
				 if (r3_pole == 27) { this->pictureBox15->Location = System::Drawing::Point(450, 229); }
				 if (r3_pole == 28) { this->pictureBox15->Location = System::Drawing::Point(450, 182); }
				 if (r3_pole == 29) { this->pictureBox15->Location = System::Drawing::Point(450, 135); }
				 if (r3_pole == 30) { this->pictureBox15->Location = System::Drawing::Point(497, 135); }
				 if (r3_pole == 31) { this->pictureBox15->Location = System::Drawing::Point(544, 135); }
				 if (r3_pole == 32) { this->pictureBox15->Location = System::Drawing::Point(544, 182); }
				 if (r3_pole == 33) { this->pictureBox15->Location = System::Drawing::Point(544, 229); }
				 if (r3_pole == 34) { this->pictureBox15->Location = System::Drawing::Point(544, 276); }
				 if (r3_pole == 35) { this->pictureBox15->Location = System::Drawing::Point(544, 323); }
				 if (r3_pole == 36) { this->pictureBox15->Location = System::Drawing::Point(591, 323); }
				 if (r3_pole == 37) { this->pictureBox15->Location = System::Drawing::Point(638, 323); }
				 if (r3_pole == 38) { this->pictureBox15->Location = System::Drawing::Point(685, 323); }
				 if (r3_pole == 39) { this->pictureBox15->Location = System::Drawing::Point(732, 323); }
				 if (r3_pole == 40) { this->pictureBox15->Location = System::Drawing::Point(732, 370); }
				 if (r3_pole == 41) { this->pictureBox15->Location = System::Drawing::Point(685, 370); }
				 if (r3_pole == 42) { this->pictureBox15->Location = System::Drawing::Point(638, 370); }
				 if (r3_pole == 43) { this->pictureBox15->Location = System::Drawing::Point(591, 370); }
				 if (r3_pole == 44) { this->pictureBox15->Location = System::Drawing::Point(544, 370); }
			 }
			 System::Void move_r4()
			 {
				 if (r4_pole == 0) { this->pictureBox16->Location = System::Drawing::Point(685, 605); }
				 if (r4_pole == 1) { this->pictureBox16->Location = System::Drawing::Point(732, 417); }
				 if (r4_pole == 2) { this->pictureBox16->Location = System::Drawing::Point(685, 417); }
				 if (r4_pole == 3) { this->pictureBox16->Location = System::Drawing::Point(638, 417); }
				 if (r4_pole == 4) { this->pictureBox16->Location = System::Drawing::Point(591, 417); }
				 if (r4_pole == 5) { this->pictureBox16->Location = System::Drawing::Point(544, 417); }
				 if (r4_pole == 6) { this->pictureBox16->Location = System::Drawing::Point(544, 464); }
				 if (r4_pole == 7) { this->pictureBox16->Location = System::Drawing::Point(544, 511); }
				 if (r4_pole == 8) { this->pictureBox16->Location = System::Drawing::Point(544, 558); }
				 if (r4_pole == 9) { this->pictureBox16->Location = System::Drawing::Point(544, 605); }
				 if (r4_pole == 10) { this->pictureBox16->Location = System::Drawing::Point(497, 605); }
				 if (r4_pole == 11) { this->pictureBox16->Location = System::Drawing::Point(450, 605); }
				 if (r4_pole == 12) { this->pictureBox16->Location = System::Drawing::Point(450, 558); }
				 if (r4_pole == 13) { this->pictureBox16->Location = System::Drawing::Point(450, 511); }
				 if (r4_pole == 14) { this->pictureBox16->Location = System::Drawing::Point(450, 464); }
				 if (r4_pole == 15) { this->pictureBox16->Location = System::Drawing::Point(450, 417); }
				 if (r4_pole == 16) { this->pictureBox16->Location = System::Drawing::Point(403, 417); }
				 if (r4_pole == 17) { this->pictureBox16->Location = System::Drawing::Point(356, 417); }
				 if (r4_pole == 18) { this->pictureBox16->Location = System::Drawing::Point(309, 417); }
				 if (r4_pole == 19) { this->pictureBox16->Location = System::Drawing::Point(262, 417); }
				 if (r4_pole == 20) { this->pictureBox16->Location = System::Drawing::Point(262, 370); }
				 if (r4_pole == 21) { this->pictureBox16->Location = System::Drawing::Point(262, 323); }
				 if (r4_pole == 22) { this->pictureBox16->Location = System::Drawing::Point(309, 323); }
				 if (r4_pole == 23) { this->pictureBox16->Location = System::Drawing::Point(356, 323); }
				 if (r4_pole == 24) { this->pictureBox16->Location = System::Drawing::Point(403, 323); }
				 if (r4_pole == 25) { this->pictureBox16->Location = System::Drawing::Point(450, 323); }
				 if (r4_pole == 26) { this->pictureBox16->Location = System::Drawing::Point(450, 276); }
				 if (r4_pole == 27) { this->pictureBox16->Location = System::Drawing::Point(450, 229); }
				 if (r4_pole == 28) { this->pictureBox16->Location = System::Drawing::Point(450, 182); }
				 if (r4_pole == 29) { this->pictureBox16->Location = System::Drawing::Point(450, 135); }
				 if (r4_pole == 30) { this->pictureBox16->Location = System::Drawing::Point(497, 135); }
				 if (r4_pole == 31) { this->pictureBox16->Location = System::Drawing::Point(544, 135); }
				 if (r4_pole == 32) { this->pictureBox16->Location = System::Drawing::Point(544, 182); }
				 if (r4_pole == 33) { this->pictureBox16->Location = System::Drawing::Point(544, 229); }
				 if (r4_pole == 34) { this->pictureBox16->Location = System::Drawing::Point(544, 276); }
				 if (r4_pole == 35) { this->pictureBox16->Location = System::Drawing::Point(544, 323); }
				 if (r4_pole == 36) { this->pictureBox16->Location = System::Drawing::Point(591, 323); }
				 if (r4_pole == 37) { this->pictureBox16->Location = System::Drawing::Point(638, 323); }
				 if (r4_pole == 38) { this->pictureBox16->Location = System::Drawing::Point(685, 323); }
				 if (r4_pole == 39) { this->pictureBox16->Location = System::Drawing::Point(732, 323); }
				 if (r4_pole == 40) { this->pictureBox16->Location = System::Drawing::Point(732, 370); }
				 if (r4_pole == 41) { this->pictureBox16->Location = System::Drawing::Point(685, 370); }
				 if (r4_pole == 42) { this->pictureBox16->Location = System::Drawing::Point(638, 370); }
				 if (r4_pole == 43) { this->pictureBox16->Location = System::Drawing::Point(591, 370); }
				 if (r4_pole == 44) { this->pictureBox16->Location = System::Drawing::Point(544, 370); }
			 }
			 System::Void czy_bije_b()
			 {
				 if (this->pictureBox1->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_b++;
				 }
				 if (this->pictureBox1->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_b++;
				 }
				 if (this->pictureBox2->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_b++;
				 }
				 if (this->pictureBox3->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_b++;
				 }
				 if (this->pictureBox4->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_b++;
				 }
			 }
			 System::Void czy_bije_y()
			 {
				 if (this->pictureBox5->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_y++;
				 }
				 if (this->pictureBox5->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_y++;
				 }
				 if (this->pictureBox6->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_y++;
				 }
				 if (this->pictureBox7->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_y++;
				 }
				 if (this->pictureBox8->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_y++;
				 }
			 }
			 System::Void czy_bije_g()
			 {
				 if (this->pictureBox9->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_g++;
				 }
				 if (this->pictureBox9->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_g++;
				 }
				 if (this->pictureBox10->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_g++;
				 }
				 if (this->pictureBox11->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox13->Location)
				 {
					 r1_pole = 0;
					 move_r1();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox14->Location)
				 {
					 r2_pole = 0;
					 move_r2();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox15->Location)
				 {
					 r3_pole = 0;
					 move_r3();
					 bije_g++;
				 }
				 if (this->pictureBox12->Location == this->pictureBox16->Location)
				 {
					 r4_pole = 0;
					 move_r4();
					 bije_g++;
				 }
			 }
			 System::Void czy_bije_r()
			 {
				 if (this->pictureBox13->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_r++;
				 }
				 if (this->pictureBox13->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_r++;
				 }
				 if (this->pictureBox14->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_r++;
				 }
				 if (this->pictureBox15->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox5->Location)
				 {
					 y1_pole = 0;
					 move_y1();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox6->Location)
				 {
					 y2_pole = 0;
					 move_y2();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox7->Location)
				 {
					 y3_pole = 0;
					 move_y3();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox8->Location)
				 {
					 y4_pole = 0;
					 move_y4();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox9->Location)
				 {
					 g1_pole = 0;
					 move_g1();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox10->Location)
				 {
					 g2_pole = 0;
					 move_g2();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox11->Location)
				 {
					 g3_pole = 0;
					 move_g3();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox12->Location)
				 {
					 g4_pole = 0;
					 move_g4();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox1->Location)
				 {
					 b1_pole = 0;
					 move_b1();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox2->Location)
				 {
					 b2_pole = 0;
					 move_b2();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox3->Location)
				 {
					 b3_pole = 0;
					 move_b3();
					 bije_r++;
				 }
				 if (this->pictureBox16->Location == this->pictureBox4->Location)
				 {
					 b4_pole = 0;
					 move_b4();
					 bije_r++;
				 }
			 }
			 System::Void zmiana()
			 {
				 losowa = 0;
				 if (gracz == 0)
				 {
					 this->label5->Text = "GRACZ NIEBIESKI";
					 this->label5->ForeColor = System::Drawing::Color::Blue;
				 }
				 if (gracz == 1)
				 {
					 this->label5->Text = "GRACZ ¯Ó£TY";
					 this->label5->ForeColor = System::Drawing::Color::Gold;
				 }
				 if (gracz == 2)
				 {
					 this->label5->Text = "GRACZ ZIELONY";
					 this->label5->ForeColor = System::Drawing::Color::LimeGreen;
				 }
				 if (gracz == 3)
				 {
					 this->label5->Text = "GRACZ CZERWONY";
					 this->label5->ForeColor = System::Drawing::Color::Red;
				 }
				 this->button1->BackgroundImage = System::Drawing::Image::FromFile("..\\cube_0.png");
				 this->button1->Text = L"Rzut kostk¹";
			 }
	private: System::Void button1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (rzut == true)
		{
			this->pictureBox17->Image = System::Drawing::Image::FromFile("..\\click1_l.png");
			this->pictureBox18->Image = System::Drawing::Image::FromFile("..\\click1_r.png");
			this->pictureBox17->Visible = true;
			this->pictureBox18->Visible = true;
		}
		else
		{
			this->pictureBox17->Image = System::Drawing::Image::FromFile("..\\click0_l.png");
			this->pictureBox18->Image = System::Drawing::Image::FromFile("..\\click0_r.png");
			this->pictureBox17->Visible = true;
			this->pictureBox18->Visible = true;
		}
	}
	private: System::Void button1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (rzut == true)
		{
			this->pictureBox17->Visible = false;
			this->pictureBox18->Visible = false;
		}
		else
		{
			this->pictureBox17->Visible = false;
			this->pictureBox18->Visible = false;
		}
	}
	};
}