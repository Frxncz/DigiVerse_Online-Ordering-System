#pragma once

#include "GcashForm.h"



namespace PointofSaleSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PaymentForm
	/// </summary>
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	public:

		PaymentForm(Form^ ShippingForm, Form^ Home,  String^ totalPayment)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//


			// Store the reference to the Home form
			newhomeUI = Home;


			// Store the reference to the Shipping form
			newShippingForm = ShippingForm;

			// Store the total payment amount in the class member variable
			this->totalPayment = totalPayment;


			//
			// This will center the Form in the screen when it pop up
			//
			CenterToScreen();
		}


	// Declare a private member variable to hold the reference to the Home form
	private: Form^ newhomeUI;


	// Declare a private member variable to hold the reference to the Shipping form
	private: Form^ newShippingForm;


	// Declare a private member variable to hold the total payment amount
	private: String^ totalPayment;





	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:


	private: System::Windows::Forms::PictureBox^ pbReturnShipping;

	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Button^ btnGotoGcash;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PaymentForm::typeid));
			this->pbReturnShipping = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->btnGotoGcash = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReturnShipping))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pbReturnShipping
			// 
			this->pbReturnShipping->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbReturnShipping->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbReturnShipping.Image")));
			this->pbReturnShipping->Location = System::Drawing::Point(51, 710);
			this->pbReturnShipping->Name = L"pbReturnShipping";
			this->pbReturnShipping->Size = System::Drawing::Size(206, 24);
			this->pbReturnShipping->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbReturnShipping->TabIndex = 0;
			this->pbReturnShipping->TabStop = false;
			this->pbReturnShipping->Click += gcnew System::EventHandler(this, &PaymentForm::pbReturnShipping_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(495, 44);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(213, 24);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(178, 113);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(280, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(172, 184);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(928, 426);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			// 
			// btnGotoGcash
			// 
			this->btnGotoGcash->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->btnGotoGcash->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGotoGcash->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGotoGcash->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnGotoGcash->Location = System::Drawing::Point(800, 661);
			this->btnGotoGcash->Name = L"btnGotoGcash";
			this->btnGotoGcash->Size = System::Drawing::Size(296, 61);
			this->btnGotoGcash->TabIndex = 12;
			this->btnGotoGcash->Text = L"Continue to Payment";
			this->btnGotoGcash->UseVisualStyleBackColor = false;
			this->btnGotoGcash->Click += gcnew System::EventHandler(this, &PaymentForm::btnGotoGcash_Click);
			// 
			// PaymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->ClientSize = System::Drawing::Size(1251, 769);
			this->Controls->Add(this->btnGotoGcash);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pbReturnShipping);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"PaymentForm";
			this->Text = L"PaymentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReturnShipping))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------//


	//
	//----- Go to Gcash Form -----//
	// 
	//
	private: System::Void btnGotoGcash_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();

		// Create a new instance of the GcashForm, passing the total payment amount
		GcashForm^ gcashUI = gcnew GcashForm(this, newhomeUI, totalPayment);

		gcashUI->Show();
	}



	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------//



	//
	//------ Go To Shipping form when clicked the return to Shipping -----//
	// 
	//
	private: System::Void pbReturnShipping_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();

		newShippingForm->Show();
	}

};
}
