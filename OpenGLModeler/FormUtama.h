#pragma once

#include "resource.h"
#include "OpenGL.h"
#include "Piramid.h"
#include "Box.h"
#include "Ball.h"
#include "FormEditObject.h"
#include "Graphic.h"
#include "TeaPot.h"
#include "Torus.h"
#include "Cone.h"
#include "Cylinder.h"
#include "Disk.h"
namespace OpenGLModeler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Xml;
	using namespace OpenGLForm;

	using namespace System::Reflection;
	using namespace System::Runtime::InteropServices;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			glPerspective = gcnew COpenGL(picPerspective, picPerspective->Width, picPerspective->Height,1);
			glFront = gcnew COpenGL(picFront, picFront->Width, picFront->Height,2);
			glTop = gcnew COpenGL(picTop, picTop->Width , picTop->Height,3);		
			wglShareLists(glPerspective->m_hglrc,glFront->m_hglrc);
			wglShareLists(glPerspective->m_hglrc,glTop->m_hglrc);
			 daftarObject = gcnew Hashtable();
			 countPiramid=0;
			 countBox = 0;
			 countBall=0;
			 countTeapot=0;
			 countTorus=0;
			 countCone=0;
			 currentFileName="";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected: 
	private: System::Windows::Forms::Timer^  timerRefreshPicture;
	

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^  picTop;
	private: System::Windows::Forms::PictureBox^  picFront;
	private: System::Windows::Forms::PictureBox^  picPerspective;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		OpenGLForm::COpenGL ^ glPerspective, ^ glTop, ^ glFront;
		Hashtable ^ daftarObject;
		int countPiramid,countBox,countBall,countTeapot,countTorus,countCone,countCylinder,countDisk;
		String ^ currentFileName;







	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;




	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::ToolStrip^  toolStrip2;

	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;


	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  boxToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  pyramidToolStripMenuItem1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  reloadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  ballToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  teaPotToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  torusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  coneToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  cylinderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  diskToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Object Explorer"));
			this->timerRefreshPicture = (gcnew System::Windows::Forms::Timer(this->components));
			this->picPerspective = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reloadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->picTop = (gcnew System::Windows::Forms::PictureBox());
			this->picFront = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->boxToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pyramidToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ballToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->teaPotToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->torusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cylinderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diskToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picPerspective))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picTop))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picFront))->BeginInit();
			this->panel1->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// timerRefreshPicture
			// 
			this->timerRefreshPicture->Enabled = true;
			this->timerRefreshPicture->Interval = 10;
			this->timerRefreshPicture->Tick += gcnew System::EventHandler(this, &Form1::timerRefreshPicture_Tick);
			// 
			// picPerspective
			// 
			this->picPerspective->Dock = System::Windows::Forms::DockStyle::Fill;
			this->picPerspective->Location = System::Drawing::Point(196, 3);
			this->picPerspective->Name = L"picPerspective";
			this->picPerspective->Size = System::Drawing::Size(430, 452);
			this->picPerspective->TabIndex = 0;
			this->picPerspective->TabStop = false;
			this->picPerspective->Resize += gcnew System::EventHandler(this, &Form1::picPerspective_Resize);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->viewToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(890, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->newToolStripMenuItem, 
				this->openToolStripMenuItem, this->reloadToolStripMenuItem, this->saveAsToolStripMenuItem, this->saveToolStripMenuItem, this->toolStripMenuItem1, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->openToolStripMenuItem->Text = L"&Open..";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// reloadToolStripMenuItem
			// 
			this->reloadToolStripMenuItem->Name = L"reloadToolStripMenuItem";
			this->reloadToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->reloadToolStripMenuItem->Text = L"&Reload";
			this->reloadToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::reloadToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->saveAsToolStripMenuItem->Text = L"&Save As..";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->saveToolStripMenuItem->Text = L"&Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(117, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"&View";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"&About";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 527);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(890, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(39, 17);
			this->toolStripStatusLabel1->Text = L"Ready";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(890, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->picPerspective, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 49);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(890, 478);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(3, 461);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(187, 14);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel2->Controls->Add(this->picTop, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->picFront, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(632, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(255, 452);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// picTop
			// 
			this->picTop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->picTop->Location = System::Drawing::Point(3, 3);
			this->picTop->Name = L"picTop";
			this->picTop->Size = System::Drawing::Size(249, 220);
			this->picTop->TabIndex = 0;
			this->picTop->TabStop = false;
			this->picTop->Resize += gcnew System::EventHandler(this, &Form1::picTop_Resize);
			// 
			// picFront
			// 
			this->picFront->Dock = System::Windows::Forms::DockStyle::Fill;
			this->picFront->Location = System::Drawing::Point(3, 229);
			this->picFront->Name = L"picFront";
			this->picFront->Size = System::Drawing::Size(249, 220);
			this->picFront->TabIndex = 1;
			this->picFront->TabStop = false;
			this->picFront->Resize += gcnew System::EventHandler(this, &Form1::picFront_Resize);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->treeView1);
			this->panel1->Controls->Add(this->toolStrip2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(187, 452);
			this->panel1->TabIndex = 2;
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->FullRowSelect = true;
			this->treeView1->HideSelection = false;
			this->treeView1->Location = System::Drawing::Point(0, 25);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Node0";
			treeNode1->Text = L"Object Explorer";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) {treeNode1});
			this->treeView1->ShowRootLines = false;
			this->treeView1->Size = System::Drawing::Size(187, 427);
			this->treeView1->TabIndex = 3;
			// 
			// toolStrip2
			// 
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripButton1, 
				this->toolStripButton2, this->toolStripButton3});
			this->toolStrip2->Location = System::Drawing::Point(0, 0);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(187, 25);
			this->toolStrip2->TabIndex = 0;
			this->toolStrip2->Text = L"toolStrip2";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {this->boxToolStripMenuItem1, 
				this->pyramidToolStripMenuItem1, this->ballToolStripMenuItem, this->teaPotToolStripMenuItem, this->torusToolStripMenuItem, this->coneToolStripMenuItem, 
				this->cylinderToolStripMenuItem, this->diskToolStripMenuItem});
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(42, 22);
			this->toolStripButton1->Text = L"Add";
			// 
			// boxToolStripMenuItem1
			// 
			this->boxToolStripMenuItem1->Name = L"boxToolStripMenuItem1";
			this->boxToolStripMenuItem1->Size = System::Drawing::Size(118, 22);
			this->boxToolStripMenuItem1->Text = L"&Box";
			this->boxToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::boxToolStripMenuItem1_Click);
			// 
			// pyramidToolStripMenuItem1
			// 
			this->pyramidToolStripMenuItem1->Name = L"pyramidToolStripMenuItem1";
			this->pyramidToolStripMenuItem1->Size = System::Drawing::Size(118, 22);
			this->pyramidToolStripMenuItem1->Text = L"&Pyramid";
			this->pyramidToolStripMenuItem1->Visible = false;
			this->pyramidToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::pyramidToolStripMenuItem1_Click);
			// 
			// ballToolStripMenuItem
			// 
			this->ballToolStripMenuItem->Name = L"ballToolStripMenuItem";
			this->ballToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->ballToolStripMenuItem->Text = L"B&all";
			this->ballToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ballToolStripMenuItem_Click);
			// 
			// teaPotToolStripMenuItem
			// 
			this->teaPotToolStripMenuItem->Name = L"teaPotToolStripMenuItem";
			this->teaPotToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->teaPotToolStripMenuItem->Text = L"&Tea Pot";
			this->teaPotToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::teaPotToolStripMenuItem_Click);
			// 
			// torusToolStripMenuItem
			// 
			this->torusToolStripMenuItem->Name = L"torusToolStripMenuItem";
			this->torusToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->torusToolStripMenuItem->Text = L"&Torus";
			this->torusToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::torusToolStripMenuItem_Click);
			// 
			// coneToolStripMenuItem
			// 
			this->coneToolStripMenuItem->Name = L"coneToolStripMenuItem";
			this->coneToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->coneToolStripMenuItem->Text = L"&Cone";
			this->coneToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::coneToolStripMenuItem_Click);
			// 
			// cylinderToolStripMenuItem
			// 
			this->cylinderToolStripMenuItem->Name = L"cylinderToolStripMenuItem";
			this->cylinderToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->cylinderToolStripMenuItem->Text = L"Cylinder";
			this->cylinderToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cylinderToolStripMenuItem_Click);
			// 
			// diskToolStripMenuItem
			// 
			this->diskToolStripMenuItem->Name = L"diskToolStripMenuItem";
			this->diskToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->diskToolStripMenuItem->Text = L"Disk";
			this->diskToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::diskToolStripMenuItem_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(31, 22);
			this->toolStripButton2->Text = L"Edit";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Form1::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(44, 22);
			this->toolStripButton3->Text = L"Delete";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Form1::toolStripButton3_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 549);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"[[Title]]";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picPerspective))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picTop))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picFront))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timerRefreshPicture_Tick(System::Object^  sender, System::EventArgs^  e) {
				 UNREFERENCED_PARAMETER(sender);
				 UNREFERENCED_PARAMETER(e);

				 //glPerspective->MySetCurrentGLRC();
				 glPerspective->Render(daftarObject);
				 glPerspective->SwapOpenGLBuffers();

				 //glTop->MySetCurrentGLRC();
				 glTop->Render(daftarObject);
				 glTop->SwapOpenGLBuffers();

				 //glFront->MySetCurrentGLRC();
				 glFront->Render(daftarObject);
				 glFront->SwapOpenGLBuffers();
			 }
			 
	private: System::Void picPerspective_Resize(System::Object^  sender, System::EventArgs^  e) {
				 glPerspective->ReSizeGLScene(picPerspective->Width,picPerspective->Height);
			 }
private: System::Void picTop_Resize(System::Object^  sender, System::EventArgs^  e) {
				glTop->ReSizeGLScene(picTop->Width,picTop->Height);
		 }

private: System::Void picFront_Resize(System::Object^  sender, System::EventArgs^  e) {
			glFront->ReSizeGLScene(picFront->Width,picFront->Height);
		 }
private: System::Void pyramidToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("piramid_"+countPiramid++);			 
			 daftarObject->Add(id, gcnew CPiramid());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();
		 }
private: System::Void boxToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("box_"+countBox++);			 
			 daftarObject->Add(id, gcnew CBox());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();
		 }
private: System::Void boxToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("box_"+countBox++);			 
			 addGraphic(id, gcnew CBox());
		 }
private: System::Void addGraphic(String ^ id, CDrawObject ^ object){
			daftarObject->Add(id, object);
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();
				  }
private: System::Void pyramidToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("piramid_"+countPiramid++);			 
			 daftarObject->Add(id, gcnew CPiramid());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();

		 }
private: System::Void toolStripButton3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!treeView1->SelectedNode->Text->Equals("Object Explorer")){
				 String ^ key = gcnew String(treeView1->SelectedNode->Text);
				 daftarObject->Remove(key);
				 treeView1->SelectedNode->Remove();
			 }
		 }
private: System::Void toolStripButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ key = gcnew String(treeView1->SelectedNode->Text);
			 if(key!=nullptr && !key->Equals("Object Explorer")){
				FormEditObject ^ frmEdit = gcnew FormEditObject();	
				CDrawObject ^ obj = (CDrawObject ^ )daftarObject[key];
				frmEdit->prepareForm(obj);//ambil nilai atributnya...
				frmEdit->Show();
			 }else{
				 MessageBox::Show("Pilih objek 3D dari tree terlebih dahulu","OpenGL Modeler");
			 }
		 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(currentFileName->Equals("")) {
				 saveAsToolStripMenuItem_Click(sender,e);
			 }else {
				 saveGraphic(currentFileName);
			 }

		 }
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title = "Open Graphic File";
            openFileDialog1->Filter = "Graphic Files|*.graphicx";
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
				newToolStripMenuItem_Click(sender,e);
				openFile(openFileDialog1->FileName);
			}
		 }
private: System::Void openFile(String ^ fileName){
			FileStream ^ fs = gcnew FileStream(fileName, FileMode::Open);
                XmlTextReader ^ r = gcnew XmlTextReader(fs);
				currentFileName=fileName;


				daftarObject->Clear();
                while (r->Read())
                {
					if (r->NodeType == XmlNodeType::Element)
                    {

                        if (r->Name->ToLower()->Equals("graphic"))
                        {
							Graphic::name = r->GetAttribute("name");
                        }
                        else if (r->Name->ToLower()->Equals("primitive"))
                        {
							String ^ type = r->GetAttribute("type");
							String ^ id = r->GetAttribute("id");
							if(type->ToLower()->Equals("box")){
								CBox ^ box = gcnew CBox();
														
								box->x=Convert::ToSingle(r->GetAttribute("x"));
								box->y=Convert::ToSingle(r->GetAttribute("y"));
								box->z=Convert::ToSingle(r->GetAttribute("z"));
																
								box->sudut_rotasi_x=Convert::ToSingle(r->GetAttribute("sudut_rotasi_x"));
								box->sudut_rotasi_y=Convert::ToSingle(r->GetAttribute("sudut_rotasi_y"));
								box->sudut_rotasi_z=Convert::ToSingle(r->GetAttribute("sudut_rotasi_z"));
													
								box->x_scale=Convert::ToSingle(r->GetAttribute("x_scale"));
								box->y_scale=Convert::ToSingle(r->GetAttribute("y_scale"));
								box->z_scale=Convert::ToSingle(r->GetAttribute("z_scale"));
								box->filename=r->GetAttribute("filename");

								addGraphic(id, box);
							}else if(type->ToLower()->Equals("ball")){
								CBall ^ ball = gcnew CBall();
														
								ball->x=Convert::ToSingle(r->GetAttribute("x"));
								ball->y=Convert::ToSingle(r->GetAttribute("y"));
								ball->z=Convert::ToSingle(r->GetAttribute("z"));
							
								ball->r=Convert::ToSingle(r->GetAttribute("r"));
								ball->filename=r->GetAttribute("filename");
								ball->LoadTextureRaw();
	
								addGraphic(id, ball);
							}
                        }
                    }                  
                }
		 }
private: System::Void reloadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(!currentFileName->Equals("")) openFile(currentFileName);
		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 clearGraphic();
			 currentFileName="";
		 }
private: System::Void clearGraphic(){
			 daftarObject->Clear();
			 treeView1->Nodes[0]->Nodes->Clear();
		 }
private: System::Void saveGraphic(String ^ fileName){
			 FileStream ^ fs = gcnew FileStream(fileName, FileMode::Create);
			 XmlTextWriter ^ w = gcnew XmlTextWriter(fs, Encoding::UTF8);
                w->WriteStartDocument();
                w->WriteStartElement("graphic");
				w->WriteAttributeString("name", Graphic::name);
				IDictionaryEnumerator ^ de = daftarObject->GetEnumerator();
				int ibox=0,iball=0;			
				while(de->MoveNext()){
                    CDrawObject ^ object = (CDrawObject ^) de->Value;
					if(object->type->Equals("box")){ 						
						CBox ^ box = (CBox ^) object;
						w->WriteStartElement("primitive");
						w->WriteAttributeString("type","box");
						w->WriteAttributeString("id","box_"+ibox++);

						w->WriteAttributeString("x",box->x+"");
						w->WriteAttributeString("y",box->y+"");
						w->WriteAttributeString("z",box->z+"");

						w->WriteAttributeString("sudut_rotasi_x",box->sudut_rotasi_x+"");
						w->WriteAttributeString("sudut_rotasi_y",box->sudut_rotasi_y+"");
						w->WriteAttributeString("sudut_rotasi_z",box->sudut_rotasi_z+"");

						w->WriteAttributeString("x_scale",box->x_scale+"");
						w->WriteAttributeString("y_scale",box->y_scale+"");
						w->WriteAttributeString("z_scale",box->z_scale+"");
						w->WriteAttributeString("filename",box->filename+"");
						w->WriteEndElement();
					}else if(object->type->Equals("ball")){ 						
						CBall ^ ball = (CBall^) object;
						w->WriteStartElement("primitive");
						w->WriteAttributeString("type","ball");
						w->WriteAttributeString("id","ball_"+iball++);

						w->WriteAttributeString("x",ball->x+"");
						w->WriteAttributeString("y",ball->y+"");
						w->WriteAttributeString("z",ball->z+"");

						w->WriteAttributeString("r",ball->r+"");
						w->WriteAttributeString("filename",ball->filename+"");
						w->WriteEndElement();
					}
                }
                w->WriteEndElement();
               
                w->Flush();
                fs->Close();
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 saveFileDialog1->Title = "Save Graphic File";
            saveFileDialog1->Filter = "Graphic Files|*.graphicx";
			if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
				saveGraphic(saveFileDialog1->FileName);
			}
		 }
private: System::Void ballToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("ball_"+countBall++);			 
			 daftarObject->Add(id, gcnew CBall());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();
		 }
private: System::Void teaPotToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("teapot_"+countTeapot++);			 
			 daftarObject->Add(id, gcnew CTeaPot());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();
		 }
private: System::Void torusToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("torus_"+countTorus++);			 
			 daftarObject->Add(id, gcnew CTorus());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();
		 }
private: System::Void coneToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("cone_"+countCone++);			 
			 daftarObject->Add(id, gcnew CCone());
			 treeView1->Nodes[0]->Nodes->Add(id); 
			 treeView1->Nodes[0]->Expand();

		 }
private: System::Void cylinderToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("cylinder_"+countCylinder++);			 
			 daftarObject->Add(id, gcnew CCylinder());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();

		 }
private: System::Void diskToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ id = gcnew String("disk_"+countDisk++);			 
			 daftarObject->Add(id, gcnew CDisk());
			 treeView1->Nodes[0]->Nodes->Add(id);
			 treeView1->Nodes[0]->Expand();
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Environment::Exit(0);
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			Text = Application::ProductName + " version " + Application::ProductVersion;

			Module ^ mod = Assembly::GetExecutingAssembly()->GetModules()[0];
			IntPtr hinst = Marshal::GetHINSTANCE(mod);
			HICON hic = LoadIcon((HINSTANCE) hinst.ToPointer(), MAKEINTRESOURCE(IDI_ICON1));
			Icon = Icon->FromHandle(IntPtr(hic));
		 }
};
}

