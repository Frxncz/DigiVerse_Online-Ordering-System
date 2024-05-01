#pragma once

namespace PointofSaleSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
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
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:







	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Panel^ pAllBooks;










    private: System::Windows::Forms::GroupBox^ gbOmnicientReader;


    private: System::Windows::Forms::GroupBox^ gbSoloLeveling;

    private: System::Windows::Forms::GroupBox^ gbSecondBrain;

    private: System::Windows::Forms::GroupBox^ gbMakeStick;

    private: System::Windows::Forms::GroupBox^ gbMiniHabits;

    private: System::Windows::Forms::GroupBox^ gbHumanNature;

    private: System::Windows::Forms::GroupBox^ gbPsychologyMoney;

    private: System::Windows::Forms::GroupBox^ gbAtomicHabits;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;










	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Button^ btnAddAH;



	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::PictureBox^ pictureBox8;

	private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label39;


	private: System::Windows::Forms::PictureBox^ pictureBox7;

	private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label37;


	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::Button^ btnAllGenre;

    private: System::Windows::Forms::Button^ btnNonFiction;



    private: System::Windows::Forms::Button^ btnFiction;
    private: System::Windows::Forms::Button^ btnNovel;



    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::Button^ btnFantasy;

    private: System::Windows::Forms::GroupBox^ groupBox2;
    private: System::Windows::Forms::Button^ btnAddOR;

    private: System::Windows::Forms::Button^ btnAddSL;
    private: System::Windows::Forms::Button^ btnAddSB;


    private: System::Windows::Forms::Button^ btnAddMIS;


    private: System::Windows::Forms::Button^ btnAddMH;

    private: System::Windows::Forms::Button^ btnAddHN;

    private: System::Windows::Forms::Button^ btnAddPM;
private: System::Windows::Forms::GroupBox^ gbWhiteEnd;








	private: System::ComponentModel::IContainer^ components;


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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->pAllBooks = (gcnew System::Windows::Forms::Panel());
            this->gbWhiteEnd = (gcnew System::Windows::Forms::GroupBox());
            this->gbOmnicientReader = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddOR = (gcnew System::Windows::Forms::Button());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->gbSoloLeveling = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddSL = (gcnew System::Windows::Forms::Button());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->gbSecondBrain = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddSB = (gcnew System::Windows::Forms::Button());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->gbMakeStick = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddMIS = (gcnew System::Windows::Forms::Button());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->gbMiniHabits = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddMH = (gcnew System::Windows::Forms::Button());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->gbHumanNature = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddHN = (gcnew System::Windows::Forms::Button());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->gbPsychologyMoney = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddPM = (gcnew System::Windows::Forms::Button());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->gbAtomicHabits = (gcnew System::Windows::Forms::GroupBox());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->btnAddAH = (gcnew System::Windows::Forms::Button());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->btnAllGenre = (gcnew System::Windows::Forms::Button());
            this->btnNonFiction = (gcnew System::Windows::Forms::Button());
            this->btnFiction = (gcnew System::Windows::Forms::Button());
            this->btnNovel = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->btnFantasy = (gcnew System::Windows::Forms::Button());
            this->groupBox8->SuspendLayout();
            this->groupBox9->SuspendLayout();
            this->pAllBooks->SuspendLayout();
            this->gbOmnicientReader->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            this->gbSoloLeveling->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->gbSecondBrain->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            this->gbMakeStick->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            this->gbMiniHabits->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->gbHumanNature->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->gbPsychologyMoney->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->gbAtomicHabits->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->groupBox7->SuspendLayout();
            this->flowLayoutPanel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(46, 116);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(136, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Menu List";
            // 
            // groupBox8
            // 
            this->groupBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->groupBox8->Controls->Add(this->label13);
            this->groupBox8->Controls->Add(this->label12);
            this->groupBox8->Controls->Add(this->label11);
            this->groupBox8->Controls->Add(this->label9);
            this->groupBox8->Controls->Add(this->label8);
            this->groupBox8->Controls->Add(this->label7);
            this->groupBox8->Controls->Add(this->label6);
            this->groupBox8->Controls->Add(this->label5);
            this->groupBox8->Controls->Add(this->label4);
            this->groupBox8->Controls->Add(this->label3);
            this->groupBox8->Location = System::Drawing::Point(975, 504);
            this->groupBox8->Name = L"groupBox8";
            this->groupBox8->Size = System::Drawing::Size(496, 142);
            this->groupBox8->TabIndex = 8;
            this->groupBox8->TabStop = false;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(429, 108);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(16, 18);
            this->label13->TabIndex = 17;
            this->label13->Text = L"0";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(429, 81);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(16, 18);
            this->label12->TabIndex = 16;
            this->label12->Text = L"0";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(429, 59);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(16, 18);
            this->label11->TabIndex = 14;
            this->label11->Text = L"0";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(407, 108);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(18, 17);
            this->label9->TabIndex = 15;
            this->label9->Text = L"P";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(407, 81);
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
            this->label6->Size = System::Drawing::Size(30, 17);
            this->label6->TabIndex = 13;
            this->label6->Text = L"Tax";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(20, 81);
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
            // groupBox9
            // 
            this->groupBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->groupBox9->Controls->Add(this->label14);
            this->groupBox9->Controls->Add(this->label10);
            this->groupBox9->Controls->Add(this->label2);
            this->groupBox9->Location = System::Drawing::Point(975, 663);
            this->groupBox9->Name = L"groupBox9";
            this->groupBox9->Size = System::Drawing::Size(496, 43);
            this->groupBox9->TabIndex = 9;
            this->groupBox9->TabStop = false;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(429, 13);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(16, 18);
            this->label14->TabIndex = 18;
            this->label14->Text = L"0";
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
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->button1->Location = System::Drawing::Point(995, 769);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(463, 53);
            this->button1->TabIndex = 10;
            this->button1->Text = L"Continue to Payment";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->button2->Location = System::Drawing::Point(1377, 719);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(80, 33);
            this->button2->TabIndex = 11;
            this->button2->Text = L"Apply";
            this->button2->UseVisualStyleBackColor = false;
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->ForeColor = System::Drawing::Color::Silver;
            this->textBox1->Location = System::Drawing::Point(999, 720);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(361, 30);
            this->textBox1->TabIndex = 12;
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // pAllBooks
            // 
            this->pAllBooks->AutoScroll = true;
            this->pAllBooks->Controls->Add(this->gbWhiteEnd);
            this->pAllBooks->Controls->Add(this->gbOmnicientReader);
            this->pAllBooks->Controls->Add(this->gbSoloLeveling);
            this->pAllBooks->Controls->Add(this->gbSecondBrain);
            this->pAllBooks->Controls->Add(this->gbMakeStick);
            this->pAllBooks->Controls->Add(this->gbMiniHabits);
            this->pAllBooks->Controls->Add(this->gbHumanNature);
            this->pAllBooks->Controls->Add(this->gbPsychologyMoney);
            this->pAllBooks->Controls->Add(this->gbAtomicHabits);
            this->pAllBooks->Location = System::Drawing::Point(35, 259);
            this->pAllBooks->Name = L"pAllBooks";
            this->pAllBooks->Size = System::Drawing::Size(831, 575);
            this->pAllBooks->TabIndex = 13;
            // 
            // gbWhiteEnd
            // 
            this->gbWhiteEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->gbWhiteEnd->Location = System::Drawing::Point(12, 784);
            this->gbWhiteEnd->Name = L"gbWhiteEnd";
            this->gbWhiteEnd->Size = System::Drawing::Size(781, 44);
            this->gbWhiteEnd->TabIndex = 26;
            this->gbWhiteEnd->TabStop = false;
            // 
            // gbOmnicientReader
            // 
            this->gbOmnicientReader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
                static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbOmnicientReader->Controls->Add(this->btnAddOR);
            this->gbOmnicientReader->Controls->Add(this->label49);
            this->gbOmnicientReader->Controls->Add(this->label40);
            this->gbOmnicientReader->Controls->Add(this->label41);
            this->gbOmnicientReader->Controls->Add(this->pictureBox8);
            this->gbOmnicientReader->Location = System::Drawing::Point(412, 584);
            this->gbOmnicientReader->Name = L"gbOmnicientReader";
            this->gbOmnicientReader->Size = System::Drawing::Size(381, 166);
            this->gbOmnicientReader->TabIndex = 19;
            this->gbOmnicientReader->TabStop = false;
            // 
            // btnAddOR
            // 
            this->btnAddOR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddOR->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddOR->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddOR->Location = System::Drawing::Point(286, 115);
            this->btnAddOR->Name = L"btnAddOR";
            this->btnAddOR->Size = System::Drawing::Size(68, 35);
            this->btnAddOR->TabIndex = 30;
            this->btnAddOR->Text = L"+ Add";
            this->btnAddOR->UseVisualStyleBackColor = false;
            // 
            // label49
            // 
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(92, 47);
            this->label49->Name = L"label49";
            this->label49->Size = System::Drawing::Size(203, 51);
            this->label49->TabIndex = 29;
            this->label49->Text = L"“Omniscient Reader” tells the \r\nstory of an ordinary business-\r\nman whose...";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->Location = System::Drawing::Point(21, 131);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(45, 16);
            this->label40->TabIndex = 25;
            this->label40->Text = L"P 999";
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(90, 17);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(162, 19);
            this->label41->TabIndex = 23;
            this->label41->Text = L"Omnicient Reader\'s";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(16, 5);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(57, 93);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox8->TabIndex = 22;
            this->pictureBox8->TabStop = false;
            // 
            // gbSoloLeveling
            // 
            this->gbSoloLeveling->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbSoloLeveling->Controls->Add(this->btnAddSL);
            this->gbSoloLeveling->Controls->Add(this->label48);
            this->gbSoloLeveling->Controls->Add(this->label38);
            this->gbSoloLeveling->Controls->Add(this->label39);
            this->gbSoloLeveling->Controls->Add(this->pictureBox7);
            this->gbSoloLeveling->Location = System::Drawing::Point(12, 582);
            this->gbSoloLeveling->Name = L"gbSoloLeveling";
            this->gbSoloLeveling->Size = System::Drawing::Size(357, 168);
            this->gbSoloLeveling->TabIndex = 18;
            this->gbSoloLeveling->TabStop = false;
            // 
            // btnAddSL
            // 
            this->btnAddSL->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddSL->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddSL->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddSL->Location = System::Drawing::Point(268, 115);
            this->btnAddSL->Name = L"btnAddSL";
            this->btnAddSL->Size = System::Drawing::Size(68, 35);
            this->btnAddSL->TabIndex = 29;
            this->btnAddSL->Text = L"+ Add";
            this->btnAddSL->UseVisualStyleBackColor = false;
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->Location = System::Drawing::Point(94, 53);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(211, 51);
            this->label48->TabIndex = 28;
            this->label48->Text = L"In a world of gifted hunters and \r\nmonsters, a weak hunter Sung \r\nJinwoo gains..."
                L"";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(20, 131);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(45, 16);
            this->label38->TabIndex = 25;
            this->label38->Text = L"P 999";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(92, 19);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(114, 19);
            this->label39->TabIndex = 23;
            this->label39->Text = L"Solo Leveling";
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(17, 5);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(57, 93);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 22;
            this->pictureBox7->TabStop = false;
            // 
            // gbSecondBrain
            // 
            this->gbSecondBrain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbSecondBrain->Controls->Add(this->btnAddSB);
            this->gbSecondBrain->Controls->Add(this->label47);
            this->gbSecondBrain->Controls->Add(this->label36);
            this->gbSecondBrain->Controls->Add(this->label37);
            this->gbSecondBrain->Controls->Add(this->pictureBox6);
            this->gbSecondBrain->Location = System::Drawing::Point(412, 391);
            this->gbSecondBrain->Name = L"gbSecondBrain";
            this->gbSecondBrain->Size = System::Drawing::Size(381, 169);
            this->gbSecondBrain->TabIndex = 17;
            this->gbSecondBrain->TabStop = false;
            // 
            // btnAddSB
            // 
            this->btnAddSB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddSB->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddSB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddSB->Location = System::Drawing::Point(286, 115);
            this->btnAddSB->Name = L"btnAddSB";
            this->btnAddSB->Size = System::Drawing::Size(68, 35);
            this->btnAddSB->TabIndex = 29;
            this->btnAddSB->Text = L"+ Add";
            this->btnAddSB->UseVisualStyleBackColor = false;
            // 
            // label47
            // 
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(95, 51);
            this->label47->Name = L"label47";
            this->label47->Size = System::Drawing::Size(213, 51);
            this->label47->TabIndex = 28;
            this->label47->Text = L"A second brain refers to a\r\nsystem or method of organizing\r\nand managing...\r\n";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(21, 131);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(45, 16);
            this->label36->TabIndex = 25;
            this->label36->Text = L"P 399";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(93, 18);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(115, 19);
            this->label37->TabIndex = 23;
            this->label37->Text = L"Second Brain";
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(16, 11);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(57, 96);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox6->TabIndex = 22;
            this->pictureBox6->TabStop = false;
            // 
            // gbMakeStick
            // 
            this->gbMakeStick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbMakeStick->Controls->Add(this->btnAddMIS);
            this->gbMakeStick->Controls->Add(this->label46);
            this->gbMakeStick->Controls->Add(this->label34);
            this->gbMakeStick->Controls->Add(this->label35);
            this->gbMakeStick->Controls->Add(this->pictureBox5);
            this->gbMakeStick->Location = System::Drawing::Point(14, 391);
            this->gbMakeStick->Name = L"gbMakeStick";
            this->gbMakeStick->Size = System::Drawing::Size(357, 169);
            this->gbMakeStick->TabIndex = 16;
            this->gbMakeStick->TabStop = false;
            // 
            // btnAddMIS
            // 
            this->btnAddMIS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddMIS->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddMIS->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddMIS->Location = System::Drawing::Point(268, 115);
            this->btnAddMIS->Name = L"btnAddMIS";
            this->btnAddMIS->Size = System::Drawing::Size(68, 35);
            this->btnAddMIS->TabIndex = 28;
            this->btnAddMIS->Text = L"+ Add";
            this->btnAddMIS->UseVisualStyleBackColor = false;
            // 
            // label46
            // 
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(85, 52);
            this->label46->Name = L"label46";
            this->label46->Size = System::Drawing::Size(212, 51);
            this->label46->TabIndex = 27;
            this->label46->Text = L"Make it Stick teaches you the\r\nstrategies that help you achieve\r\nthe two primary."
                L"..";
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(20, 131);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(45, 16);
            this->label34->TabIndex = 25;
            this->label34->Text = L"P 599";
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(87, 20);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(108, 19);
            this->label35->TabIndex = 23;
            this->label35->Text = L"Make it Stick";
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(14, 18);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(57, 91);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox5->TabIndex = 22;
            this->pictureBox5->TabStop = false;
            // 
            // gbMiniHabits
            // 
            this->gbMiniHabits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbMiniHabits->Controls->Add(this->btnAddMH);
            this->gbMiniHabits->Controls->Add(this->label45);
            this->gbMiniHabits->Controls->Add(this->label32);
            this->gbMiniHabits->Controls->Add(this->label33);
            this->gbMiniHabits->Controls->Add(this->pictureBox4);
            this->gbMiniHabits->Location = System::Drawing::Point(412, 197);
            this->gbMiniHabits->Name = L"gbMiniHabits";
            this->gbMiniHabits->Size = System::Drawing::Size(381, 169);
            this->gbMiniHabits->TabIndex = 15;
            this->gbMiniHabits->TabStop = false;
            // 
            // btnAddMH
            // 
            this->btnAddMH->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddMH->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddMH->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddMH->Location = System::Drawing::Point(286, 115);
            this->btnAddMH->Name = L"btnAddMH";
            this->btnAddMH->Size = System::Drawing::Size(68, 35);
            this->btnAddMH->TabIndex = 27;
            this->btnAddMH->Text = L"+ Add";
            this->btnAddMH->UseVisualStyleBackColor = false;
            // 
            // label45
            // 
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(94, 48);
            this->label45->Name = L"label45";
            this->label45->Size = System::Drawing::Size(183, 51);
            this->label45->TabIndex = 26;
            this->label45->Text = L"A mini habit is a very small\r\npositive behaviour that you \r\nforce yourself to do."
                L"..\r\n";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(21, 131);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(45, 16);
            this->label32->TabIndex = 25;
            this->label32->Text = L"P 399";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(91, 20);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(95, 19);
            this->label33->TabIndex = 23;
            this->label33->Text = L"Mini Habits";
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(16, 14);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(57, 96);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 22;
            this->pictureBox4->TabStop = false;
            // 
            // gbHumanNature
            // 
            this->gbHumanNature->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbHumanNature->Controls->Add(this->btnAddHN);
            this->gbHumanNature->Controls->Add(this->label44);
            this->gbHumanNature->Controls->Add(this->label30);
            this->gbHumanNature->Controls->Add(this->label31);
            this->gbHumanNature->Controls->Add(this->pictureBox3);
            this->gbHumanNature->Location = System::Drawing::Point(16, 197);
            this->gbHumanNature->Name = L"gbHumanNature";
            this->gbHumanNature->Size = System::Drawing::Size(357, 169);
            this->gbHumanNature->TabIndex = 14;
            this->gbHumanNature->TabStop = false;
            // 
            // btnAddHN
            // 
            this->btnAddHN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddHN->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddHN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddHN->Location = System::Drawing::Point(268, 115);
            this->btnAddHN->Name = L"btnAddHN";
            this->btnAddHN->Size = System::Drawing::Size(68, 35);
            this->btnAddHN->TabIndex = 27;
            this->btnAddHN->Text = L"+ Add";
            this->btnAddHN->UseVisualStyleBackColor = false;
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->Location = System::Drawing::Point(88, 53);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(185, 51);
            this->label44->TabIndex = 26;
            this->label44->Text = L"Human nature comprises \r\nthe fundamental disposition\r\nand character... \r\n";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(20, 131);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(45, 16);
            this->label30->TabIndex = 25;
            this->label30->Text = L"P 799";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(87, 22);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(122, 19);
            this->label31->TabIndex = 23;
            this->label31->Text = L"Human Nature";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(14, 14);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(57, 94);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 22;
            this->pictureBox3->TabStop = false;
            // 
            // gbPsychologyMoney
            // 
            this->gbPsychologyMoney->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
                static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbPsychologyMoney->Controls->Add(this->btnAddPM);
            this->gbPsychologyMoney->Controls->Add(this->label43);
            this->gbPsychologyMoney->Controls->Add(this->label28);
            this->gbPsychologyMoney->Controls->Add(this->label29);
            this->gbPsychologyMoney->Controls->Add(this->pictureBox2);
            this->gbPsychologyMoney->Location = System::Drawing::Point(412, 3);
            this->gbPsychologyMoney->Name = L"gbPsychologyMoney";
            this->gbPsychologyMoney->Size = System::Drawing::Size(381, 169);
            this->gbPsychologyMoney->TabIndex = 14;
            this->gbPsychologyMoney->TabStop = false;
            // 
            // btnAddPM
            // 
            this->btnAddPM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddPM->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddPM->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddPM->Location = System::Drawing::Point(286, 115);
            this->btnAddPM->Name = L"btnAddPM";
            this->btnAddPM->Size = System::Drawing::Size(68, 35);
            this->btnAddPM->TabIndex = 27;
            this->btnAddPM->Text = L"+ Add";
            this->btnAddPM->UseVisualStyleBackColor = false;
            // 
            // label43
            // 
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(94, 55);
            this->label43->Name = L"label43";
            this->label43->Size = System::Drawing::Size(190, 51);
            this->label43->TabIndex = 26;
            this->label43->Text = L"The psychology of money\r\nis the study of our behaviour\r\nwith money...\r\n";
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(21, 131);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(45, 16);
            this->label28->TabIndex = 25;
            this->label28->Text = L"P 200";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(94, 21);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(176, 19);
            this->label29->TabIndex = 23;
            this->label29->Text = L"Psychology of Money";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(16, 9);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(57, 98);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 22;
            this->pictureBox2->TabStop = false;
            // 
            // gbAtomicHabits
            // 
            this->gbAtomicHabits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbAtomicHabits->Controls->Add(this->label42);
            this->gbAtomicHabits->Controls->Add(this->btnAddAH);
            this->gbAtomicHabits->Controls->Add(this->label27);
            this->gbAtomicHabits->Controls->Add(this->label26);
            this->gbAtomicHabits->Controls->Add(this->pictureBox1);
            this->gbAtomicHabits->Location = System::Drawing::Point(17, 3);
            this->gbAtomicHabits->Name = L"gbAtomicHabits";
            this->gbAtomicHabits->Size = System::Drawing::Size(357, 169);
            this->gbAtomicHabits->TabIndex = 14;
            this->gbAtomicHabits->TabStop = false;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(90, 55);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(201, 51);
            this->label42->TabIndex = 20;
            this->label42->Text = L"Atomic Habits by James clear\r\nis a comprehensive, practical\r\nguide on how to...\r\n"
                L"";
            // 
            // btnAddAH
            // 
            this->btnAddAH->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAddAH->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddAH->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAddAH->Location = System::Drawing::Point(268, 115);
            this->btnAddAH->Name = L"btnAddAH";
            this->btnAddAH->Size = System::Drawing::Size(68, 35);
            this->btnAddAH->TabIndex = 21;
            this->btnAddAH->Text = L"+ Add";
            this->btnAddAH->UseVisualStyleBackColor = false;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(20, 131);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(45, 16);
            this->label27->TabIndex = 21;
            this->label27->Text = L"P 100";
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(89, 18);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(118, 19);
            this->label26->TabIndex = 20;
            this->label26->Text = L"Atomic Habits";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(15, 10);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(57, 98);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 19;
            this->pictureBox1->TabStop = false;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(258, 18);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(124, 24);
            this->label15->TabIndex = 1;
            this->label15->Text = L"Order Detail";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(27, 62);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(64, 17);
            this->label16->TabIndex = 14;
            this->label16->Text = L"Order ID";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(28, 89);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(39, 17);
            this->label17->TabIndex = 15;
            this->label17->Text = L"Date";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(28, 118);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(120, 17);
            this->label18->TabIndex = 16;
            this->label18->Text = L"Customer Name:";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(26, 146);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(198, 19);
            this->label19->TabIndex = 17;
            this->label19->Text = L"May Barcelona Figueroa";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(518, 63);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(72, 17);
            this->label20->TabIndex = 18;
            this->label20->Text = L"12345678";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(463, 90);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(129, 17);
            this->label21->TabIndex = 19;
            this->label21->Text = L"Monday, 6/24/2024";
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->button3->Location = System::Drawing::Point(532, 134);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(58, 31);
            this->button3->TabIndex = 20;
            this->button3->Text = L"Edit";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // groupBox7
            // 
            this->groupBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->groupBox7->Controls->Add(this->flowLayoutPanel1);
            this->groupBox7->Controls->Add(this->button3);
            this->groupBox7->Controls->Add(this->label21);
            this->groupBox7->Controls->Add(this->label20);
            this->groupBox7->Controls->Add(this->label19);
            this->groupBox7->Controls->Add(this->label18);
            this->groupBox7->Controls->Add(this->label17);
            this->groupBox7->Controls->Add(this->label16);
            this->groupBox7->Controls->Add(this->label15);
            this->groupBox7->Location = System::Drawing::Point(898, 36);
            this->groupBox7->Name = L"groupBox7";
            this->groupBox7->Size = System::Drawing::Size(644, 434);
            this->groupBox7->TabIndex = 7;
            this->groupBox7->TabStop = false;
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->AutoScroll = true;
            this->flowLayoutPanel1->Controls->Add(this->groupBox1);
            this->flowLayoutPanel1->Controls->Add(this->groupBox2);
            this->flowLayoutPanel1->Location = System::Drawing::Point(23, 181);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(597, 231);
            this->flowLayoutPanel1->TabIndex = 21;
            // 
            // groupBox1
            // 
            this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->groupBox1->Location = System::Drawing::Point(3, 3);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(564, 194);
            this->groupBox1->TabIndex = 15;
            this->groupBox1->TabStop = false;
            // 
            // groupBox2
            // 
            this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            this->groupBox2->Location = System::Drawing::Point(3, 203);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(564, 194);
            this->groupBox2->TabIndex = 26;
            this->groupBox2->TabStop = false;
            // 
            // btnAllGenre
            // 
            this->btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAllGenre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAllGenre->Location = System::Drawing::Point(52, 190);
            this->btnAllGenre->Name = L"btnAllGenre";
            this->btnAllGenre->Size = System::Drawing::Size(111, 38);
            this->btnAllGenre->TabIndex = 19;
            this->btnAllGenre->Text = L"All Genre";
            this->btnAllGenre->UseVisualStyleBackColor = false;
            this->btnAllGenre->Click += gcnew System::EventHandler(this, &Home::btnAllGenre_Click);
            // 
            // btnNonFiction
            // 
            this->btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->btnNonFiction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnNonFiction->ForeColor = System::Drawing::Color::Black;
            this->btnNonFiction->Location = System::Drawing::Point(200, 190);
            this->btnNonFiction->Name = L"btnNonFiction";
            this->btnNonFiction->Size = System::Drawing::Size(111, 38);
            this->btnNonFiction->TabIndex = 20;
            this->btnNonFiction->Text = L"Non Fiction";
            this->btnNonFiction->UseVisualStyleBackColor = false;
            this->btnNonFiction->Click += gcnew System::EventHandler(this, &Home::btnNonFiction_Click);
            // 
            // btnFiction
            // 
            this->btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->btnFiction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnFiction->ForeColor = System::Drawing::Color::Black;
            this->btnFiction->Location = System::Drawing::Point(349, 190);
            this->btnFiction->Name = L"btnFiction";
            this->btnFiction->Size = System::Drawing::Size(111, 38);
            this->btnFiction->TabIndex = 21;
            this->btnFiction->Text = L"Fiction";
            this->btnFiction->UseVisualStyleBackColor = false;
            this->btnFiction->Click += gcnew System::EventHandler(this, &Home::btnFiction_Click);
            // 
            // btnNovel
            // 
            this->btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->btnNovel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnNovel->ForeColor = System::Drawing::Color::Black;
            this->btnNovel->Location = System::Drawing::Point(492, 190);
            this->btnNovel->Name = L"btnNovel";
            this->btnNovel->Size = System::Drawing::Size(111, 38);
            this->btnNovel->TabIndex = 22;
            this->btnNovel->Text = L"Novel";
            this->btnNovel->UseVisualStyleBackColor = false;
            this->btnNovel->Click += gcnew System::EventHandler(this, &Home::btnNovel_Click);
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(544, 122);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(203, 22);
            this->textBox2->TabIndex = 23;
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(516, 122);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(18, 20);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 24;
            this->pictureBox9->TabStop = false;
            // 
            // btnFantasy
            // 
            this->btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->btnFantasy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnFantasy->ForeColor = System::Drawing::Color::Black;
            this->btnFantasy->Location = System::Drawing::Point(636, 190);
            this->btnFantasy->Name = L"btnFantasy";
            this->btnFantasy->Size = System::Drawing::Size(111, 38);
            this->btnFantasy->TabIndex = 25;
            this->btnFantasy->Text = L"Fantsy";
            this->btnFantasy->UseVisualStyleBackColor = false;
            this->btnFantasy->Click += gcnew System::EventHandler(this, &Home::btnFantasy_Click);
            // 
            // Home
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->ClientSize = System::Drawing::Size(1572, 846);
            this->Controls->Add(this->btnFantasy);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->btnNovel);
            this->Controls->Add(this->btnFiction);
            this->Controls->Add(this->btnNonFiction);
            this->Controls->Add(this->btnAllGenre);
            this->Controls->Add(this->pAllBooks);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->groupBox9);
            this->Controls->Add(this->groupBox8);
            this->Controls->Add(this->groupBox7);
            this->Controls->Add(this->label1);
            this->Name = L"Home";
            this->Text = L"HomeForm";
            this->groupBox8->ResumeLayout(false);
            this->groupBox8->PerformLayout();
            this->groupBox9->ResumeLayout(false);
            this->groupBox9->PerformLayout();
            this->pAllBooks->ResumeLayout(false);
            this->gbOmnicientReader->ResumeLayout(false);
            this->gbOmnicientReader->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            this->gbSoloLeveling->ResumeLayout(false);
            this->gbSoloLeveling->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->gbSecondBrain->ResumeLayout(false);
            this->gbSecondBrain->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            this->gbMakeStick->ResumeLayout(false);
            this->gbMakeStick->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            this->gbMiniHabits->ResumeLayout(false);
            this->gbMiniHabits->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->gbHumanNature->ResumeLayout(false);
            this->gbHumanNature->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->gbPsychologyMoney->ResumeLayout(false);
            this->gbPsychologyMoney->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->gbAtomicHabits->ResumeLayout(false);
            this->gbAtomicHabits->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->groupBox7->ResumeLayout(false);
            this->groupBox7->PerformLayout();
            this->flowLayoutPanel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion


    //----- When clicking on each button changes its color, but the other buttons should remain unchanged -----//
    //--------------- When clicking on each button, it will sort the books based on their genre ---------------//


        //btnAllGenre
    private: System::Void btnAllGenre_Click(System::Object^ sender, System::EventArgs^ e) 
    {

        ////
        ////
        ////

        //
        // Change color of btnAllGenre
        //
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnAllGenre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNonFiction
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));


        // Reset color of btnFiction
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNovel
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel ->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnFantasy

        btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFantasy->ForeColor = System::Drawing::Color::Black;

        btnFantasy->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        ////
        ////
        ////

        // Add all the book group box from panel->pAllBooks
        pAllBooks->Controls->Remove(gbSoloLeveling);
        pAllBooks->Controls->Remove(gbOmnicientReader);

        pAllBooks->Controls->Add(gbAtomicHabits);
        pAllBooks->Controls->Add(gbPsychologyMoney);
        pAllBooks->Controls->Add(gbHumanNature);
        pAllBooks->Controls->Add(gbMiniHabits);
        pAllBooks->Controls->Add(gbMakeStick);
        pAllBooks->Controls->Add(gbSecondBrain);

        pAllBooks->Controls->Add(gbSoloLeveling);
        pAllBooks->Controls->Add(gbOmnicientReader);

        // Change the location of the gbSoloLeveling & gbOmnicientReader

        // Get the current scroll position of the panel
        int scrollPosX = pAllBooks->HorizontalScroll->Value;
        int scrollPosY = pAllBooks->VerticalScroll->Value;

        // Reset the location of gbSoloLeveling & gbOmnicientReader back to their original positions
        gbSoloLeveling->Location = System::Drawing::Point(12 - scrollPosX, 482 - scrollPosY);
        gbOmnicientReader->Location = System::Drawing::Point(312 - scrollPosX, 482 - scrollPosY);

        ////
        ////
        ////

    }

           //btnNonFiction
    private: System::Void btnNonFiction_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        // Reset color of btnAllGenre
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        //
        // Change color of btnNonFiction
        //
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnNonFiction->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));


        // Reset color of btnFiction
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNovel
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnFantasy

        btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFantasy->ForeColor = System::Drawing::Color::Black;

        btnFantasy->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        ////
        ////
        ////

        // Add other books and Remove gbSoloLeveling & gbOmnicientRedear from panel->pAllBooks
        pAllBooks->Controls->Remove(gbSoloLeveling);
        pAllBooks->Controls->Remove(gbOmnicientReader);
        pAllBooks->Controls->Add(gbAtomicHabits);
        pAllBooks->Controls->Add(gbPsychologyMoney);
        pAllBooks->Controls->Add(gbHumanNature);
        pAllBooks->Controls->Add(gbMiniHabits);
        pAllBooks->Controls->Add(gbMakeStick);
        pAllBooks->Controls->Add(gbSecondBrain);

        ////
        ////
        ////
        ////
    }
           
           //btnFiction
    private: System::Void btnFiction_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        // Reset color of btnAllGenre
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNonFiction
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Change color of btnFiction
        //
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnFiction->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNovel
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnFantasy

        this->btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFantasy->ForeColor = System::Drawing::Color::Black;

        btnFantasy->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        ////
        ////
        ////

        // Remove all the book group box from panel->pAllBooks
        pAllBooks->Controls->Remove(gbSoloLeveling);
        pAllBooks->Controls->Remove(gbOmnicientReader);
        pAllBooks->Controls->Remove(gbAtomicHabits);
        pAllBooks->Controls->Remove(gbPsychologyMoney);
        pAllBooks->Controls->Remove(gbHumanNature);
        pAllBooks->Controls->Remove(gbMiniHabits);
        pAllBooks->Controls->Remove(gbMakeStick);
        pAllBooks->Controls->Remove(gbSecondBrain);

        ////
        ////
        ////
        ////
    }

           //btnNovel
    private: System::Void btnNovel_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        // Reset color of AllGenre
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNonFiction
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));


        // Reset color of btnFiction
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        //
        // Change color of btnNovel
        //
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnNovel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnFantasy
        btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFantasy->ForeColor = System::Drawing::Color::Black;

        btnFantasy->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        ////
        ////
        ////

        // Remove all the book group box except for gbSoloLeveling & gbOmnicientReader from panel->pAllBooks
        pAllBooks->Controls->Remove(gbAtomicHabits);
        pAllBooks->Controls->Remove(gbPsychologyMoney);
        pAllBooks->Controls->Remove(gbHumanNature);
        pAllBooks->Controls->Remove(gbMiniHabits);
        pAllBooks->Controls->Remove(gbMakeStick);
        pAllBooks->Controls->Remove(gbSecondBrain);

        // the gbSoloLeveling & gbOmnicientReader
        pAllBooks->Controls->Add(gbSoloLeveling);
        pAllBooks->Controls->Add(gbOmnicientReader);

        // Change the location of the gbSoloLeveling & gbOmnicientReader
        gbSoloLeveling->Location = System::Drawing::Point(17, 3);
        gbOmnicientReader->Location = System::Drawing::Point(312, 3);

        ////
        ////
        ////

    }

           //btnFantsy
    private: System::Void btnFantasy_Click(System::Object^ sender, System::EventArgs^ e) 
    {
        // Reset color of btnAllGenre
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNonFiction
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));


        // Reset color of btnFiction
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        // Reset color of btnNovel
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        //
        // Change color of btnFantasy
        //
        btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnFantasy->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnFantasy->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        ////
        ////
        ////

        // Remove all the book group box except for gbSoloLeveling & gbOmnicientReader from panel->pAllBooks
        pAllBooks->Controls->Remove(gbAtomicHabits);
        pAllBooks->Controls->Remove(gbPsychologyMoney);
        pAllBooks->Controls->Remove(gbHumanNature);
        pAllBooks->Controls->Remove(gbMiniHabits);
        pAllBooks->Controls->Remove(gbMakeStick);
        pAllBooks->Controls->Remove(gbSecondBrain);

        // the gbSoloLeveling & gbOmnicientReader
        pAllBooks->Controls->Add(gbSoloLeveling);
        pAllBooks->Controls->Add(gbOmnicientReader);

        // Change the location of the gbSoloLeveling & gbOmnicientReader
        gbSoloLeveling->Location = System::Drawing::Point(17, 3);
        gbOmnicientReader->Location = System::Drawing::Point(312, 3);

        ////
        ////
        ////
    }

};
}
