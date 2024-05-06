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

    ///
    ///
    /// 


    private: GroupBox^ newGbAtomicHabits;
    private: GroupBox^ newGbMoney;


    //--- Atomic habits plus and minus buttons and also the quantity

    private: System::Windows::Forms::Label^ lblQuantity;
    private: System::Windows::Forms::Button^ btnIncreaseQty;
    private: System::Windows::Forms::Button^ btnDecreaseQty;


    //--- Atomic habits plus and minus buttons and also the quantity

    private: System::Windows::Forms::Label^ lblQuantityMoney;
    private: System::Windows::Forms::Button^ btnIncreaseQtyMoney;
    private: System::Windows::Forms::Button^ btnDecreaseQtyMoney;




    private: System::Windows::Forms::Label^ lblSubtotal;
    private: System::Windows::Forms::Label^ lblTotalPayment;


    ///
    ///
    /// 

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

	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

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

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;



	private: System::Windows::Forms::GroupBox^ groupBox7;
    private: System::Windows::Forms::FlowLayoutPanel^ flpOrderDetail;
    private: System::Windows::Forms::PictureBox^ pbAtomicHabits;
    private: System::Windows::Forms::Label^ lblAtomic;















	private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Button^ btnAddAH;



	private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::Label^ lblReader;

    private: System::Windows::Forms::PictureBox^ pbReader;


	private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ lblSolo;

    private: System::Windows::Forms::PictureBox^ pbSoloLeveling;




	private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ lblBrain;

    private: System::Windows::Forms::PictureBox^ pbSecondBrain;




	private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ lblMakeIt;

    private: System::Windows::Forms::PictureBox^ pbMakeStick;


	private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ lblMini;

    private: System::Windows::Forms::PictureBox^ pbMiniHabits;


	private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ lblHuman;
    private: System::Windows::Forms::PictureBox^ pbHumanNature;




	private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ lblMoney;


    private: System::Windows::Forms::PictureBox^ pbMoney;

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





    private: System::Windows::Forms::Button^ btnFantasy;


    private: System::Windows::Forms::Button^ btnAddOR;

    private: System::Windows::Forms::Button^ btnAddSL;
    private: System::Windows::Forms::Button^ btnAddSB;


    private: System::Windows::Forms::Button^ btnAddMIS;


    private: System::Windows::Forms::Button^ btnAddMH;

    private: System::Windows::Forms::Button^ btnAddHN;

    private: System::Windows::Forms::Button^ btnAddPM;
    private: System::Windows::Forms::GroupBox^ gbWhiteEnd;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label21;



















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
            this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
            this->lblTotalPayment = (gcnew System::Windows::Forms::Label());
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
            this->lblReader = (gcnew System::Windows::Forms::Label());
            this->pbReader = (gcnew System::Windows::Forms::PictureBox());
            this->gbSoloLeveling = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddSL = (gcnew System::Windows::Forms::Button());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->lblSolo = (gcnew System::Windows::Forms::Label());
            this->pbSoloLeveling = (gcnew System::Windows::Forms::PictureBox());
            this->gbSecondBrain = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddSB = (gcnew System::Windows::Forms::Button());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->lblBrain = (gcnew System::Windows::Forms::Label());
            this->pbSecondBrain = (gcnew System::Windows::Forms::PictureBox());
            this->gbMakeStick = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddMIS = (gcnew System::Windows::Forms::Button());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->lblMakeIt = (gcnew System::Windows::Forms::Label());
            this->pbMakeStick = (gcnew System::Windows::Forms::PictureBox());
            this->gbMiniHabits = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddMH = (gcnew System::Windows::Forms::Button());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->lblMini = (gcnew System::Windows::Forms::Label());
            this->pbMiniHabits = (gcnew System::Windows::Forms::PictureBox());
            this->gbHumanNature = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddHN = (gcnew System::Windows::Forms::Button());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->lblHuman = (gcnew System::Windows::Forms::Label());
            this->pbHumanNature = (gcnew System::Windows::Forms::PictureBox());
            this->gbPsychologyMoney = (gcnew System::Windows::Forms::GroupBox());
            this->btnAddPM = (gcnew System::Windows::Forms::Button());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->lblMoney = (gcnew System::Windows::Forms::Label());
            this->pbMoney = (gcnew System::Windows::Forms::PictureBox());
            this->gbAtomicHabits = (gcnew System::Windows::Forms::GroupBox());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->btnAddAH = (gcnew System::Windows::Forms::Button());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->lblAtomic = (gcnew System::Windows::Forms::Label());
            this->pbAtomicHabits = (gcnew System::Windows::Forms::PictureBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
            this->flpOrderDetail = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->btnAllGenre = (gcnew System::Windows::Forms::Button());
            this->btnNonFiction = (gcnew System::Windows::Forms::Button());
            this->btnFiction = (gcnew System::Windows::Forms::Button());
            this->btnNovel = (gcnew System::Windows::Forms::Button());
            this->btnFantasy = (gcnew System::Windows::Forms::Button());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->groupBox8->SuspendLayout();
            this->groupBox9->SuspendLayout();
            this->pAllBooks->SuspendLayout();
            this->gbOmnicientReader->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReader))->BeginInit();
            this->gbSoloLeveling->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSoloLeveling))->BeginInit();
            this->gbSecondBrain->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSecondBrain))->BeginInit();
            this->gbMakeStick->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMakeStick))->BeginInit();
            this->gbMiniHabits->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMiniHabits))->BeginInit();
            this->gbHumanNature->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHumanNature))->BeginInit();
            this->gbPsychologyMoney->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMoney))->BeginInit();
            this->gbAtomicHabits->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAtomicHabits))->BeginInit();
            this->groupBox7->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(46, 89);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(136, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Menu List";
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
            this->groupBox8->Location = System::Drawing::Point(975, 480);
            this->groupBox8->Name = L"groupBox8";
            this->groupBox8->Size = System::Drawing::Size(496, 149);
            this->groupBox8->TabIndex = 8;
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
            // groupBox9
            // 
            this->groupBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->groupBox9->Controls->Add(this->lblTotalPayment);
            this->groupBox9->Controls->Add(this->label10);
            this->groupBox9->Controls->Add(this->label2);
            this->groupBox9->Location = System::Drawing::Point(975, 649);
            this->groupBox9->Name = L"groupBox9";
            this->groupBox9->Size = System::Drawing::Size(496, 43);
            this->groupBox9->TabIndex = 9;
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
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->button1->Location = System::Drawing::Point(992, 769);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(463, 53);
            this->button1->TabIndex = 10;
            this->button1->Text = L"Continue to Checkout";
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
            this->button2->Location = System::Drawing::Point(1374, 719);
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
            this->textBox1->Location = System::Drawing::Point(996, 720);
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
            this->pAllBooks->Location = System::Drawing::Point(35, 233);
            this->pAllBooks->Name = L"pAllBooks";
            this->pAllBooks->Size = System::Drawing::Size(831, 611);
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
            this->gbOmnicientReader->Controls->Add(this->lblReader);
            this->gbOmnicientReader->Controls->Add(this->pbReader);
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
            // lblReader
            // 
            this->lblReader->AutoSize = true;
            this->lblReader->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblReader->Location = System::Drawing::Point(90, 17);
            this->lblReader->Name = L"lblReader";
            this->lblReader->Size = System::Drawing::Size(162, 19);
            this->lblReader->TabIndex = 23;
            this->lblReader->Text = L"Omnicient Reader\'s";
            // 
            // pbReader
            // 
            this->pbReader->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbReader.Image")));
            this->pbReader->Location = System::Drawing::Point(16, 19);
            this->pbReader->Name = L"pbReader";
            this->pbReader->Size = System::Drawing::Size(57, 93);
            this->pbReader->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbReader->TabIndex = 22;
            this->pbReader->TabStop = false;
            // 
            // gbSoloLeveling
            // 
            this->gbSoloLeveling->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbSoloLeveling->Controls->Add(this->btnAddSL);
            this->gbSoloLeveling->Controls->Add(this->label48);
            this->gbSoloLeveling->Controls->Add(this->label38);
            this->gbSoloLeveling->Controls->Add(this->lblSolo);
            this->gbSoloLeveling->Controls->Add(this->pbSoloLeveling);
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
            // lblSolo
            // 
            this->lblSolo->AutoSize = true;
            this->lblSolo->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblSolo->Location = System::Drawing::Point(92, 19);
            this->lblSolo->Name = L"lblSolo";
            this->lblSolo->Size = System::Drawing::Size(114, 19);
            this->lblSolo->TabIndex = 23;
            this->lblSolo->Text = L"Solo Leveling";
            // 
            // pbSoloLeveling
            // 
            this->pbSoloLeveling->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSoloLeveling.Image")));
            this->pbSoloLeveling->Location = System::Drawing::Point(17, 18);
            this->pbSoloLeveling->Name = L"pbSoloLeveling";
            this->pbSoloLeveling->Size = System::Drawing::Size(57, 93);
            this->pbSoloLeveling->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbSoloLeveling->TabIndex = 22;
            this->pbSoloLeveling->TabStop = false;
            // 
            // gbSecondBrain
            // 
            this->gbSecondBrain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbSecondBrain->Controls->Add(this->btnAddSB);
            this->gbSecondBrain->Controls->Add(this->label47);
            this->gbSecondBrain->Controls->Add(this->label36);
            this->gbSecondBrain->Controls->Add(this->lblBrain);
            this->gbSecondBrain->Controls->Add(this->pbSecondBrain);
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
            // lblBrain
            // 
            this->lblBrain->AutoSize = true;
            this->lblBrain->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblBrain->Location = System::Drawing::Point(93, 18);
            this->lblBrain->Name = L"lblBrain";
            this->lblBrain->Size = System::Drawing::Size(115, 19);
            this->lblBrain->TabIndex = 23;
            this->lblBrain->Text = L"Second Brain";
            // 
            // pbSecondBrain
            // 
            this->pbSecondBrain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSecondBrain.Image")));
            this->pbSecondBrain->Location = System::Drawing::Point(16, 11);
            this->pbSecondBrain->Name = L"pbSecondBrain";
            this->pbSecondBrain->Size = System::Drawing::Size(57, 96);
            this->pbSecondBrain->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbSecondBrain->TabIndex = 22;
            this->pbSecondBrain->TabStop = false;
            // 
            // gbMakeStick
            // 
            this->gbMakeStick->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbMakeStick->Controls->Add(this->btnAddMIS);
            this->gbMakeStick->Controls->Add(this->label46);
            this->gbMakeStick->Controls->Add(this->label34);
            this->gbMakeStick->Controls->Add(this->lblMakeIt);
            this->gbMakeStick->Controls->Add(this->pbMakeStick);
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
            // lblMakeIt
            // 
            this->lblMakeIt->AutoSize = true;
            this->lblMakeIt->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblMakeIt->Location = System::Drawing::Point(87, 20);
            this->lblMakeIt->Name = L"lblMakeIt";
            this->lblMakeIt->Size = System::Drawing::Size(108, 19);
            this->lblMakeIt->TabIndex = 23;
            this->lblMakeIt->Text = L"Make it Stick";
            // 
            // pbMakeStick
            // 
            this->pbMakeStick->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMakeStick.Image")));
            this->pbMakeStick->Location = System::Drawing::Point(14, 18);
            this->pbMakeStick->Name = L"pbMakeStick";
            this->pbMakeStick->Size = System::Drawing::Size(57, 91);
            this->pbMakeStick->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbMakeStick->TabIndex = 22;
            this->pbMakeStick->TabStop = false;
            // 
            // gbMiniHabits
            // 
            this->gbMiniHabits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbMiniHabits->Controls->Add(this->btnAddMH);
            this->gbMiniHabits->Controls->Add(this->label45);
            this->gbMiniHabits->Controls->Add(this->label32);
            this->gbMiniHabits->Controls->Add(this->lblMini);
            this->gbMiniHabits->Controls->Add(this->pbMiniHabits);
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
            // lblMini
            // 
            this->lblMini->AutoSize = true;
            this->lblMini->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblMini->Location = System::Drawing::Point(91, 20);
            this->lblMini->Name = L"lblMini";
            this->lblMini->Size = System::Drawing::Size(95, 19);
            this->lblMini->TabIndex = 23;
            this->lblMini->Text = L"Mini Habits";
            // 
            // pbMiniHabits
            // 
            this->pbMiniHabits->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMiniHabits.Image")));
            this->pbMiniHabits->Location = System::Drawing::Point(16, 14);
            this->pbMiniHabits->Name = L"pbMiniHabits";
            this->pbMiniHabits->Size = System::Drawing::Size(57, 96);
            this->pbMiniHabits->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbMiniHabits->TabIndex = 22;
            this->pbMiniHabits->TabStop = false;
            // 
            // gbHumanNature
            // 
            this->gbHumanNature->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbHumanNature->Controls->Add(this->btnAddHN);
            this->gbHumanNature->Controls->Add(this->label44);
            this->gbHumanNature->Controls->Add(this->label30);
            this->gbHumanNature->Controls->Add(this->lblHuman);
            this->gbHumanNature->Controls->Add(this->pbHumanNature);
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
            // lblHuman
            // 
            this->lblHuman->AutoSize = true;
            this->lblHuman->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblHuman->Location = System::Drawing::Point(87, 22);
            this->lblHuman->Name = L"lblHuman";
            this->lblHuman->Size = System::Drawing::Size(122, 19);
            this->lblHuman->TabIndex = 23;
            this->lblHuman->Text = L"Human Nature";
            // 
            // pbHumanNature
            // 
            this->pbHumanNature->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHumanNature.Image")));
            this->pbHumanNature->Location = System::Drawing::Point(14, 14);
            this->pbHumanNature->Name = L"pbHumanNature";
            this->pbHumanNature->Size = System::Drawing::Size(57, 94);
            this->pbHumanNature->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbHumanNature->TabIndex = 22;
            this->pbHumanNature->TabStop = false;
            // 
            // gbPsychologyMoney
            // 
            this->gbPsychologyMoney->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)),
                static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbPsychologyMoney->Controls->Add(this->btnAddPM);
            this->gbPsychologyMoney->Controls->Add(this->label43);
            this->gbPsychologyMoney->Controls->Add(this->label28);
            this->gbPsychologyMoney->Controls->Add(this->lblMoney);
            this->gbPsychologyMoney->Controls->Add(this->pbMoney);
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
            this->btnAddPM->Click += gcnew System::EventHandler(this, &Home::btnAddPM_Click);
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
            // lblMoney
            // 
            this->lblMoney->AutoSize = true;
            this->lblMoney->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblMoney->Location = System::Drawing::Point(94, 21);
            this->lblMoney->Name = L"lblMoney";
            this->lblMoney->Size = System::Drawing::Size(176, 19);
            this->lblMoney->TabIndex = 23;
            this->lblMoney->Text = L"Psychology of Money";
            // 
            // pbMoney
            // 
            this->pbMoney->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMoney.Image")));
            this->pbMoney->Location = System::Drawing::Point(16, 9);
            this->pbMoney->Name = L"pbMoney";
            this->pbMoney->Size = System::Drawing::Size(57, 98);
            this->pbMoney->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbMoney->TabIndex = 22;
            this->pbMoney->TabStop = false;
            // 
            // gbAtomicHabits
            // 
            this->gbAtomicHabits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbAtomicHabits->Controls->Add(this->label42);
            this->gbAtomicHabits->Controls->Add(this->btnAddAH);
            this->gbAtomicHabits->Controls->Add(this->label27);
            this->gbAtomicHabits->Controls->Add(this->lblAtomic);
            this->gbAtomicHabits->Controls->Add(this->pbAtomicHabits);
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
            this->btnAddAH->Click += gcnew System::EventHandler(this, &Home::btnAddAH_Click);
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
            // lblAtomic
            // 
            this->lblAtomic->AutoSize = true;
            this->lblAtomic->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblAtomic->Location = System::Drawing::Point(89, 18);
            this->lblAtomic->Name = L"lblAtomic";
            this->lblAtomic->Size = System::Drawing::Size(118, 19);
            this->lblAtomic->TabIndex = 20;
            this->lblAtomic->Text = L"Atomic Habits";
            // 
            // pbAtomicHabits
            // 
            this->pbAtomicHabits->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbAtomicHabits.Image")));
            this->pbAtomicHabits->Location = System::Drawing::Point(15, 10);
            this->pbAtomicHabits->Name = L"pbAtomicHabits";
            this->pbAtomicHabits->Size = System::Drawing::Size(57, 98);
            this->pbAtomicHabits->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbAtomicHabits->TabIndex = 19;
            this->pbAtomicHabits->TabStop = false;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(256, 18);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(158, 24);
            this->label15->TabIndex = 1;
            this->label15->Text = L"My Order Detail";
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
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(26, 131);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(198, 19);
            this->label19->TabIndex = 17;
            this->label19->Text = L"May Barcelona Figueroa";
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
            this->groupBox7->Location = System::Drawing::Point(898, 21);
            this->groupBox7->Name = L"groupBox7";
            this->groupBox7->Size = System::Drawing::Size(644, 434);
            this->groupBox7->TabIndex = 7;
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
            // btnAllGenre
            // 
            this->btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAllGenre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAllGenre->Location = System::Drawing::Point(52, 163);
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
            this->btnNonFiction->Location = System::Drawing::Point(201, 163);
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
            this->btnFiction->Location = System::Drawing::Point(357, 163);
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
            this->btnNovel->Location = System::Drawing::Point(501, 163);
            this->btnNovel->Name = L"btnNovel";
            this->btnNovel->Size = System::Drawing::Size(111, 38);
            this->btnNovel->TabIndex = 22;
            this->btnNovel->Text = L"Novel";
            this->btnNovel->UseVisualStyleBackColor = false;
            this->btnNovel->Click += gcnew System::EventHandler(this, &Home::btnNovel_Click);
            // 
            // btnFantasy
            // 
            this->btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->btnFantasy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnFantasy->ForeColor = System::Drawing::Color::Black;
            this->btnFantasy->Location = System::Drawing::Point(646, 163);
            this->btnFantasy->Name = L"btnFantasy";
            this->btnFantasy->Size = System::Drawing::Size(111, 38);
            this->btnFantasy->TabIndex = 25;
            this->btnFantasy->Text = L"Fantsy";
            this->btnFantasy->UseVisualStyleBackColor = false;
            this->btnFantasy->Click += gcnew System::EventHandler(this, &Home::btnFantasy_Click);
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(51, 32);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(25, 25);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 26;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(82, 32);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(35, 25);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 27;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox9
            // 
            this->pictureBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(216)),
                static_cast<System::Int32>(static_cast<System::Byte>(241)));
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(511, 98);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(18, 20);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 24;
            this->pictureBox9->TabStop = false;
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
                static_cast<System::Int32>(static_cast<System::Byte>(242)));
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(501, 92);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(255, 30);
            this->textBox2->TabIndex = 23;
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // Home
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->ClientSize = System::Drawing::Size(1564, 852);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbReader))->EndInit();
            this->gbSoloLeveling->ResumeLayout(false);
            this->gbSoloLeveling->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSoloLeveling))->EndInit();
            this->gbSecondBrain->ResumeLayout(false);
            this->gbSecondBrain->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSecondBrain))->EndInit();
            this->gbMakeStick->ResumeLayout(false);
            this->gbMakeStick->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMakeStick))->EndInit();
            this->gbMiniHabits->ResumeLayout(false);
            this->gbMiniHabits->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMiniHabits))->EndInit();
            this->gbHumanNature->ResumeLayout(false);
            this->gbHumanNature->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHumanNature))->EndInit();
            this->gbPsychologyMoney->ResumeLayout(false);
            this->gbPsychologyMoney->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMoney))->EndInit();
            this->gbAtomicHabits->ResumeLayout(false);
            this->gbAtomicHabits->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAtomicHabits))->EndInit();
            this->groupBox7->ResumeLayout(false);
            this->groupBox7->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion



    //----- When clicking on each button changes its color, but the other buttons should remain unchanged -----//
    //--------------- When clicking on each button, it will sort the books based on their genre ---------------//



        //----- btnAllGenre

    private: System::Void btnAllGenre_Click(System::Object^ sender, System::EventArgs^ e) 
    {


        //////
        // Change color of btnAllGenre
        //////
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnAllGenre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnNonFiction
        //
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));


        //
        // Reset color of btnFiction
        //
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));


        //
        // Reset color of btnNovel
        //
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel ->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));


        //
        // Reset color of btnFantasy
        //
        btnFantasy->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFantasy->ForeColor = System::Drawing::Color::Black;

        btnFantasy->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        ////
        ////
        ////

        //
        // Add all the book group box from panel->pAllBooks
        //
        pAllBooks->Controls->Remove(gbSoloLeveling);
        pAllBooks->Controls->Remove(gbOmnicientReader);

        pAllBooks->Controls->Add(gbAtomicHabits);
        pAllBooks->Controls->Add(gbPsychologyMoney);
        pAllBooks->Controls->Add(gbHumanNature);
        pAllBooks->Controls->Add(gbMiniHabits);
        pAllBooks->Controls->Add(gbMakeStick);
        pAllBooks->Controls->Add(gbSecondBrain);


        //
        // Change the location of the gbSoloLeveling & gbOmnicientReader
        //

        pAllBooks->Controls->Add(gbSoloLeveling);
        pAllBooks->Controls->Add(gbOmnicientReader);

        // Get the current scroll position of the panel
        int scrollPosX = pAllBooks->HorizontalScroll->Value;
        int scrollPosY = pAllBooks->VerticalScroll->Value;

        // Reset the location of gbSoloLeveling & gbOmnicientReader back to their original positions
        gbSoloLeveling->Location = System::Drawing::Point(12 - scrollPosX, 472 - scrollPosY);
        gbOmnicientReader->Location = System::Drawing::Point(312 - scrollPosX, 472 - scrollPosY);

        ////
        ////
        ////

    }



           //----- btnNonFiction

    private: System::Void btnNonFiction_Click(System::Object^ sender, System::EventArgs^ e) 
    {

        //
        // Reset color of btnAllGenre
        //
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        ///////
        // Change color of btnNonFiction
        ///////
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnNonFiction->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnFiction
        //
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnNovel
        //
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnFantasy
        //
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

    }


           
           //-----btnFiction

    private: System::Void btnFiction_Click(System::Object^ sender, System::EventArgs^ e) 
    {

        //
        // Reset color of btnAllGenre
        //
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnNonFiction
        //
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //////
        // Change color of btnFiction
        //////
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnFiction->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnNovel
        //
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnFantasy
        //
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
       
    }



           //-----btnNovel

    private: System::Void btnNovel_Click(System::Object^ sender, System::EventArgs^ e) 
    {

        //
        // Reset color of AllGenre
        //
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnNonFiction
        //
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnFiction
        //
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //////
        // Change color of btnNovel
        //////
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
            static_cast<System::Int32>(static_cast<System::Byte>(197)));

        btnNovel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
            static_cast<System::Int32>(static_cast<System::Byte>(253)));

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnFantasy
        //
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
           


           //-----btnFantsy

    private: System::Void btnFantasy_Click(System::Object^ sender, System::EventArgs^ e) 
    {

        //
        // Reset color of btnAllGenre
        //
        btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnAllGenre->ForeColor = System::Drawing::Color::Black;

        btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnNonFiction
        //
        btnNonFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNonFiction->ForeColor = System::Drawing::Color::Black;

        btnNonFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnFiction
        //
        btnFiction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnFiction->ForeColor = System::Drawing::Color::Black;

        btnFiction->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //
        // Reset color of btnNovel
        //
        btnNovel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
            static_cast<System::Int32>(static_cast<System::Byte>(242)));

        btnNovel->ForeColor = System::Drawing::Color::Black;

        btnNovel->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));

        //////
        // Change color of btnFantasy
        //////
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


        //                                                                        //
        //----- When clicked the add button the book will go to Order Detail -----//
        //                                                                        //
    

    // Global variable to track if Atomic Habits is already added
    bool isAtomicHabitsAdded = false;

    private: System::Void btnAddAH_Click(System::Object^ sender, System::EventArgs^ e) 
    {

        if (!isAtomicHabitsAdded)
        {
            //
            // Create a new GroupBox for Atomic Habits
            //
            GroupBox^ newGbAtomicHabits = gcnew GroupBox();
            newGbAtomicHabits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            newGbAtomicHabits->Size = System::Drawing::Size(422, 155);

            // Add the new GroupBox to the flow Layout Panel
            flpOrderDetail->Controls->Add(newGbAtomicHabits);



            //
            // Create a new PictureBox
            //
            PictureBox^ newPbAtomicHabits = gcnew PictureBox();
            newPbAtomicHabits->Image = pbAtomicHabits->Image;
            newPbAtomicHabits->SizeMode = pbAtomicHabits->SizeMode;
            newPbAtomicHabits->Location = pbAtomicHabits->Location;
            newPbAtomicHabits->Size = System::Drawing::Size(60, 100);
            newPbAtomicHabits->Location = System::Drawing::Point(40, 28);

            // Add the new PictureBox to the new GroupBox
            newGbAtomicHabits->Controls->Add(newPbAtomicHabits);



            //
            // Create a new label TITLE
            //
            Label^ newlblAtomic = gcnew Label();
            newlblAtomic->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            newlblAtomic->Text = lblAtomic->Text;
            newlblAtomic->Size = System::Drawing::Size(198, 23);
            newlblAtomic->Location = System::Drawing::Point(130, 50);

            // Add the new Label to the new GroupBox
            newGbAtomicHabits->Controls->Add(newlblAtomic);



            //
            // Create a new label PRICE
            //
            Label^ newlblAtomicPrice = gcnew Label();
            newlblAtomicPrice->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            newlblAtomicPrice->Text = L"100";
            newlblAtomicPrice->Size = System::Drawing::Size(118, 19);
            newlblAtomicPrice->Location = System::Drawing::Point(145, 80);

            // Add the new Label to the new GroupBox
            newGbAtomicHabits->Controls->Add(newlblAtomicPrice);


            //
            // Create a new label for symbol PHP
            // 
            Label^ newlblAtomicPriceSymbol = gcnew Label();
            newlblAtomicPriceSymbol->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            newlblAtomicPriceSymbol->Text = L"P";
            newlblAtomicPriceSymbol->Size = System::Drawing::Size(118, 19);
            newlblAtomicPriceSymbol->Location = System::Drawing::Point(130, 80);

            // Add the new Label to the new GroupBox
            newGbAtomicHabits->Controls->Add(newlblAtomicPriceSymbol);


            //
            //  Psychology of Money is added to order detail, so increase the subtotatl
            //
            int subtotalIncrease = System::Convert::ToInt32(lblSubtotal->Text);

            subtotalIncrease += 100;

            lblSubtotal->Text = subtotalIncrease.ToString();


            //
            // Psychology of Money is added to order detail, so increase the Total payment
            //
            int totalPaymentIncrease = System::Convert::ToInt32(lblTotalPayment->Text);

            totalPaymentIncrease += 100;


            lblTotalPayment->Text = totalPaymentIncrease.ToString();



            ////
            ////
            ////


            //
            //----- Create a new label for DELETETING ORDER -----//
            //

            Label^ lblDeleteOrder = gcnew Label();

            lblDeleteOrder->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblDeleteOrder->Text = L"Delete";
            lblDeleteOrder->ForeColor = System::Drawing::Color::Red;
            lblDeleteOrder->Size = System::Drawing::Size(67, 21);
            lblDeleteOrder->Location = System::Drawing::Point(350, 75);

            // Add the new delete order label to the new GroupBox
            newGbAtomicHabits->Controls->Add(lblDeleteOrder);

            // Handle Click event of deleteOrder label
            lblDeleteOrder->Click += gcnew System::EventHandler(this, &Home::DeleteOrder_Click);


            ////
            ////
            ////


            //
            //----- Create a button to Increase Quantity -----//
            //

            Button^ btnIncreaseQty = gcnew Button();

            btnIncreaseQty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            btnIncreaseQty->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            btnIncreaseQty->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            btnIncreaseQty->Location = System::Drawing::Point(367, 100);
            btnIncreaseQty->Name = L"btnAddQty";
            btnIncreaseQty->Size = System::Drawing::Size(27, 27);
            btnIncreaseQty->TabIndex = 28;
            btnIncreaseQty->Text = L"+";
            btnIncreaseQty->UseVisualStyleBackColor = false;

            // Add the new addQty button to groupbox
            newGbAtomicHabits->Controls->Add(btnIncreaseQty);

            // Handle Click event of Add Quantity button
            btnIncreaseQty->Click += gcnew System::EventHandler(this, &Home::btnIncreaseQty_Click);


            ////
            ////
            ////


            //
            //----- Create a button to Decrease Quantity -----//
            //

            Button^ btnDecreaseQty = gcnew Button();

            btnDecreaseQty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            btnDecreaseQty->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            btnDecreaseQty->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            btnDecreaseQty->Location = System::Drawing::Point(300, 100);
            btnDecreaseQty->Name = L"btnAddQty";
            btnDecreaseQty->Size = System::Drawing::Size(27, 27);
            btnDecreaseQty->TabIndex = 28;
            btnDecreaseQty->Text = L"-";
            btnDecreaseQty->UseVisualStyleBackColor = false;

            // Add the new button to groupbox
            newGbAtomicHabits->Controls->Add(btnDecreaseQty);

            // Handle Click event of Decrease Quantity button
            btnDecreaseQty->Click += gcnew System::EventHandler(this, &Home::btnDecreaseQty_Click);



            ////
            ////
            ////


            //
            //----- Quantity of the item -----//
            //

            // Create a new label for Quantity
            lblQuantity = gcnew Label();
            lblQuantity->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblQuantity->Text = L"1";
            lblQuantity->ForeColor = System::Drawing::Color::Black;
            lblQuantity->Size = System::Drawing::Size(67, 21);
            lblQuantity->Location = System::Drawing::Point(341, 105);

            // Add the new label to groupbox
            newGbAtomicHabits->Controls->Add(lblQuantity);



            //
            // Atomic Habits is now added
            //
            isAtomicHabitsAdded = true;
        }
        else
        {
            //
            // Atomic Habits is already added, so increase the quantity
            //

            int currentQuantity = System::Convert::ToInt32(lblQuantity->Text);

            if (currentQuantity < 99)
            {
                currentQuantity++;
                lblQuantity->Text = currentQuantity.ToString();
            }


            //
            // Atomic Habits is already added, so increase the subtotatl
            //
            int subtotalIncrease = System::Convert::ToInt32(lblSubtotal->Text);


            subtotalIncrease += 100;


            lblSubtotal->Text = subtotalIncrease.ToString();


            //
            // Atomic Habits is already added, so increase the subtotatl
            //
            int totalPaymentIncrease = System::Convert::ToInt32(lblTotalPayment->Text);


            totalPaymentIncrease += 100;


            lblTotalPayment->Text = totalPaymentIncrease.ToString();
        }
    }


        ///
        ///
        /// 
        
        //                                                                                                            //
        //----- When Clicked the Delete text the whole book that has been added to order detail will get deleted -----//
        //                                                                                                            //

    private: System::Void DeleteOrder_Click(System::Object^ sender, System::EventArgs^ e)
    {

        //
        // Find the parent GroupBox of the clicked label
        //
        Label^ deleteLabel = safe_cast<Label^>(sender);
        GroupBox^ parentGroupBox = safe_cast<GroupBox^>(deleteLabel->Parent);

        // Remove the parent GroupBox from the flow layout panel
        flpOrderDetail->Controls->Remove(parentGroupBox);



        //
        // reset Subtotal Total payment when the delete has been cliked
        //

        // Update subtotal and total payment
        int quantity = System::Convert::ToInt32(lblQuantity->Text);
        lblSubtotal->Text = (System::Convert::ToInt32(lblSubtotal->Text) - (quantity * 100)).ToString();
        lblTotalPayment->Text = (System::Convert::ToInt32(lblTotalPayment->Text) - (quantity * 100)).ToString();


        //
        // Atomic Habits is now delete 
        //
        isAtomicHabitsAdded = false;
    }


        ///
        ///
        ///


        //  
        //----- When Clicked the plus button in order detail the quantity, subtotal, and payment total increase -----//
        //

    private: System::Void btnIncreaseQty_Click(System::Object^ sender, System::EventArgs^ e)
    {
        //
        // Increase lblQuantity
        //

        int currentQuantity = System::Convert::ToInt32(lblQuantity->Text);

        // Increase the quantity by one if it's less than 100
        if (currentQuantity < 99)
        {
            currentQuantity++;
            lblQuantity->Text = currentQuantity.ToString();
        }



        //
        // Increase lblSubtotal
        //
        int subtotalIncrease = System::Convert::ToInt32(lblSubtotal->Text);


        subtotalIncrease += 100;


        lblSubtotal->Text = subtotalIncrease.ToString();


        //
        // Increase lblTotalPayment
        //
        int totalPaymentIncrease = System::Convert::ToInt32(lblTotalPayment->Text);


        totalPaymentIncrease += 100;


        lblTotalPayment->Text = totalPaymentIncrease.ToString();

    }


           //----- When Clicked the plus button in order detail the quantity, subtotal, and payment total decrease -----//


    private: System::Void btnDecreaseQty_Click(System::Object^ sender, System::EventArgs^ e)
    {

        //
        // Decrease lblQuantity
        //
        int currentQuantity = System::Convert::ToInt32(lblQuantity->Text);

        // Decrease the quantity by one if it's greater than 1
        if (currentQuantity > 1)
        {
            currentQuantity--;
            lblQuantity->Text = currentQuantity.ToString();
        }


        //
        // Decrease lblSubtotal
        //
        int subtotalDecrease = System::Convert::ToInt32(lblSubtotal->Text);

        subtotalDecrease -= 100;

        lblSubtotal->Text = subtotalDecrease.ToString();


        //
        // Decrease lblTotalPayment
        //
        int totalPaymentDecrease = System::Convert::ToInt32(lblTotalPayment->Text);

        totalPaymentDecrease -= 100;

        lblTotalPayment->Text = totalPaymentDecrease.ToString();
    }

    
    ///
    ///
    ///  
    


        //                                                                        //
        //----- When clicked the add button the book will go to Order Detail -----//
        //                                                                        //


    // Global variable to track if Psychology of money is already added
    bool isPsychologyMoneyAdded = false;

    private: System::Void btnAddPM_Click(System::Object^ sender, System::EventArgs^ e) 
    {

        if (!isPsychologyMoneyAdded)
        {
            //
            // Create a new GroupBox for Psychology of Money
            //
            GroupBox^ newGbMoney = gcnew GroupBox();
            newGbMoney->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(235)),
                static_cast<System::Int32>(static_cast<System::Byte>(246)));
            newGbMoney->Size = System::Drawing::Size(422, 155);

            // Add the new GroupBox to the flow Layout Panel
            flpOrderDetail->Controls->Add(newGbMoney);



            //
            // Create a new PictureBox
            //
            PictureBox^ newPbMoney = gcnew PictureBox();
            newPbMoney->Image = pbMoney->Image;
            newPbMoney->SizeMode = pbAtomicHabits->SizeMode;
            newPbMoney->Location = pbAtomicHabits->Location;
            newPbMoney->Size = System::Drawing::Size(60, 100);
            newPbMoney->Location = System::Drawing::Point(40, 28);

            // Add the new PictureBox to the new GroupBox
            newGbMoney->Controls->Add(newPbMoney);



            //
            // Create a new label TITLE
            //
            Label^ newlblMoney = gcnew Label();
            newlblMoney->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            newlblMoney->Text = L"Psychology of Money";
            newlblMoney->Size = System::Drawing::Size(198, 23);
            newlblMoney->Location = System::Drawing::Point(130, 50);

            // Add the new Label to the new GroupBox
            newGbMoney->Controls->Add(newlblMoney);



            //
            // Create a new label PHP
            //
            Label^ newlblMoneyPrice = gcnew Label();
            newlblMoneyPrice->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            newlblMoneyPrice->Text = L"200";
            newlblMoneyPrice->Size = System::Drawing::Size(118, 19);
            newlblMoneyPrice->Location = System::Drawing::Point(145, 80);

            // Add the new Label to the new GroupBox
            newGbMoney->Controls->Add(newlblMoneyPrice);

            //
            // Create a new label PRI
            // //
            Label^ newlblMoneyPriceSymbol = gcnew Label();
            newlblMoneyPriceSymbol->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            newlblMoneyPriceSymbol->Text = L"P";
            newlblMoneyPriceSymbol->Size = System::Drawing::Size(118, 19);
            newlblMoneyPriceSymbol->Location = System::Drawing::Point(130, 80);

            // Add the new Label to the new GroupBox
            newGbMoney->Controls->Add(newlblMoneyPriceSymbol);


            //
            //  Psychology of Money is added to order detail, so increase the subtotatl
            //
            int subtotalIncrease = System::Convert::ToInt32(lblSubtotal->Text);

            subtotalIncrease += 200;

            lblSubtotal->Text = subtotalIncrease.ToString();


            //
            // Psychology of Money is added to order detail, so increase the Total payment
            //
            int totalPaymentIncrease = System::Convert::ToInt32(lblTotalPayment->Text);

            totalPaymentIncrease += 200;


            lblTotalPayment->Text = totalPaymentIncrease.ToString();



            //
            //----- Create a new label for DELETETING ORDER -----//
            //

            Label^ lblDeleteOrderMoney = gcnew Label();

            lblDeleteOrderMoney->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblDeleteOrderMoney->Text = L"Delete";
            lblDeleteOrderMoney->ForeColor = System::Drawing::Color::Red;
            lblDeleteOrderMoney->Size = System::Drawing::Size(67, 21);
            lblDeleteOrderMoney->Location = System::Drawing::Point(350, 75);

            // Add the new delete order label to the new GroupBox
            newGbMoney->Controls->Add(lblDeleteOrderMoney);

            // Handle Click event of deleteOrder label
            lblDeleteOrderMoney->Click += gcnew System::EventHandler(this, &Home::DeleteOrderMoney_Click);
            ////
            ////
            ////


            //
            //----- Create a button to Increase Quantity -----//
            //

            Button^ btnIncreaseQtyMoney = gcnew Button();

            btnIncreaseQtyMoney->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            btnIncreaseQtyMoney->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            btnIncreaseQtyMoney->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            btnIncreaseQtyMoney->Location = System::Drawing::Point(367, 100);
            btnIncreaseQtyMoney->Name = L"btnAddQtyMoney";
            btnIncreaseQtyMoney->Size = System::Drawing::Size(27, 27);
            btnIncreaseQtyMoney->TabIndex = 28;
            btnIncreaseQtyMoney->Text = L"+";
            btnIncreaseQtyMoney->UseVisualStyleBackColor = false;

            // Add the new addQty button to groupbox
            newGbMoney->Controls->Add(btnIncreaseQtyMoney);

            // Handle Click event of Add Quantity button
            btnIncreaseQtyMoney->Click += gcnew System::EventHandler(this, &Home::btnIncreaseQtyMoney_Click);


            ////
            ////
            ////


            //
            //----- Create a button to Decrease Quantity -----//
            //

            Button^ btnDecreaseQtyMoney = gcnew Button();

            btnDecreaseQtyMoney->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            btnDecreaseQtyMoney->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            btnDecreaseQtyMoney->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            btnDecreaseQtyMoney->Location = System::Drawing::Point(300, 100);
            btnDecreaseQtyMoney->Name = L"btnDecreaseQtyMoney";
            btnDecreaseQtyMoney->Size = System::Drawing::Size(27, 27);
            btnDecreaseQtyMoney->TabIndex = 28;
            btnDecreaseQtyMoney->Text = L"-";
            btnDecreaseQtyMoney->UseVisualStyleBackColor = false;

            // Add the new button to groupbox
            newGbMoney->Controls->Add(btnDecreaseQtyMoney);

            // Handle Click event of Decrease Quantity button
            btnDecreaseQtyMoney->Click += gcnew System::EventHandler(this, &Home::btnDecreaseQtyMoney_Click);



            ////
            ////
            ////


            //
            //----- Quantity of the item -----//
            //

            // Create a new label for Quantity
            lblQuantityMoney = gcnew Label();
            lblQuantityMoney->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            lblQuantityMoney->Text = L"1";
            lblQuantityMoney->ForeColor = System::Drawing::Color::Black;
            lblQuantityMoney->Size = System::Drawing::Size(67, 21);
            lblQuantityMoney->Location = System::Drawing::Point(341, 105);

            // Add the new label to groupbox
            newGbMoney->Controls->Add(lblQuantityMoney);



            //
            // Atomic Habits is now added
            //
            isPsychologyMoneyAdded = true;
        }
        else
        {
            //
            // Atomic Habits is already added, so increase the quantity
            //

            int currentQuantityMoney = System::Convert::ToInt32(lblQuantityMoney->Text);

            if (currentQuantityMoney < 99)
            {
                currentQuantityMoney++;
                lblQuantityMoney->Text = currentQuantityMoney.ToString();
            }


            //
            // Atomic Habits is already added, so increase the subtotatl
            //
            int subtotalIncrease = System::Convert::ToInt32(lblSubtotal->Text);


            subtotalIncrease += 200;


            lblSubtotal->Text = subtotalIncrease.ToString();


            //
            // Atomic Habits is already added, so increase the subtotatl
            //
            int totalPaymentIncrease = System::Convert::ToInt32(lblTotalPayment->Text);


            totalPaymentIncrease += 200;


            lblTotalPayment->Text = totalPaymentIncrease.ToString();
        }
    }


           ///
           ///
           /// 

           //                                                                                                            //
           //----- When Clicked the Delete text the whole book that has been added to order detail will get deleted -----//
           //                                                                                                            //

    private: System::Void DeleteOrderMoney_Click(System::Object^ sender, System::EventArgs^ e)
    {

        //
        // Find the parent GroupBox of the clicked label
        //
        Label^ deleteLabel = safe_cast<Label^>(sender);
        GroupBox^ parentGroupBox = safe_cast<GroupBox^>(deleteLabel->Parent);

        // Remove the parent GroupBox from the flow layout panel
        flpOrderDetail->Controls->Remove(parentGroupBox);


        //
        // reset Subtotal Total payment when the delete has been cliked
        //

        // Update subtotal and total payment
        int quantity = System::Convert::ToInt32(lblQuantityMoney->Text);

        lblSubtotal->Text = (System::Convert::ToInt32(lblSubtotal->Text) - (quantity * 200)).ToString();
        lblTotalPayment->Text = (System::Convert::ToInt32(lblTotalPayment->Text) - (quantity * 200)).ToString();


        //
        // Atomic Habits is now delete 
        //
        isPsychologyMoneyAdded = false;
    }


        //  
        //----- When Clicked the plus button in order detail the quantity, subtotal, and payment total increase -----//
        //

    private: System::Void btnIncreaseQtyMoney_Click(System::Object^ sender, System::EventArgs^ e)
    {
        //
        // Increase lblQuantity
        //

        int currentQuantityIncreaseMoney = System::Convert::ToInt32(lblQuantityMoney->Text);

        // Increase the quantity by one if it's less than 100
        if (currentQuantityIncreaseMoney < 99)
        {
            currentQuantityIncreaseMoney++;
            lblQuantityMoney->Text = currentQuantityIncreaseMoney.ToString();
        }



        //
        // Increase lblSubtotal
        //
        int subtotalIncreaseMoney = System::Convert::ToInt32(lblSubtotal->Text);


        subtotalIncreaseMoney += 200;


        lblSubtotal->Text = subtotalIncreaseMoney.ToString();


        //
        // Increase lblTotalPayment
        //
        int totalPaymentIncreaseMoney = System::Convert::ToInt32(lblTotalPayment->Text);


        totalPaymentIncreaseMoney += 200;


        lblTotalPayment->Text = totalPaymentIncreaseMoney.ToString();

    }


        //----- When Clicked the plus button in order detail the quantity, subtotal, and payment total decrease -----//


    private: System::Void btnDecreaseQtyMoney_Click(System::Object^ sender, System::EventArgs^ e)
    {

        //
        // Decrease lblQuantity
        //
        int currentQuantityDecreaseMoney = System::Convert::ToInt32(lblQuantityMoney->Text);

        // Decrease the quantity by one if it's greater than 1
        if (currentQuantityDecreaseMoney > 1)
        {
            currentQuantityDecreaseMoney--;
            lblQuantityMoney->Text = currentQuantityDecreaseMoney.ToString();
        }


        //
        // Decrease lblSubtotal
        //
        int subtotalDecreaseMoney = System::Convert::ToInt32(lblSubtotal->Text);

        subtotalDecreaseMoney -= 200;

        lblSubtotal->Text = subtotalDecreaseMoney.ToString();


        //
        // Decrease lblTotalPayment
        //
        int totalPaymentDecreaseMoney = System::Convert::ToInt32(lblTotalPayment->Text);

        totalPaymentDecreaseMoney -= 200;

        lblTotalPayment->Text = totalPaymentDecreaseMoney.ToString();
    }


         ///
         ///
         ///
};
}
