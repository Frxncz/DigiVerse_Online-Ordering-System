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








    ///
    ///
    /// 



















    private: System::Windows::Forms::Panel^ pAllBooks;










    private: System::Windows::Forms::GroupBox^ gbOmnicientReader;


    private: System::Windows::Forms::GroupBox^ gbSoloLeveling;

    private: System::Windows::Forms::GroupBox^ gbSecondBrain;

    private: System::Windows::Forms::GroupBox^ gbMakeStick;

    private: System::Windows::Forms::GroupBox^ gbMiniHabits;

    private: System::Windows::Forms::GroupBox^ gbHumanNature;

    private: System::Windows::Forms::GroupBox^ gbPsychologyMoney;













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








private: System::Windows::Forms::GroupBox^ gbAtomicHabits;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox4;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::GroupBox^ gbDune;

private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Label^ label4;






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
            this->pAllBooks = (gcnew System::Windows::Forms::Panel());
            this->gbDune = (gcnew System::Windows::Forms::GroupBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
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
            this->btnAllGenre = (gcnew System::Windows::Forms::Button());
            this->btnNonFiction = (gcnew System::Windows::Forms::Button());
            this->btnFiction = (gcnew System::Windows::Forms::Button());
            this->btnNovel = (gcnew System::Windows::Forms::Button());
            this->btnFantasy = (gcnew System::Windows::Forms::Button());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pAllBooks->SuspendLayout();
            this->gbDune->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->SuspendLayout();
            // 
            // pAllBooks
            // 
            this->pAllBooks->AutoScroll = true;
            this->pAllBooks->Controls->Add(this->gbDune);
            this->pAllBooks->Controls->Add(this->gbWhiteEnd);
            this->pAllBooks->Controls->Add(this->gbOmnicientReader);
            this->pAllBooks->Controls->Add(this->gbSoloLeveling);
            this->pAllBooks->Controls->Add(this->gbSecondBrain);
            this->pAllBooks->Controls->Add(this->gbMakeStick);
            this->pAllBooks->Controls->Add(this->gbMiniHabits);
            this->pAllBooks->Controls->Add(this->gbHumanNature);
            this->pAllBooks->Controls->Add(this->gbPsychologyMoney);
            this->pAllBooks->Controls->Add(this->gbAtomicHabits);
            this->pAllBooks->Location = System::Drawing::Point(101, 481);
            this->pAllBooks->Name = L"pAllBooks";
            this->pAllBooks->Size = System::Drawing::Size(1330, 362);
            this->pAllBooks->TabIndex = 13;
            // 
            // gbDune
            // 
            this->gbDune->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->gbDune->Controls->Add(this->button1);
            this->gbDune->Controls->Add(this->label1);
            this->gbDune->Controls->Add(this->label2);
            this->gbDune->Controls->Add(this->label3);
            this->gbDune->Controls->Add(this->pictureBox8);
            this->gbDune->Location = System::Drawing::Point(448, 211);
            this->gbDune->Name = L"gbDune";
            this->gbDune->Size = System::Drawing::Size(381, 169);
            this->gbDune->TabIndex = 27;
            this->gbDune->TabStop = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->button1->Location = System::Drawing::Point(286, 115);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(68, 35);
            this->button1->TabIndex = 27;
            this->button1->Text = L"+ Add";
            this->button1->UseVisualStyleBackColor = false;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(106, 55);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(213, 51);
            this->label1->TabIndex = 26;
            this->label1->Text = L"Dune is set in the distant future \r\nin a feudal interstellar society \r\nin which v"
                L"arious noble...";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(21, 131);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(45, 16);
            this->label2->TabIndex = 25;
            this->label2->Text = L"P 999";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(106, 21);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(50, 19);
            this->label3->TabIndex = 23;
            this->label3->Text = L"Dune";
            // 
            // pictureBox8
            // 
            this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
            this->pictureBox8->Location = System::Drawing::Point(6, 10);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(88, 118);
            this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox8->TabIndex = 22;
            this->pictureBox8->TabStop = false;
            // 
            // gbWhiteEnd
            // 
            this->gbWhiteEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->gbWhiteEnd->Location = System::Drawing::Point(3, 623);
            this->gbWhiteEnd->Name = L"gbWhiteEnd";
            this->gbWhiteEnd->Size = System::Drawing::Size(1303, 70);
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
            this->gbOmnicientReader->Location = System::Drawing::Point(26, 420);
            this->gbOmnicientReader->Name = L"gbOmnicientReader";
            this->gbOmnicientReader->Size = System::Drawing::Size(357, 166);
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
            this->btnAddOR->Location = System::Drawing::Point(268, 113);
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
            this->label49->Location = System::Drawing::Point(109, 58);
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
            this->lblReader->Location = System::Drawing::Point(107, 21);
            this->lblReader->Name = L"lblReader";
            this->lblReader->Size = System::Drawing::Size(162, 19);
            this->lblReader->TabIndex = 23;
            this->lblReader->Text = L"Omnicient Reader\'s";
            // 
            // pbReader
            // 
            this->pbReader->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbReader.Image")));
            this->pbReader->Location = System::Drawing::Point(12, 12);
            this->pbReader->Name = L"pbReader";
            this->pbReader->Size = System::Drawing::Size(72, 108);
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
            this->gbSoloLeveling->Location = System::Drawing::Point(448, 418);
            this->gbSoloLeveling->Name = L"gbSoloLeveling";
            this->gbSoloLeveling->Size = System::Drawing::Size(381, 168);
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
            this->btnAddSL->Location = System::Drawing::Point(286, 115);
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
            this->label48->Location = System::Drawing::Point(109, 59);
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
            this->lblSolo->Location = System::Drawing::Point(107, 24);
            this->lblSolo->Name = L"lblSolo";
            this->lblSolo->Size = System::Drawing::Size(114, 19);
            this->lblSolo->TabIndex = 23;
            this->lblSolo->Text = L"Solo Leveling";
            // 
            // pbSoloLeveling
            // 
            this->pbSoloLeveling->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSoloLeveling.Image")));
            this->pbSoloLeveling->Location = System::Drawing::Point(2, 14);
            this->pbSoloLeveling->Name = L"pbSoloLeveling";
            this->pbSoloLeveling->Size = System::Drawing::Size(74, 114);
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
            this->gbSecondBrain->Location = System::Drawing::Point(903, 418);
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
            this->label47->Location = System::Drawing::Point(111, 56);
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
            this->lblBrain->Location = System::Drawing::Point(109, 18);
            this->lblBrain->Name = L"lblBrain";
            this->lblBrain->Size = System::Drawing::Size(115, 19);
            this->lblBrain->TabIndex = 23;
            this->lblBrain->Text = L"Second Brain";
            // 
            // pbSecondBrain
            // 
            this->pbSecondBrain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSecondBrain.Image")));
            this->pbSecondBrain->Location = System::Drawing::Point(12, 18);
            this->pbSecondBrain->Name = L"pbSecondBrain";
            this->pbSecondBrain->Size = System::Drawing::Size(73, 107);
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
            this->gbMakeStick->Location = System::Drawing::Point(26, 211);
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
            this->label46->Location = System::Drawing::Point(106, 56);
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
            this->lblMakeIt->Location = System::Drawing::Point(106, 20);
            this->lblMakeIt->Name = L"lblMakeIt";
            this->lblMakeIt->Size = System::Drawing::Size(108, 19);
            this->lblMakeIt->TabIndex = 23;
            this->lblMakeIt->Text = L"Make it Stick";
            // 
            // pbMakeStick
            // 
            this->pbMakeStick->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMakeStick.Image")));
            this->pbMakeStick->Location = System::Drawing::Point(7, 17);
            this->pbMakeStick->Name = L"pbMakeStick";
            this->pbMakeStick->Size = System::Drawing::Size(74, 111);
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
            this->gbMiniHabits->Location = System::Drawing::Point(903, 12);
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
            this->label45->Location = System::Drawing::Point(112, 55);
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
            this->lblMini->Location = System::Drawing::Point(109, 20);
            this->lblMini->Name = L"lblMini";
            this->lblMini->Size = System::Drawing::Size(95, 19);
            this->lblMini->TabIndex = 23;
            this->lblMini->Text = L"Mini Habits";
            // 
            // pbMiniHabits
            // 
            this->pbMiniHabits->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMiniHabits.Image")));
            this->pbMiniHabits->Location = System::Drawing::Point(11, 17);
            this->pbMiniHabits->Name = L"pbMiniHabits";
            this->pbMiniHabits->Size = System::Drawing::Size(73, 106);
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
            this->gbHumanNature->Location = System::Drawing::Point(903, 211);
            this->gbHumanNature->Name = L"gbHumanNature";
            this->gbHumanNature->Size = System::Drawing::Size(381, 169);
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
            this->btnAddHN->Location = System::Drawing::Point(286, 115);
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
            this->label44->Location = System::Drawing::Point(112, 60);
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
            this->lblHuman->Location = System::Drawing::Point(111, 22);
            this->lblHuman->Name = L"lblHuman";
            this->lblHuman->Size = System::Drawing::Size(122, 19);
            this->lblHuman->TabIndex = 23;
            this->lblHuman->Text = L"Human Nature";
            // 
            // pbHumanNature
            // 
            this->pbHumanNature->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHumanNature.Image")));
            this->pbHumanNature->Location = System::Drawing::Point(10, 18);
            this->pbHumanNature->Name = L"pbHumanNature";
            this->pbHumanNature->Size = System::Drawing::Size(75, 109);
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
            this->gbPsychologyMoney->Location = System::Drawing::Point(448, 12);
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
            this->label43->Location = System::Drawing::Point(106, 55);
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
            this->lblMoney->Location = System::Drawing::Point(106, 21);
            this->lblMoney->Name = L"lblMoney";
            this->lblMoney->Size = System::Drawing::Size(176, 19);
            this->lblMoney->TabIndex = 23;
            this->lblMoney->Text = L"Psychology of Money";
            // 
            // pbMoney
            // 
            this->pbMoney->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbMoney.Image")));
            this->pbMoney->Location = System::Drawing::Point(12, 14);
            this->pbMoney->Name = L"pbMoney";
            this->pbMoney->Size = System::Drawing::Size(76, 108);
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
            this->gbAtomicHabits->Location = System::Drawing::Point(26, 12);
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
            this->label42->Location = System::Drawing::Point(110, 55);
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
            // lblAtomic
            // 
            this->lblAtomic->AutoSize = true;
            this->lblAtomic->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblAtomic->Location = System::Drawing::Point(109, 18);
            this->lblAtomic->Name = L"lblAtomic";
            this->lblAtomic->Size = System::Drawing::Size(118, 19);
            this->lblAtomic->TabIndex = 20;
            this->lblAtomic->Text = L"Atomic Habits";
            // 
            // pbAtomicHabits
            // 
            this->pbAtomicHabits->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(248)));
            this->pbAtomicHabits->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->pbAtomicHabits->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbAtomicHabits.Image")));
            this->pbAtomicHabits->Location = System::Drawing::Point(9, 14);
            this->pbAtomicHabits->Name = L"pbAtomicHabits";
            this->pbAtomicHabits->Size = System::Drawing::Size(77, 111);
            this->pbAtomicHabits->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pbAtomicHabits->TabIndex = 19;
            this->pbAtomicHabits->TabStop = false;
            // 
            // btnAllGenre
            // 
            this->btnAllGenre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->btnAllGenre->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAllGenre->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->btnAllGenre->Location = System::Drawing::Point(302, 412);
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
            this->btnNonFiction->Location = System::Drawing::Point(494, 412);
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
            this->btnFiction->Location = System::Drawing::Point(692, 412);
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
            this->btnNovel->Location = System::Drawing::Point(885, 412);
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
            this->btnFantasy->Location = System::Drawing::Point(1061, 412);
            this->btnFantasy->Name = L"btnFantasy";
            this->btnFantasy->Size = System::Drawing::Size(111, 38);
            this->btnFantasy->TabIndex = 25;
            this->btnFantasy->Text = L"Fantsy";
            this->btnFantasy->UseVisualStyleBackColor = false;
            this->btnFantasy->Click += gcnew System::EventHandler(this, &Home::btnFantasy_Click);
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(644, 55);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(183, 48);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox3->TabIndex = 28;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(165, 113);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(1154, 307);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox4->TabIndex = 29;
            this->pictureBox4->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(1207, 48);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(136, 50);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox1->TabIndex = 31;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(990, 48);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(211, 50);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox2->TabIndex = 32;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
            this->pictureBox5->Location = System::Drawing::Point(236, 51);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(262, 50);
            this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox5->TabIndex = 30;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
            this->pictureBox6->Location = System::Drawing::Point(187, 61);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(34, 31);
            this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox6->TabIndex = 33;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(144, 63);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(29, 26);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBox7->TabIndex = 34;
            this->pictureBox7->TabStop = false;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
                static_cast<System::Int32>(static_cast<System::Byte>(197)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->label4->Location = System::Drawing::Point(1304, 56);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(24, 26);
            this->label4->TabIndex = 35;
            this->label4->Text = L"0";
            // 
            // Home
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoScroll = true;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
                static_cast<System::Int32>(static_cast<System::Byte>(253)));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->ClientSize = System::Drawing::Size(1564, 897);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->btnFantasy);
            this->Controls->Add(this->btnNovel);
            this->Controls->Add(this->btnFiction);
            this->Controls->Add(this->btnNonFiction);
            this->Controls->Add(this->btnAllGenre);
            this->Controls->Add(this->pictureBox7);
            this->Controls->Add(this->pictureBox6);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pAllBooks);
            this->Name = L"Home";
            this->Text = L"HomeForm";
            this->pAllBooks->ResumeLayout(false);
            this->gbDune->ResumeLayout(false);
            this->gbDune->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
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
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
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



        //
        // Change the location of the gbSoloLeveling & gbOmnicientReader
        //

        pAllBooks->Controls->Add(gbSoloLeveling);
        pAllBooks->Controls->Add(gbOmnicientReader);
        pAllBooks->Controls->Add(gbSecondBrain);
        pAllBooks->Controls->Add(gbDune);

        // Get the current scroll position of the panel
        int scrollPosX = pAllBooks->HorizontalScroll->Value;
        int scrollPosY = pAllBooks->VerticalScroll->Value;

        // Reset the locatio back to their original positions
        gbSoloLeveling->Location = System::Drawing::Point(10 - scrollPosX, 340 - scrollPosY);
        gbOmnicientReader->Location = System::Drawing::Point(350 - scrollPosX, 340 - scrollPosY);
        gbSecondBrain->Location = System::Drawing::Point(680 - scrollPosX, 340 - scrollPosY);
        gbDune->Location = System::Drawing::Point(337 - scrollPosX, 171 - scrollPosY);

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
        pAllBooks->Controls->Remove(gbDune);
        pAllBooks->Controls->Remove(gbSoloLeveling);
        pAllBooks->Controls->Remove(gbOmnicientReader);
        pAllBooks->Controls->Add(gbAtomicHabits);
        pAllBooks->Controls->Add(gbPsychologyMoney);
        pAllBooks->Controls->Add(gbHumanNature);
        pAllBooks->Controls->Add(gbMiniHabits);
        pAllBooks->Controls->Add(gbMakeStick);

        ////
        ////
        ////

        //
        // Change the location of the gbSoloLeveling & gbOmnicientReader
        //

        pAllBooks->Controls->Add(gbSecondBrain);

        // Get the current scroll position of the panel
        int scrollPosX = pAllBooks->HorizontalScroll->Value; 
        int scrollPosY = pAllBooks->VerticalScroll->Value;

        // Reset the location of second bran back to their original positions
        gbSecondBrain->Location = System::Drawing::Point(337 - scrollPosX, 171 - scrollPosY);


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

        pAllBooks->Controls->Add(gbDune);

        // Change the location of the gbDune
        gbDune->Location = System::Drawing::Point(26, 12);

       
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
        pAllBooks->Controls->Remove(gbDune);

        // the gbSoloLeveling & gbOmnicientReader
        pAllBooks->Controls->Add(gbSoloLeveling);
        pAllBooks->Controls->Add(gbOmnicientReader);

        // Change the location of the gbSoloLeveling & gbOmnicientReader
        gbSoloLeveling->Location = System::Drawing::Point(26, 12);
        gbOmnicientReader->Location = System::Drawing::Point(350, 12);

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
        pAllBooks->Controls->Remove(gbDune);

        // the gbSoloLeveling & gbOmnicientReader
        pAllBooks->Controls->Add(gbSoloLeveling);
        pAllBooks->Controls->Add(gbOmnicientReader);

        // Change the location of the gbSoloLeveling & gbOmnicientReader
        gbSoloLeveling->Location = System::Drawing::Point(26, 12);
        gbOmnicientReader->Location = System::Drawing::Point(350, 12);

        ////
        ////
        ////

    }

         /// 
         /// 
         /// 
         /// 
    
};
}