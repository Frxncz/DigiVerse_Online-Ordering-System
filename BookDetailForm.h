#pragma once

namespace PointofSaleSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BookDetailForm
	/// </summary>
	public ref class BookDetailForm : public System::Windows::Forms::Form
	{
	public:
		BookDetailForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//



			//
			// This will center the Form in the screen when it pop up
			//
			CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BookDetailForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbBackHome;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pbAtomicHabits;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label8;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BookDetailForm::typeid));
			this->pbBackHome = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbAtomicHabits = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackHome))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAtomicHabits))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pbBackHome
			// 
			this->pbBackHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbBackHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBackHome.Image")));
			this->pbBackHome->Location = System::Drawing::Point(37, 31);
			this->pbBackHome->Name = L"pbBackHome";
			this->pbBackHome->Size = System::Drawing::Size(40, 40);
			this->pbBackHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbBackHome->TabIndex = 21;
			this->pbBackHome->TabStop = false;
			this->pbBackHome->Click += gcnew System::EventHandler(this, &BookDetailForm::pbBackHome_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(59, 105);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(378, 473);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// pbAtomicHabits
			// 
			this->pbAtomicHabits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->pbAtomicHabits->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbAtomicHabits->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pbAtomicHabits->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbAtomicHabits.Image")));
			this->pbAtomicHabits->Location = System::Drawing::Point(138, 177);
			this->pbAtomicHabits->Name = L"pbAtomicHabits";
			this->pbAtomicHabits->Size = System::Drawing::Size(215, 320);
			this->pbAtomicHabits->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbAtomicHabits->TabIndex = 23;
			this->pbAtomicHabits->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(509, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 33);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Atomic Habits";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(511, 156);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 23);
			this->label2->TabIndex = 25;
			this->label2->Text = L"James Clare";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(511, 285);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 19);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Description";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(511, 327);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(542, 105);
			this->label4->TabIndex = 27;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(780, 490);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(171, 65);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(515, 490);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(242, 65);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 29;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->label5->Location = System::Drawing::Point(541, 508);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 24);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Buy now for";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->label6->Location = System::Drawing::Point(670, 509);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 24);
			this->label6->TabIndex = 31;
			this->label6->Text = L"P";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->label7->Location = System::Drawing::Point(692, 509);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 24);
			this->label7->TabIndex = 32;
			this->label7->Text = L"100";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(515, 207);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(28, 21);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(549, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 21);
			this->label8->TabIndex = 34;
			this->label8->Text = L"4.8";
			// 
			// BookDetailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->ClientSize = System::Drawing::Size(1144, 620);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbAtomicHabits);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pbBackHome);
			this->Name = L"BookDetailForm";
			this->Text = L"BookDetailForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackHome))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAtomicHabits))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void pbBackHome_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
	}
};
}
