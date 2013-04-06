#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace OpenGLModeler {

	/// <summary>
	/// Summary for FormEditObject
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class FormEditObject : public System::Windows::Forms::Form
	{
	public:
		CDrawObject ^ selectedObject;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TextBox^  txtFilename;
	public: 

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  btnBrowse;
	private: System::Windows::Forms::PictureBox^  picFilename;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

			 bool changeValue;

	public: FormEditObject(void)
	{
		InitializeComponent();
	}

	void prepareForm(CDrawObject ^ obj)
	{
		//translasi
		changeValue=false;
		
		this->txtX->Value=Decimal(obj->x);
		this->txtY->Value=Decimal(obj->y);
		this->txtZ->Value=Decimal(obj->z);

		//rotasi
		/*this->txtRotasiX->Text=obj->x_rotasi+"";
		this->txtRotasiY->Text=obj->y_rotasi+"";
		this->txtRotasiZ->Text=obj->z_rotasi+"";*/
		
		this->trkSudutRotasiX->Value=obj->sudut_rotasi_x;
		this->trkSudutRotasiY->Value=obj->sudut_rotasi_y;
		this->trkSudutRotasiZ->Value=obj->sudut_rotasi_z;

		//skala
		this->trkSkalaX->Value=obj->x_scale;
		this->trkSkalaY->Value=obj->y_scale;
		this->trkSkalaZ->Value=obj->z_scale;

		//texture
		this->picFilename->Text = obj->filename;


/*			prevTrkX=trkX->Value;
		prevTrkY=trkY->Value;
		prevTrkZ=trkZ->Value;
*/
		selectedObject=obj;
		changeValue=true;

	}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormEditObject()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnApply;

	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label1;




	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TrackBar^  trkSudutRotasiX;










	private: System::Windows::Forms::Label^  lblSudutRotasi;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TrackBar^  trkSkalaY;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TrackBar^  trkSkalaX;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TrackBar^  trkSkalaZ;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		int prevTrkX, prevTrkY, prevTrkZ;


private: System::Windows::Forms::PictureBox^  pictureBox1;

private: System::Windows::Forms::TrackBar^  trkSudutRotasiZ;

private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TrackBar^  trkSudutRotasiY;
private: System::Windows::Forms::NumericUpDown^  txtZ;
private: System::Windows::Forms::NumericUpDown^  txtY;
private: System::Windows::Forms::NumericUpDown^  txtX;

private: System::Windows::Forms::Label^  label4;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditObject::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtZ = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtY = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtX = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->trkSudutRotasiZ = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trkSudutRotasiY = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->trkSudutRotasiX = (gcnew System::Windows::Forms::TrackBar());
			this->lblSudutRotasi = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->trkSkalaZ = (gcnew System::Windows::Forms::TrackBar());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->trkSkalaY = (gcnew System::Windows::Forms::TrackBar());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->trkSkalaX = (gcnew System::Windows::Forms::TrackBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->picFilename = (gcnew System::Windows::Forms::PictureBox());
			this->btnBrowse = (gcnew System::Windows::Forms::Button());
			this->txtFilename = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->txtZ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->txtY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->txtX))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSudutRotasiZ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSudutRotasiY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSudutRotasiX))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSkalaZ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSkalaY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSkalaX))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picFilename))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(378, 454);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtZ);
			this->tabPage1->Controls->Add(this->txtY);
			this->tabPage1->Controls->Add(this->txtX);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(370, 428);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Translation";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// txtZ
			// 
			this->txtZ->DecimalPlaces = 2;
			this->txtZ->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 65536});
			this->txtZ->Location = System::Drawing::Point(46, 198);
			this->txtZ->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->txtZ->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->txtZ->Name = L"txtZ";
			this->txtZ->Size = System::Drawing::Size(100, 20);
			this->txtZ->TabIndex = 12;
			this->txtZ->ValueChanged += gcnew System::EventHandler(this, &FormEditObject::txtZ_ValueChanged);
			// 
			// txtY
			// 
			this->txtY->DecimalPlaces = 2;
			this->txtY->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 65536});
			this->txtY->Location = System::Drawing::Point(46, 110);
			this->txtY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->txtY->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->txtY->Name = L"txtY";
			this->txtY->Size = System::Drawing::Size(100, 20);
			this->txtY->TabIndex = 11;
			this->txtY->ValueChanged += gcnew System::EventHandler(this, &FormEditObject::txtY_ValueChanged);
			// 
			// txtX
			// 
			this->txtX->DecimalPlaces = 2;
			this->txtX->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 65536});
			this->txtX->Location = System::Drawing::Point(46, 38);
			this->txtX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, 0});
			this->txtX->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999999, 0, 0, System::Int32::MinValue});
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(100, 20);
			this->txtX->TabIndex = 10;
			this->txtX->ValueChanged += gcnew System::EventHandler(this, &FormEditObject::txtX_ValueChanged_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Koordinat Objek";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Z";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(14, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Y";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->trkSudutRotasiZ);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->trkSudutRotasiY);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->trkSudutRotasiX);
			this->tabPage2->Controls->Add(this->lblSudutRotasi);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(370, 428);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Rotation";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// trkSudutRotasiZ
			// 
			this->trkSudutRotasiZ->Location = System::Drawing::Point(134, 335);
			this->trkSudutRotasiZ->Maximum = 360;
			this->trkSudutRotasiZ->Name = L"trkSudutRotasiZ";
			this->trkSudutRotasiZ->Size = System::Drawing::Size(211, 45);
			this->trkSudutRotasiZ->SmallChange = 45;
			this->trkSudutRotasiZ->TabIndex = 22;
			this->trkSudutRotasiZ->TickFrequency = 10;
			this->trkSudutRotasiZ->Scroll += gcnew System::EventHandler(this, &FormEditObject::trkSudutRotasiZ_Scroll);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Sudut Rotasi Z";
			// 
			// trkSudutRotasiY
			// 
			this->trkSudutRotasiY->Location = System::Drawing::Point(134, 284);
			this->trkSudutRotasiY->Maximum = 360;
			this->trkSudutRotasiY->Name = L"trkSudutRotasiY";
			this->trkSudutRotasiY->Size = System::Drawing::Size(211, 45);
			this->trkSudutRotasiY->SmallChange = 45;
			this->trkSudutRotasiY->TabIndex = 20;
			this->trkSudutRotasiY->TickFrequency = 10;
			this->trkSudutRotasiY->Scroll += gcnew System::EventHandler(this, &FormEditObject::trkSudutRotasiY_Scroll);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Sudut Rotasi Y";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(86, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(121, 162);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// trkSudutRotasiX
			// 
			this->trkSudutRotasiX->Location = System::Drawing::Point(134, 233);
			this->trkSudutRotasiX->Maximum = 360;
			this->trkSudutRotasiX->Name = L"trkSudutRotasiX";
			this->trkSudutRotasiX->Size = System::Drawing::Size(211, 45);
			this->trkSudutRotasiX->SmallChange = 45;
			this->trkSudutRotasiX->TabIndex = 14;
			this->trkSudutRotasiX->TickFrequency = 10;
			this->trkSudutRotasiX->Scroll += gcnew System::EventHandler(this, &FormEditObject::trkSudutRotasi_Scroll);
			// 
			// lblSudutRotasi
			// 
			this->lblSudutRotasi->AutoSize = true;
			this->lblSudutRotasi->Location = System::Drawing::Point(29, 237);
			this->lblSudutRotasi->Name = L"lblSudutRotasi";
			this->lblSudutRotasi->Size = System::Drawing::Size(78, 13);
			this->lblSudutRotasi->TabIndex = 13;
			this->lblSudutRotasi->Text = L"Sudut Rotasi X";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->trkSkalaZ);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->trkSkalaY);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->trkSkalaX);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(370, 428);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Scaling";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 142);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Z";
			// 
			// trkSkalaZ
			// 
			this->trkSkalaZ->Location = System::Drawing::Point(46, 139);
			this->trkSkalaZ->Maximum = 25;
			this->trkSkalaZ->Minimum = 1;
			this->trkSkalaZ->Name = L"trkSkalaZ";
			this->trkSkalaZ->Size = System::Drawing::Size(205, 45);
			this->trkSkalaZ->SmallChange = 45;
			this->trkSkalaZ->TabIndex = 19;
			this->trkSkalaZ->Value = 1;
			this->trkSkalaZ->Scroll += gcnew System::EventHandler(this, &FormEditObject::trkSkalaZ_Scroll);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(26, 91);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Y";
			// 
			// trkSkalaY
			// 
			this->trkSkalaY->Location = System::Drawing::Point(46, 88);
			this->trkSkalaY->Maximum = 25;
			this->trkSkalaY->Minimum = 1;
			this->trkSkalaY->Name = L"trkSkalaY";
			this->trkSkalaY->Size = System::Drawing::Size(205, 45);
			this->trkSkalaY->SmallChange = 45;
			this->trkSkalaY->TabIndex = 17;
			this->trkSkalaY->Value = 1;
			this->trkSkalaY->Scroll += gcnew System::EventHandler(this, &FormEditObject::trkSkalaY_Scroll);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"X";
			// 
			// trkSkalaX
			// 
			this->trkSkalaX->Location = System::Drawing::Point(46, 37);
			this->trkSkalaX->Minimum = -10;
			this->trkSkalaX->Name = L"trkSkalaX";
			this->trkSkalaX->Size = System::Drawing::Size(205, 45);
			this->trkSkalaX->SmallChange = 45;
			this->trkSkalaX->TabIndex = 15;
			this->trkSkalaX->Value = 1;
			this->trkSkalaX->Scroll += gcnew System::EventHandler(this, &FormEditObject::trkSkalaX_Scroll);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Ukuran Skala";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->picFilename);
			this->tabPage4->Controls->Add(this->btnBrowse);
			this->tabPage4->Controls->Add(this->txtFilename);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(370, 428);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Texture";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// picFilename
			// 
			this->picFilename->Location = System::Drawing::Point(70, 90);
			this->picFilename->Name = L"picFilename";
			this->picFilename->Size = System::Drawing::Size(282, 317);
			this->picFilename->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picFilename->TabIndex = 3;
			this->picFilename->TabStop = false;
			// 
			// btnBrowse
			// 
			this->btnBrowse->Location = System::Drawing::Point(70, 48);
			this->btnBrowse->Name = L"btnBrowse";
			this->btnBrowse->Size = System::Drawing::Size(75, 23);
			this->btnBrowse->TabIndex = 2;
			this->btnBrowse->Text = L"&Browse";
			this->btnBrowse->UseVisualStyleBackColor = true;
			this->btnBrowse->Click += gcnew System::EventHandler(this, &FormEditObject::btnBrowse_Click);
			// 
			// txtFilename
			// 
			this->txtFilename->Location = System::Drawing::Point(70, 22);
			this->txtFilename->Name = L"txtFilename";
			this->txtFilename->ReadOnly = true;
			this->txtFilename->Size = System::Drawing::Size(273, 20);
			this->txtFilename->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Filename";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tabControl1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(384, 506);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnApply);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 463);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(378, 40);
			this->panel1->TabIndex = 1;
			// 
			// btnApply
			// 
			this->btnApply->Location = System::Drawing::Point(218, 8);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(75, 23);
			this->btnApply->TabIndex = 2;
			this->btnApply->Text = L"&Apply";
			this->btnApply->UseVisualStyleBackColor = true;
			this->btnApply->Click += gcnew System::EventHandler(this, &FormEditObject::btnApply_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"&Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormEditObject::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// FormEditObject
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 506);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"FormEditObject";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Object Properties";
			this->TopMost = true;
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->txtZ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->txtY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->txtX))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSudutRotasiZ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSudutRotasiY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSudutRotasiX))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSkalaZ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSkalaY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trkSkalaX))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picFilename))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void btnApply_Click(System::Object^  sender, System::EventArgs^  e) {
			 selectedObject->x = System::Convert::ToDouble(txtX->Value);
			 selectedObject->y = System::Convert::ToDouble(txtY->Value);
			 selectedObject->z = System::Convert::ToDouble(txtZ->Value);
			 
			/* selectedObject->x_rotasi  = System::Convert::ToDouble(txtRotasiX->Text);
			 selectedObject->y_rotasi  = System::Convert::ToDouble(txtRotasiY->Text);
			 selectedObject->z_rotasi  = System::Convert::ToDouble(txtRotasiZ->Text);*/
			 selectedObject->sudut_rotasi_x=System::Convert::ToDouble(trkSudutRotasiX->Value);
			 selectedObject->sudut_rotasi_y=System::Convert::ToDouble(trkSudutRotasiY->Value);
			 selectedObject->sudut_rotasi_z=System::Convert::ToDouble(trkSudutRotasiZ->Value);

			 selectedObject->x_scale=System::Convert::ToDouble(trkSkalaX->Value);
			 selectedObject->y_scale=System::Convert::ToDouble(trkSkalaY->Value);
			 selectedObject->z_scale=System::Convert::ToDouble(trkSkalaZ->Value);
			 
			
		 }
private: System::Void trkSudutRotasi_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 this->btnApply_Click(sender,e);
		 }
private: System::Void trkSkalaX_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 this->btnApply_Click(sender,e);
		 }
private: System::Void trkSkalaY_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 this->btnApply_Click(sender,e);
		 }
private: System::Void trkSkalaZ_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 this->btnApply_Click(sender,e);
		 }
//private: System::Void trkX_Scroll(System::Object^  sender, System::EventArgs^  e) {
//			 float x = Convert::ToSingle(this->txtX->Text);
//			 int x_track = Convert::ToInt32(this->trkX->Value);
//			 
//			 int delta = x_track<prevTrkX?-1:1;
//			 prevTrkX=Convert::ToInt32(this->trkX->Value);
//			 x = x + (0.1f * delta);
//			 this->txtX->Text=x+"";
//			 this->btnApply_Click(sender,e);
//		 }
//private: System::Void trkY_Scroll(System::Object^  sender, System::EventArgs^  e) {
//			 float y = Convert::ToSingle(this->txtY->Text);
//			 int y_track = Convert::ToInt32(this->trkY->Value);
//			 
//			 int delta = y_track<prevTrkY?-1:1;
//			 prevTrkY=Convert::ToInt32(this->trkY->Value);
//			 y = y + (0.1f * delta);
//			 this->txtY->Text=y+"";
//			 this->btnApply_Click(sender,e);
//		 }
//private: System::Void trkZ_Scroll(System::Object^  sender, System::EventArgs^  e) {
//			 float z = Convert::ToSingle(this->txtZ->Text);
//			 int z_track = Convert::ToInt32(this->trkZ->Value);
//			 
//			 int delta = z_track<prevTrkZ?-1:1;
//			 prevTrkZ=Convert::ToInt32(this->trkZ->Value);
//			 z = z + (0.1f * delta);
//			 this->txtZ->Text=z+"";
//			 this->btnApply_Click(sender,e);
//		 }

private: System::Void trkSudutRotasiY_Scroll(System::Object^  sender, System::EventArgs^  e) {
			this->btnApply_Click(sender,e);
		 }
private: System::Void trkSudutRotasiZ_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 this->btnApply_Click(sender,e);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 btnApply_Click(sender,e);
			 Close();
		 }


private: System::Void txtX_ValueChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 if(changeValue)  this->btnApply_Click(sender,e);
		 }
private: System::Void txtY_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(changeValue)  this->btnApply_Click(sender,e);
		 }
private: System::Void txtZ_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			  if(changeValue)  this->btnApply_Click(sender,e);
		 }
private: System::Void btnBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title = "Graphic images";
            openFileDialog1->Filter = "PNG|*.png| JPG, JPEG|*.jpg";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {	
				
				//openFile(openFileDialog1->FileName);
				txtFilename->Text=openFileDialog1->FileName;
				this->picFilename->Load(txtFilename->Text);
				selectedObject->filename=txtFilename->Text;
				selectedObject->LoadTextureRaw();
				this->btnApply_Click(sender,e);
			}
		 }

};
}
