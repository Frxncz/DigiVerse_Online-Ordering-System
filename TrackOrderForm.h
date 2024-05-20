#pragma once

namespace PointofSaleSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TrackOrderForm
	/// </summary>
	public ref class TrackOrderForm : public System::Windows::Forms::Form
	{
	public:
		TrackOrderForm(Form^ Home)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			// Store the reference to the Home form
			newhomeUI2 = Home;


			//
			// This will center the Form in the screen when it pop up
			//
			CenterToScreen();
		}


	// Declare a private member variable to hold the reference to the Home form
	private: Form^ newhomeUI2;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TrackOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbBackHome2;
	private: System::Windows::Forms::Button^ btnReturnRefund;

	private: System::Windows::Forms::Button^ btnCanceled;

	private: System::Windows::Forms::Button^ btnCompleted;

	private: System::Windows::Forms::Button^ btnToRecieve;

	private: System::Windows::Forms::Button^ btnToShip;

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TrackOrderForm::typeid));
			this->pbBackHome2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnReturnRefund = (gcnew System::Windows::Forms::Button());
			this->btnCanceled = (gcnew System::Windows::Forms::Button());
			this->btnCompleted = (gcnew System::Windows::Forms::Button());
			this->btnToRecieve = (gcnew System::Windows::Forms::Button());
			this->btnToShip = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackHome2))->BeginInit();
			this->SuspendLayout();
			// 
			// pbBackHome2
			// 
			this->pbBackHome2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pbBackHome2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbBackHome2.Image")));
			this->pbBackHome2->Location = System::Drawing::Point(49, 44);
			this->pbBackHome2->Name = L"pbBackHome2";
			this->pbBackHome2->Size = System::Drawing::Size(40, 40);
			this->pbBackHome2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbBackHome2->TabIndex = 21;
			this->pbBackHome2->TabStop = false;
			this->pbBackHome2->Click += gcnew System::EventHandler(this, &TrackOrderForm::pbBackHome2_Click);
			// 
			// btnReturnRefund
			// 
			this->btnReturnRefund->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnReturnRefund->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReturnRefund->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReturnRefund->ForeColor = System::Drawing::Color::Black;
			this->btnReturnRefund->Location = System::Drawing::Point(932, 109);
			this->btnReturnRefund->Name = L"btnReturnRefund";
			this->btnReturnRefund->Size = System::Drawing::Size(153, 38);
			this->btnReturnRefund->TabIndex = 30;
			this->btnReturnRefund->Text = L"Return / Refund";
			this->btnReturnRefund->UseVisualStyleBackColor = false;
			this->btnReturnRefund->Click += gcnew System::EventHandler(this, &TrackOrderForm::btnReturnRefund_Click);
			// 
			// btnCanceled
			// 
			this->btnCanceled->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCanceled->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCanceled->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCanceled->ForeColor = System::Drawing::Color::Black;
			this->btnCanceled->Location = System::Drawing::Point(749, 109);
			this->btnCanceled->Name = L"btnCanceled";
			this->btnCanceled->Size = System::Drawing::Size(126, 38);
			this->btnCanceled->TabIndex = 29;
			this->btnCanceled->Text = L"Cancelled";
			this->btnCanceled->UseVisualStyleBackColor = false;
			this->btnCanceled->Click += gcnew System::EventHandler(this, &TrackOrderForm::btnCanceled_Click);
			// 
			// btnCompleted
			// 
			this->btnCompleted->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnCompleted->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCompleted->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCompleted->ForeColor = System::Drawing::Color::Black;
			this->btnCompleted->Location = System::Drawing::Point(547, 109);
			this->btnCompleted->Name = L"btnCompleted";
			this->btnCompleted->Size = System::Drawing::Size(120, 38);
			this->btnCompleted->TabIndex = 28;
			this->btnCompleted->Text = L"Completed";
			this->btnCompleted->UseVisualStyleBackColor = false;
			this->btnCompleted->Click += gcnew System::EventHandler(this, &TrackOrderForm::btnCompleted_Click);
			// 
			// btnToRecieve
			// 
			this->btnToRecieve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(242)));
			this->btnToRecieve->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnToRecieve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnToRecieve->ForeColor = System::Drawing::Color::Black;
			this->btnToRecieve->Location = System::Drawing::Point(343, 109);
			this->btnToRecieve->Name = L"btnToRecieve";
			this->btnToRecieve->Size = System::Drawing::Size(126, 38);
			this->btnToRecieve->TabIndex = 27;
			this->btnToRecieve->Text = L"To Recieve";
			this->btnToRecieve->UseVisualStyleBackColor = false;
			this->btnToRecieve->Click += gcnew System::EventHandler(this, &TrackOrderForm::btnToRecieve_Click);
			// 
			// btnToShip
			// 
			this->btnToShip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->btnToShip->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnToShip->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnToShip->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(253)));
			this->btnToShip->Location = System::Drawing::Point(151, 109);
			this->btnToShip->Name = L"btnToShip";
			this->btnToShip->Size = System::Drawing::Size(111, 38);
			this->btnToShip->TabIndex = 26;
			this->btnToShip->Text = L"To Ship";
			this->btnToShip->UseVisualStyleBackColor = false;
			this->btnToShip->Click += gcnew System::EventHandler(this, &TrackOrderForm::btnToShip_Click);
			// 
			// TrackOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1251, 769);
			this->Controls->Add(this->btnReturnRefund);
			this->Controls->Add(this->btnCanceled);
			this->Controls->Add(this->btnCompleted);
			this->Controls->Add(this->btnToRecieve);
			this->Controls->Add(this->btnToShip);
			this->Controls->Add(this->pbBackHome2);
			this->Name = L"TrackOrderForm";
			this->Text = L"TrackOrderForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbBackHome2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void pbBackHome2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();

		newhomeUI2->Show();
;	}


	//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------//



	//----- When clicking on each button changes its color, but the other buttons should remain unchanged -----//


		   //////
		   //////----- btnToShip
		   //////
	private: System::Void btnToShip_Click(System::Object^ sender, System::EventArgs^ e) 
	{


		//////
		// 
		// Change color of btnToShip
		// 
		//////
		btnToShip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
			static_cast<System::Int32>(static_cast<System::Byte>(197)));

		btnToShip->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
			static_cast<System::Int32>(static_cast<System::Byte>(253)));

		btnToShip->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		// 
		// Reset color of btnToRecieve
		// 
		//
		btnToRecieve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToRecieve->ForeColor = System::Drawing::Color::Black;

		btnToRecieve->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCompleted
		// 
		//
		btnCompleted->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCompleted->ForeColor = System::Drawing::Color::Black;

		btnCompleted->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCanceled
		// 
		//
		btnCanceled->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCanceled->ForeColor = System::Drawing::Color::Black;

		btnCanceled->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnReturnRefund
		// 
		//
		btnReturnRefund->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnReturnRefund->ForeColor = System::Drawing::Color::Black;

		btnReturnRefund->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

	}
		  
		   
		   //////
		   //////----- btnToRecieve
		   //////
	private: System::Void btnToRecieve_Click(System::Object^ sender, System::EventArgs^ e) 
	{


		//
		// Reset color of btnToShip
		// 
		//
		btnToShip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToShip->ForeColor = System::Drawing::Color::Black;

		btnToShip->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		//////
		// 
		// Change color of btnToShip
		// 
		//////
		btnToRecieve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
			static_cast<System::Int32>(static_cast<System::Byte>(197)));

		btnToRecieve->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
			static_cast<System::Int32>(static_cast<System::Byte>(253)));

		btnToRecieve->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCompleted
		// 
		//
		btnCompleted->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCompleted->ForeColor = System::Drawing::Color::Black;

		btnCompleted->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCanceled
		// 
		//
		btnCanceled->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCanceled->ForeColor = System::Drawing::Color::Black;

		btnCanceled->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnReturnRefund
		// 
		//
		btnReturnRefund->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnReturnRefund->ForeColor = System::Drawing::Color::Black;

		btnReturnRefund->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
		  
		   
		   //////
		   //////----- btnCompleted
		   //////
	private: System::Void btnCompleted_Click(System::Object^ sender, System::EventArgs^ e) 
	{


		//
		// Reset color of btnToShip
		// 
		//
		btnToShip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToShip->ForeColor = System::Drawing::Color::Black;

		btnToShip->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		//
		// Reset color of btnToRecieve
		// 
		//
		btnToRecieve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToRecieve->ForeColor = System::Drawing::Color::Black;

		btnToRecieve->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//////
		// 
		// Change color of btnCompleted
		// 
		//////
		btnCompleted->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
			static_cast<System::Int32>(static_cast<System::Byte>(197)));

		btnCompleted->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
			static_cast<System::Int32>(static_cast<System::Byte>(253)));

		btnCompleted->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCanceled
		// 
		//
		btnCanceled->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCanceled->ForeColor = System::Drawing::Color::Black;

		btnCanceled->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnReturnRefund
		// 
		//
		btnReturnRefund->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnReturnRefund->ForeColor = System::Drawing::Color::Black;

		btnReturnRefund->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
		   
		   
		   //////
		   //////----- btnCanceled
		   //////
	private: System::Void btnCanceled_Click(System::Object^ sender, System::EventArgs^ e) 
	{


		//
		// Reset color of btnToShip
		// 
		//
		btnToShip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToShip->ForeColor = System::Drawing::Color::Black;

		btnToShip->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		//
		// Reset color of btnToRecieve
		// 
		//
		btnToRecieve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToRecieve->ForeColor = System::Drawing::Color::Black;

		btnToRecieve->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCompleted
		// 
		//
		btnCompleted->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCompleted->ForeColor = System::Drawing::Color::Black;

		btnCompleted->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//////
		// 
		// Change color of btnCanceled
		// 
		//////
		btnCanceled->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
			static_cast<System::Int32>(static_cast<System::Byte>(197)));

		btnCanceled->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
			static_cast<System::Int32>(static_cast<System::Byte>(253)));

		btnCanceled->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnReturnRefund
		// 
		//
		btnReturnRefund->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnReturnRefund->ForeColor = System::Drawing::Color::Black;

		btnReturnRefund->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
		  
		   
		   //////
		   //////----- btnReturnRefund
		   //////
	private: System::Void btnReturnRefund_Click(System::Object^ sender, System::EventArgs^ e) 
	{


		//
		// Reset color of btnToShip
		// 
		//
		btnToShip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToShip->ForeColor = System::Drawing::Color::Black;

		btnToShip->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		//
		// Reset color of btnToRecieve
		// 
		//
		btnToRecieve->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnToRecieve->ForeColor = System::Drawing::Color::Black;

		btnToRecieve->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCompleted
		// 
		//
		btnCompleted->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCompleted->ForeColor = System::Drawing::Color::Black;

		btnCompleted->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//
		// Reset color of btnCanceled
		// 
		//
		btnCanceled->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
			static_cast<System::Int32>(static_cast<System::Byte>(242)));

		btnCanceled->ForeColor = System::Drawing::Color::Black;

		btnCanceled->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));


		//////
		// 
		// Change color of btnReturnRefund
		// 
		//////
		btnReturnRefund->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
			static_cast<System::Int32>(static_cast<System::Byte>(197)));

		btnReturnRefund->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
			static_cast<System::Int32>(static_cast<System::Byte>(253)));

		btnReturnRefund->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
	}
};
}
