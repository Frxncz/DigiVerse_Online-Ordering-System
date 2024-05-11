#pragma once

#include "PaymentSuccessForm.h"

namespace PointofSaleSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GcashForm
	/// </summary>
	public ref class GcashForm : public System::Windows::Forms::Form
	{

		Form^ newGcashUI;

	public:
		GcashForm(void)
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

		GcashForm(Form^ gcashUI)
		{

			newGcashUI = gcashUI;

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
		~GcashForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnPay;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblPHPamount;

	private: System::Windows::Forms::Label^ lblPHPtotal;

	private: System::Windows::Forms::PictureBox^ pbReturnPayment;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GcashForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPay = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblPHPamount = (gcnew System::Windows::Forms::Label());
			this->lblPHPtotal = (gcnew System::Windows::Forms::Label());
			this->pbReturnPayment = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReturnPayment))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-3, -9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1269, 404);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(187, 115);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(967, 656);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// btnPay
			// 
			this->btnPay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->btnPay->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnPay->Location = System::Drawing::Point(519, 658);
			this->btnPay->Name = L"btnPay";
			this->btnPay->Size = System::Drawing::Size(278, 61);
			this->btnPay->TabIndex = 13;
			this->btnPay->Text = L"PAY PHP 0.00";
			this->btnPay->UseVisualStyleBackColor = false;
			this->btnPay->Click += gcnew System::EventHandler(this, &GcashForm::btnPay_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->label1->Location = System::Drawing::Point(731, 427);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 23);
			this->label1->TabIndex = 14;
			this->label1->Text = L"PHP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(730, 481);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 26);
			this->label2->TabIndex = 15;
			this->label2->Text = L"PHP";
			// 
			// lblPHPamount
			// 
			this->lblPHPamount->AutoSize = true;
			this->lblPHPamount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPHPamount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(133)));
			this->lblPHPamount->Location = System::Drawing::Point(830, 426);
			this->lblPHPamount->Name = L"lblPHPamount";
			this->lblPHPamount->Size = System::Drawing::Size(49, 23);
			this->lblPHPamount->TabIndex = 16;
			this->lblPHPamount->Text = L"0.00";
			// 
			// lblPHPtotal
			// 
			this->lblPHPtotal->AutoSize = true;
			this->lblPHPtotal->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPHPtotal->Location = System::Drawing::Point(825, 482);
			this->lblPHPtotal->Name = L"lblPHPtotal";
			this->lblPHPtotal->Size = System::Drawing::Size(57, 26);
			this->lblPHPtotal->TabIndex = 17;
			this->lblPHPtotal->Text = L"0.00";
			// 
			// pbReturnPayment
			// 
			this->pbReturnPayment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)));
			this->pbReturnPayment->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbReturnPayment.Image")));
			this->pbReturnPayment->Location = System::Drawing::Point(56, 42);
			this->pbReturnPayment->Name = L"pbReturnPayment";
			this->pbReturnPayment->Size = System::Drawing::Size(40, 40);
			this->pbReturnPayment->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pbReturnPayment->TabIndex = 18;
			this->pbReturnPayment->TabStop = false;
			this->pbReturnPayment->Click += gcnew System::EventHandler(this, &GcashForm::pbReturnPayment_Click);
			// 
			// GcashForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->ClientSize = System::Drawing::Size(1261, 842);
			this->Controls->Add(this->pbReturnPayment);
			this->Controls->Add(this->lblPHPtotal);
			this->Controls->Add(this->lblPHPamount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPay);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GcashForm";
			this->Text = L"GcashForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReturnPayment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//------ Go To  Payment form when clicked the 'Return to Payment' in Gcash form -----//
	private: System::Void pbReturnPayment_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		newGcashUI->Show();
	}

	//----- Go to Payment Success Form -----//
	private: System::Void btnPay_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		PaymentSuccessForm^ paymentSuccessUI = gcnew PaymentSuccessForm();
		paymentSuccessUI->ShowDialog();
	}

};
}
