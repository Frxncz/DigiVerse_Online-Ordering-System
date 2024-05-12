#pragma once

#include "Shipping.h"

#include "GcashForm.h"

namespace PointofSaleSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CheckoutForm
	/// </summary>
	public ref class CheckoutForm : public System::Windows::Forms::Form
	{
	public:

		CheckoutForm(void)
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




	// Created a method to access the flpOrderDetail
	public:

		void AddGroupBoxToOrderDetail(GroupBox^ groupBox)
		{
			// Add the provided GroupBox to flpOrderDetail
			this->flpOrderDetail->Controls->Add(groupBox);
		}





	// Created a method to access the flpOrderDetail
	public:

		void RemoveGroupBoxToOrderDetail(GroupBox^ groupBox)
		{
			// Remove the provided GroupBox to flpOrderDetail
			flpOrderDetail->Controls->Remove(groupBox);

		}





	// Define properties to access subtotal and total payment
	public:

		property int Subtotal 
		{
			int get() { return System::Convert::ToInt32(lblSubtotal->Text); }
			void set(int value) { lblSubtotal->Text = value.ToString(); }
		}

		property int TotalPayment 
		{
			int get() { return System::Convert::ToInt32(lblTotalPayment->Text); }
			void set(int value) { lblTotalPayment->Text = value.ToString(); }
		}





	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CheckoutForm()
		{
			if (components)
			{
				delete components;
			}
		}


// Add a private member to store the GroupBox received from Home form
	private: System::Windows::Forms::GroupBox^ newGroupBox;


	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnCheckout;

	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Label^ lblTotalPayment;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ lblSubtotal;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::FlowLayoutPanel^ flpOrderDetail;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pbBackHome;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckoutForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnCheckout = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTotalPayment = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lblSubtotal = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->flpOrderDetail = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pbBackHome = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackHome))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(386, 705);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(361, 30);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->button2->Location = System::Drawing::Point(764, 704);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 33);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Apply";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// btnCheckout
			// 
			this->btnCheckout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->btnCheckout->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnCheckout->Location = System::Drawing::Point(382, 757);
			this->btnCheckout->Name = L"btnCheckout";
			this->btnCheckout->Size = System::Drawing::Size(463, 53);
			this->btnCheckout->TabIndex = 17;
			this->btnCheckout->Text = L"Continue to Checkout";
			this->btnCheckout->UseVisualStyleBackColor = false;
			this->btnCheckout->Click += gcnew System::EventHandler(this, &CheckoutForm::btnCheckout_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->groupBox9->Controls->Add(this->lblTotalPayment);
			this->groupBox9->Controls->Add(this->label10);
			this->groupBox9->Controls->Add(this->label2);
			this->groupBox9->Location = System::Drawing::Point(364, 646);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(496, 43);
			this->groupBox9->TabIndex = 16;
			this->groupBox9->TabStop = false;
			// 
			// lblTotalPayment
			// 
			this->lblTotalPayment->AutoSize = true;
			this->lblTotalPayment->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotalPayment->Location = System::Drawing::Point(429, 13);
			this->lblTotalPayment->Name = L"lblTotalPayment";
			this->lblTotalPayment->Size = System::Drawing::Size(24, 18);
			this->lblTotalPayment->TabIndex = 18;
			this->lblTotalPayment->Text = L"50";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(407, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 17);
			this->label10->TabIndex = 16;
			this->label10->Text = L"P";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Total Payment";
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->groupBox8->Controls->Add(this->label14);
			this->groupBox8->Controls->Add(this->label13);
			this->groupBox8->Controls->Add(this->label11);
			this->groupBox8->Controls->Add(this->label12);
			this->groupBox8->Controls->Add(this->lblSubtotal);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Controls->Add(this->label6);
			this->groupBox8->Controls->Add(this->label5);
			this->groupBox8->Controls->Add(this->label4);
			this->groupBox8->Controls->Add(this->label3);
			this->groupBox8->Location = System::Drawing::Point(364, 486);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(496, 149);
			this->groupBox8->TabIndex = 15;
			this->groupBox8->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(407, 118);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 17);
			this->label14->TabIndex = 19;
			this->label14->Text = L"P";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(429, 117);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 18);
			this->label13->TabIndex = 18;
			this->label13->Text = L"50";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(20, 117);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(88, 17);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Shipping fee";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(429, 85);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 18);
			this->label12->TabIndex = 16;
			this->label12->Text = L"0";
			// 
			// lblSubtotal
			// 
			this->lblSubtotal->AutoSize = true;
			this->lblSubtotal->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSubtotal->Location = System::Drawing::Point(429, 59);
			this->lblSubtotal->Name = L"lblSubtotal";
			this->lblSubtotal->Size = System::Drawing::Size(16, 18);
			this->lblSubtotal->TabIndex = 14;
			this->lblSubtotal->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(407, 108);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 17);
			this->label9->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(407, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"P";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(407, 59);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"P";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 17);
			this->label6->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(20, 85);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(101, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Discount (0%)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(20, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Subtotal";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 19);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Payment Summary";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->groupBox7->Controls->Add(this->flpOrderDetail);
			this->groupBox7->Controls->Add(this->label21);
			this->groupBox7->Controls->Add(this->label19);
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Location = System::Drawing::Point(276, 29);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(644, 434);
			this->groupBox7->TabIndex = 14;
			this->groupBox7->TabStop = false;
			// 
			// flpOrderDetail
			// 
			this->flpOrderDetail->AutoScroll = true;
			this->flpOrderDetail->Location = System::Drawing::Point(23, 173);
			this->flpOrderDetail->Name = L"flpOrderDetail";
			this->flpOrderDetail->Size = System::Drawing::Size(597, 231);
			this->flpOrderDetail->TabIndex = 21;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(463, 71);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(129, 17);
			this->label21->TabIndex = 19;
			this->label21->Text = L"Monday, 6/24/2024";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(26, 131);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(162, 19);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Werner Heisenberg";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(28, 103);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(51, 17);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Name:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(28, 70);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 17);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Date";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(256, 18);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(146, 24);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Shopping Cart";
			// 
			// pbBackHome
			// 
			this->pbBackHome->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBackHome.Image")));
			this->pbBackHome->Location = System::Drawing::Point(62, 46);
			this->pbBackHome->Name = L"pbBackHome";
			this->pbBackHome->Size = System::Drawing::Size(40, 40);
			this->pbBackHome->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbBackHome->TabIndex = 20;
			this->pbBackHome->TabStop = false;
			this->pbBackHome->Click += gcnew System::EventHandler(this, &CheckoutForm::pbBackHome_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, 585);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(340, 268);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(946, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(275, 351);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// CheckoutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->ClientSize = System::Drawing::Size(1216, 926);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pbBackHome);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnCheckout);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"CheckoutForm";
			this->Text = L"CheckoutForm";
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackHome))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	//----- Show the checkout form when the cart is cliked -----//
	private: System::Void pbBackHome_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		this->Hide();

	}

	private: System::Void btnCheckout_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//this->Hide();

		GcashForm^ gcashForm = gcnew GcashForm();

		// Assuming you have an instance of GcashForm named gcashForm
		gcashForm->UpdatePaymentLabels(lblTotalPayment->Text, lblTotalPayment->Text);


		Shipping^ shippingUI = gcnew Shipping();
		shippingUI->Show();
	}
};
}
