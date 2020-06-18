#pragma once



namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace msclr::interop;
	using namespace Arction::WinForms::Charting;
	using namespace Arction::WinForms::Charting::Axes;
	using namespace Arction::WinForms::Charting::Series3D;
	using namespace Arction::WinForms::Charting::SeriesXY;
	using namespace Arction::WinForms::Charting::Views::ViewXY;
	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	private: double X1;
	private: double X2;
	private: double X1palec;
	private: System::Windows::Forms::Button^ button1;
	private: Arction::WinForms::Charting::LightningChartUltimate^ lightningChartUltimate1;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: Arction::WinForms::Charting::LightningChartUltimate^ lightningChartUltimate2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel3;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;




	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;



	private: double X2palec;

	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel2;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			Arction::WinForms::Charting::ChartOptions^ chartOptions1 = (gcnew Arction::WinForms::Charting::ChartOptions());
			Arction::WinForms::Charting::ChartOptions^ chartOptions2 = (gcnew Arction::WinForms::Charting::ChartOptions());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(6) {
				L"Оптимальный",
					L"", L"", L"", L"", L""
			}, -1));
			System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(6) {
				L"Нормальный",
					L"", L"", L"", L"", L""
			}, -1));
			System::Windows::Forms::ListViewItem^ listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(6) {
				L"Повышеный",
					L"", L"", L"", L"", L""
			}, -1));
			System::Windows::Forms::ListViewItem^ listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(6) {
				L"Резко повышенный",
					L"", L"", L"", L"", L""
			}, -1));
			System::Windows::Forms::ListViewItem^ listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(7) {
				L"Полученный",
					L"", L"", L"", L"", L"", L""
			}, -1));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox3 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel3 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBox4 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lightningChartUltimate1 = (gcnew Arction::WinForms::Charting::LightningChartUltimate());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->lightningChartUltimate2 = (gcnew Arction::WinForms::Charting::LightningChartUltimate());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->panel1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(754, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->открытьToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::открытьToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->toolStripButton1,
					this->toolStripSeparator1, this->toolStripTextBox1, this->toolStripSeparator2, this->toolStripLabel1, this->toolStripTextBox2,
					this->toolStripSeparator3, this->toolStripLabel2, this->toolStripTextBox3, this->toolStripSeparator4, this->toolStripLabel3,
					this->toolStripTextBox4
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(754, 25);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(54, 22);
			this->toolStripButton1->Text = L"Рассчет";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Main::toolStripButton1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(30, 25);
			this->toolStripTextBox1->Text = L"60";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(59, 22);
			this->toolStripLabel1->Text = L"Ад сист.=";
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(40, 25);
			this->toolStripTextBox2->Text = L"0";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(71, 22);
			this->toolStripLabel2->Text = L"Ад диаст. = ";
			// 
			// toolStripTextBox3
			// 
			this->toolStripTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox3->Name = L"toolStripTextBox3";
			this->toolStripTextBox3->Size = System::Drawing::Size(40, 25);
			this->toolStripTextBox3->Text = L"0";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripLabel3
			// 
			this->toolStripLabel3->Name = L"toolStripLabel3";
			this->toolStripLabel3->Size = System::Drawing::Size(77, 22);
			this->toolStripLabel3->Text = L"PWT пред. = ";
			// 
			// toolStripTextBox4
			// 
			this->toolStripTextBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox4->Name = L"toolStripTextBox4";
			this->toolStripTextBox4->Size = System::Drawing::Size(40, 25);
			this->toolStripTextBox4->Text = L"6";
			// 
			// chart1
			// 
			chartArea1->CursorX->IsUserEnabled = true;
			chartArea1->CursorX->IsUserSelectionEnabled = true;
			chartArea1->Name = L"ChartArea1";
			chartArea2->CursorX->IsUserEnabled = true;
			chartArea2->CursorX->IsUserSelectionEnabled = true;
			chartArea2->Name = L"ChartArea2";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Blue;
			series1->IsVisibleInLegend = false;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Red;
			series2->IsVisibleInLegend = false;
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea2";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::Blue;
			series3->IsVisibleInLegend = false;
			series3->Name = L"Series3";
			series4->ChartArea = L"ChartArea2";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Color = System::Drawing::Color::Red;
			series4->IsVisibleInLegend = false;
			series4->Name = L"Series4";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(740, 484);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			title1->DockedToChartArea = L"ChartArea1";
			title1->Name = L"Title1";
			title2->DockedToChartArea = L"ChartArea2";
			title2->Name = L"Title2";
			this->chart1->Titles->Add(title1);
			this->chart1->Titles->Add(title2);
			this->chart1->SelectionRangeChanging += gcnew System::EventHandler<System::Windows::Forms::DataVisualization::Charting::CursorEventArgs^ >(this, &Main::chart1_SelectionRangeChanging);
			this->chart1->SelectionRangeChanged += gcnew System::EventHandler<System::Windows::Forms::DataVisualization::Charting::CursorEventArgs^ >(this, &Main::chart1_SelectionRangeChanged);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 49);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(754, 516);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->chart3);
			this->tabPage6->Controls->Add(this->panel1);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(746, 490);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"tabPage6";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			chartArea3->Name = L"ChartArea1";
			chartArea4->Name = L"ChartArea2";
			this->chart3->ChartAreas->Add(chartArea3);
			this->chart3->ChartAreas->Add(chartArea4);
			this->chart3->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart3->Legends->Add(legend1);
			this->chart3->Location = System::Drawing::Point(167, 0);
			this->chart3->Name = L"chart3";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			series6->ChartArea = L"ChartArea2";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
			series6->Legend = L"Legend1";
			series6->Name = L"Series2";
			this->chart3->Series->Add(series5);
			this->chart3->Series->Add(series6);
			this->chart3->Size = System::Drawing::Size(579, 490);
			this->chart3->TabIndex = 1;
			this->chart3->Text = L"chart3";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(167, 490);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 56);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Стоп";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(8, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Старт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click_1);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(8, 0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Click += gcnew System::EventHandler(this, &Main::comboBox1_Click_1);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(746, 490);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"2D графики";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->lightningChartUltimate1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(746, 490);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Фазовый портрет Ухо";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// lightningChartUltimate1
			// 
			this->lightningChartUltimate1->ActiveView = Arction::WinForms::Charting::ActiveView::View3D;
			this->lightningChartUltimate1->BackColor = System::Drawing::Color::Gray;
			this->lightningChartUltimate1->Background = (cli::safe_cast<Arction::WinForms::Charting::Fill^>(resources->GetObject(L"lightningChartUltimate1.Background")));
			this->lightningChartUltimate1->ChartManager = nullptr;
			this->lightningChartUltimate1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lightningChartUltimate1->HorizontalScrollBars = (cli::safe_cast<System::Collections::Generic::List<Arction::WinForms::Charting::HorizontalScrollBar^ >^>(resources->GetObject(L"lightningChartUltimate1.HorizontalScrollBars")));
			this->lightningChartUltimate1->LicenseKey = L"Licensed User/LightningChart Ultimate SDK Full Version/LightningChartUltimate/5V2"
				L"D2K3JP7Y4CL32Q68CYZ5JFS25LWSZA3W3";
			this->lightningChartUltimate1->Location = System::Drawing::Point(3, 3);
			this->lightningChartUltimate1->MinimumSize = System::Drawing::Size(110, 90);
			this->lightningChartUltimate1->Name = L"lightningChartUltimate1";
			this->lightningChartUltimate1->Options = chartOptions1;
			this->lightningChartUltimate1->RenderOptions = (cli::safe_cast<Arction::WinForms::Charting::Views::RenderOptionsCommon^>(resources->GetObject(L"lightningChartUltimate1.RenderOptions")));
			this->lightningChartUltimate1->Size = System::Drawing::Size(740, 484);
			this->lightningChartUltimate1->TabIndex = 0;
			this->lightningChartUltimate1->Title = (cli::safe_cast<Arction::WinForms::Charting::Titles::ChartTitle^>(resources->GetObject(L"lightningChartUltimate1.Title")));
			this->lightningChartUltimate1->VerticalScrollBars = (cli::safe_cast<System::Collections::Generic::List<Arction::WinForms::Charting::VerticalScrollBar^ >^>(resources->GetObject(L"lightningChartUltimate1.VerticalScrollBars")));
			this->lightningChartUltimate1->View3D = (cli::safe_cast<Arction::WinForms::Charting::Views::View3D::View3D^>(resources->GetObject(L"lightningChartUltimate1.View3D")));
			this->lightningChartUltimate1->ViewPie3D = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewPie3D::ViewPie3D^>(resources->GetObject(L"lightningChartUltimate1.ViewPie3D")));
			this->lightningChartUltimate1->ViewPolar = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewPolar::ViewPolar^>(resources->GetObject(L"lightningChartUltimate1.ViewPolar")));
			this->lightningChartUltimate1->ViewSmith = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewSmith::ViewSmith^>(resources->GetObject(L"lightningChartUltimate1.ViewSmith")));
			this->lightningChartUltimate1->ViewXY = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewXY::ViewXY^>(resources->GetObject(L"lightningChartUltimate1.ViewXY")));
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->lightningChartUltimate2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(746, 490);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Фазовый портрет Палец";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// lightningChartUltimate2
			// 
			this->lightningChartUltimate2->ActiveView = Arction::WinForms::Charting::ActiveView::View3D;
			this->lightningChartUltimate2->BackColor = System::Drawing::Color::Gray;
			this->lightningChartUltimate2->Background = (cli::safe_cast<Arction::WinForms::Charting::Fill^>(resources->GetObject(L"lightningChartUltimate2.Background")));
			this->lightningChartUltimate2->ChartManager = nullptr;
			this->lightningChartUltimate2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lightningChartUltimate2->HorizontalScrollBars = (cli::safe_cast<System::Collections::Generic::List<Arction::WinForms::Charting::HorizontalScrollBar^ >^>(resources->GetObject(L"lightningChartUltimate2.HorizontalScrollBars")));
			this->lightningChartUltimate2->LicenseKey = L"Licensed User/LightningChart Ultimate SDK Full Version/LightningChartUltimate/5V2"
				L"D2K3JP7Y4CL32Q68CYZ5JFS25LWSZA3W3";
			this->lightningChartUltimate2->Location = System::Drawing::Point(0, 0);
			this->lightningChartUltimate2->MinimumSize = System::Drawing::Size(110, 90);
			this->lightningChartUltimate2->Name = L"lightningChartUltimate2";
			this->lightningChartUltimate2->Options = chartOptions2;
			this->lightningChartUltimate2->RenderOptions = (cli::safe_cast<Arction::WinForms::Charting::Views::RenderOptionsCommon^>(resources->GetObject(L"lightningChartUltimate2.RenderOptions")));
			this->lightningChartUltimate2->Size = System::Drawing::Size(746, 490);
			this->lightningChartUltimate2->TabIndex = 0;
			this->lightningChartUltimate2->Title = (cli::safe_cast<Arction::WinForms::Charting::Titles::ChartTitle^>(resources->GetObject(L"lightningChartUltimate2.Title")));
			this->lightningChartUltimate2->VerticalScrollBars = (cli::safe_cast<System::Collections::Generic::List<Arction::WinForms::Charting::VerticalScrollBar^ >^>(resources->GetObject(L"lightningChartUltimate2.VerticalScrollBars")));
			this->lightningChartUltimate2->View3D = (cli::safe_cast<Arction::WinForms::Charting::Views::View3D::View3D^>(resources->GetObject(L"lightningChartUltimate2.View3D")));
			this->lightningChartUltimate2->ViewPie3D = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewPie3D::ViewPie3D^>(resources->GetObject(L"lightningChartUltimate2.ViewPie3D")));
			this->lightningChartUltimate2->ViewPolar = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewPolar::ViewPolar^>(resources->GetObject(L"lightningChartUltimate2.ViewPolar")));
			this->lightningChartUltimate2->ViewSmith = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewSmith::ViewSmith^>(resources->GetObject(L"lightningChartUltimate2.ViewSmith")));
			this->lightningChartUltimate2->ViewXY = (cli::safe_cast<Arction::WinForms::Charting::Views::ViewXY::ViewXY^>(resources->GetObject(L"lightningChartUltimate2.ViewXY")));
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->chart2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(746, 490);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Выделенная часть";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Location = System::Drawing::Point(332, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// chart2
			// 
			chartArea5->Name = L"ChartArea1";
			chartArea6->Name = L"ChartArea2";
			this->chart2->ChartAreas->Add(chartArea5);
			this->chart2->ChartAreas->Add(chartArea6);
			this->chart2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chart2->Location = System::Drawing::Point(0, 0);
			this->chart2->Name = L"chart2";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Color = System::Drawing::Color::Red;
			series7->IsVisibleInLegend = false;
			series7->Name = L"Series1";
			series8->ChartArea = L"ChartArea2";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Color = System::Drawing::Color::Red;
			series8->IsVisibleInLegend = false;
			series8->Name = L"Series2";
			this->chart2->Series->Add(series7);
			this->chart2->Series->Add(series8);
			this->chart2->Size = System::Drawing::Size(746, 490);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			title3->DockedToChartArea = L"ChartArea1";
			title3->Name = L"Title1";
			title4->DockedToChartArea = L"ChartArea2";
			title4->Name = L"Title2";
			this->chart2->Titles->Add(title3);
			this->chart2->Titles->Add(title4);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->listView1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(746, 490);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Результаты";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			listViewItem1->UseItemStyleForSubItems = false;
			listViewItem2->UseItemStyleForSubItems = false;
			listViewItem3->UseItemStyleForSubItems = false;
			listViewItem4->UseItemStyleForSubItems = false;
			listViewItem5->UseItemStyleForSubItems = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4, listViewItem5
			});
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(746, 165);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Показатели";
			this->columnHeader1->Width = 125;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Скорость пульсовой волны";
			this->columnHeader2->Width = 154;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"CAVI";
			this->columnHeader3->Width = 43;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Индекс отражения";
			this->columnHeader4->Width = 122;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"ЦАД";
			this->columnHeader5->Width = 38;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Вероятность смерти";
			this->columnHeader6->Width = 112;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"V(вязкость крови)";
			this->columnHeader7->Width = 109;
			// 
			// serialPort1
			// 
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Main::serialPort1_DataReceived);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(754, 565);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Math_c* math_c = new Math_c();
		const float time = 0.2f;
		int diff_A = 15;
		Thread^ readThread;
		Thread^ graphThread;
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {


			chart1->Titles[0]->Text = "Ухо " + openFileDialog1->FileName;
		}
		if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {


			chart1->Titles[1]->Text = "Палец " + openFileDialog2->FileName;
		}
	}
	public: void graph_3d(std::vector<double> signal, Arction::WinForms::Charting::LightningChartUltimate^ chart, std::vector<double> signal_diff) {
		chart->BeginUpdate();
		chart->Name = "3D line plot";

		chart->ActiveView = ActiveView::View3D;

		chart->View3D->PointLineSeries3D->Clear();
		auto series = gcnew PointLineSeries3D(chart->View3D, Axis3DBinding::Primary, Axis3DBinding::Primary, Axis3DBinding::Primary);
		series->PointStyle->Shape3D = PointShape3D::Sphere;
		series->PointStyle->Size3D->SetValues(1, 1, 1);
		series->Material->DiffuseColor = Color::Navy;
		series->Material->SpecularColor = Color::Red;
		series->Material->SpecularPower = 20;
		series->LineVisible = true;
		series->LineStyle->AntiAliasing = LineAntialias::Normal;
		series->LineStyle->Color = Color::FromArgb(100, Color::Blue);
		series->LineStyle->Width = 0.2f;
		series->LineStyle->LineOptimization = LineOptimization::Hairline;
		series->PointsVisible = false;
		chart->View3D->PointLineSeries3D->Add(series);//addseries

		auto series1 = chart->View3D->PointLineSeries3D[0];
		series1->Clear();//clear for new  points

		cli::array<SeriesPoint3D>^ points = gcnew cli::array<SeriesPoint3D>((int)signal.size());

		for (size_t i = 0; i < signal.size() - 1; i++) {
			points[(int)i].X = signal[i];
			points[(int)i].Z = (double)(i * time);
			points[(int)i].Y = signal_diff[i];
		}

		//Y correction
		chart->View3D->YAxisPrimary3D->Maximum = *std::max_element(std::begin(signal_diff), std::end(signal_diff));
		chart->View3D->YAxisPrimary3D->Minimum = *std::min_element(std::begin(signal_diff), std::end(signal_diff));
		chart->View3D->XAxisPrimary3D->Maximum = *std::max_element(std::begin(signal), std::end(signal));//maxX
		chart->View3D->XAxisPrimary3D->Minimum = *std::min_element(std::begin(signal), std::end(signal));
		chart->View3D->ZAxisPrimary3D->Maximum = signal_diff.size() * time;//maxZ

		series1->Points = points;
		series1->InvalidateData();

		chart->EndUpdate();
	}
	public: void graph_2d(std::vector<double> signal, String^ s, double ref, int amplitude) {
		for (size_t i = 0; i < signal.size(); i++)
			chart1->Series["Series" + s]->Points->AddXY(i * time, (signal[i] - ref) * amplitude);
	}
	public: std::vector<double> mars(String^ s) {
		String^ managed = s;
		marshal_context^ marshal = gcnew marshal_context();
		const char* native = marshal->marshal_as<const char*>(managed);
		puts(native);
		std::ifstream in(native);
		std::vector<double> signalnofilter((std::istream_iterator<double>(in)), std::istream_iterator<double>());
		delete marshal;
		return signalnofilter;
	}
	public: void Start_Uho() {

		math_c->uho_c = math_c->filter(mars(openFileDialog1->FileName));
		math_c->uho_cdiff = math_c->Diff(math_c->uho_c);
		graph_2d(math_c->uho_c, "1", math_c->median(math_c->uho_c), 1);
		graph_2d(math_c->uho_cdiff, "2", 0, diff_A);
		graph_3d(math_c->uho_c, lightningChartUltimate1, math_c->uho_cdiff);
		math_c->uho_cdiff_max = math_c->get_max_point(math_c->uho_cdiff, time);

	}
	public: void Prestart() {
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		chart1->Series["Series3"]->Points->Clear();
		chart1->Series["Series4"]->Points->Clear();
		math_c->pal_cdiff.clear();
		math_c->uho_cdiff.clear();
		chart2->Series[0]->Points->Clear();
		chart2->Series[1]->Points->Clear();
	}
	public: void Start_Palec() {
		math_c->pal_c = math_c->filter(mars(openFileDialog2->FileName));
		math_c->pal_cdiff = math_c->Diff(math_c->pal_c);
		graph_2d(math_c->pal_c, "3", math_c->median(math_c->pal_c), 1);
		graph_2d(math_c->pal_cdiff, "4", 0, diff_A);
		graph_3d(math_c->pal_c, lightningChartUltimate2, math_c->pal_cdiff);
		math_c->pal_cdiff_max = math_c->get_max_point(math_c->pal_cdiff, time);
		math_c->pal_max_points_amplitude = std::get<1>(math_c->get_max_point_pair(math_c->pal_c, time));
		math_c->amlitude_palec_signal = math_c->median(math_c->pal_max_points_amplitude);
		math_c->time_zond = 0.5;//math_c->median(std::get<2>(math_c->get_max_point_pair(math_c->pal_c, time)));
	}
	public:	void Resoults() {
		std::vector<double> different = math_c->get_different(math_c->uho_cdiff_max, math_c->pal_cdiff_max);
		std::vector<double> get_ri = math_c->get_different_ri(math_c->uho_cdiff_max, math_c->pal_cdiff_max);

		if (!different.empty())
			math_c->U = (Math::Round(fabs(Convert::ToDouble(toolStrip1->Items["toolStripTextBox1"]->Text) / math_c->median(different)), 3)) * 10;

		///////////////
		listView1->Items[0]->SubItems[1]->BackColor = System::Drawing::Color::White;
		listView1->Items[1]->SubItems[1]->BackColor = System::Drawing::Color::White;
		listView1->Items[2]->SubItems[1]->BackColor = System::Drawing::Color::White;
		listView1->Items[3]->SubItems[1]->BackColor = System::Drawing::Color::White;
		//////////////
		if (math_c->U < 7)
			listView1->Items[0]->SubItems[1]->BackColor = System::Drawing::Color::LightGreen;//opt
		else if (7 <= math_c->U && math_c->U < 10)
			listView1->Items[1]->SubItems[1]->BackColor = System::Drawing::Color::Green;//norm
		else if (10 <= math_c->U && math_c->U < 12)
			listView1->Items[2]->SubItems[1]->BackColor = System::Drawing::Color::Orange;//Повышеный
		else if (math_c->U > 12)
			listView1->Items[3]->SubItems[1]->BackColor = System::Drawing::Color::Red;//резго повышеный
		//////////////////////
		listView1->Items[0]->SubItems[1]->Text = Convert::ToString(math_c->U) + " < 7m/s";
		listView1->Items[1]->SubItems[1]->Text = " 7m/s<= " + Convert::ToString(math_c->U) + " < 10m/s";
		listView1->Items[2]->SubItems[1]->Text = " 10m/s<= " + Convert::ToString(math_c->U) + " < 12m/s";
		listView1->Items[3]->SubItems[1]->Text = Convert::ToString(math_c->U) + " > 12 m/s";
		listView1->Items[4]->SubItems[1]->Text = Convert::ToString(math_c->U) + " m/s";
		///////////////////////
		/*
		CAVI
		*/
		double deltaP = 2 / (fabs((Convert::ToDouble(toolStrip1->Items["toolStripTextBox2"]->Text)) - (Convert::ToDouble(toolStrip1->Items["toolStripTextBox3"]->Text))));
		double logP = log(Convert::ToDouble(toolStrip1->Items["toolStripTextBox2"]->Text) / Convert::ToDouble(toolStrip1->Items["toolStripTextBox3"]->Text));
		double CAVI = Math::Round(deltaP * logP * pow(math_c->U, 2), 3);
		listView1->Items[4]->SubItems[2]->Text = Convert::ToString(CAVI);
		/////////////////////////
		/*
		IndexRi - индекс отражения
		*/
		double Ri = Math::Round(math_c->median(get_ri), 3);
		listView1->Items[4]->SubItems[3]->Text = Convert::ToString(Ri);
		//////////////////////////
		/*
		 ЦАД
		*/
		double CAD = 100 + 32 * (math_c->U - 5);
		listView1->Items[4]->SubItems[4]->Text = Convert::ToString(CAD);
		/////////////////////////	
		/*
		 Верятность смерти
		*/
		double indexofdeth = pow(exp(1.0), -1.483 + 0.281 * (math_c->U - Convert::ToDouble(toolStrip1->Items["toolStripTextBox4"]->Text))) / (1 + pow(exp(1.0), 1.483 + 0.281 * (math_c->U - Convert::ToDouble(toolStrip1->Items["toolStripTextBox4"]->Text))));
		indexofdeth = Math::Round(indexofdeth, 3) * 100;
		listView1->Items[4]->SubItems[5]->Text = Convert::ToString(indexofdeth);
		////////////////////////////
		/*
		Вязкость крови
		*/
		double z = pow((math_c->time_zond * 66.03 / pow(math_c->amlitude_palec_signal, -0.4)) * Convert::ToDouble(toolStrip1->Items["toolStripTextBox2"]->Text) * Convert::ToDouble(toolStrip1->Items["toolStripTextBox3"]->Text) * (math_c->U / Convert::ToDouble(toolStrip1->Items["toolStripTextBox1"]->Text)), -0.2) + 1;
		double V = 1.0285 * (1.812 / z);
		V = Math::Round(V, 3);
		listView1->Items[4]->SubItems[6]->Text = Convert::ToString(V);

	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		Prestart();
		Start_Uho();
		Start_Palec();
		Resoults();
	}
	private: System::Void chart1_SelectionRangeChanging(System::Object^ sender, System::Windows::Forms::DataVisualization::Charting::CursorEventArgs^ e) {
		X1 = chart1->ChartAreas[0]->CursorX->SelectionStart;
		X2 = chart1->ChartAreas[0]->CursorX->SelectionEnd;

		X1palec = chart1->ChartAreas[1]->CursorX->SelectionStart;
		X2palec = chart1->ChartAreas[1]->CursorX->SelectionEnd;
	}
	private: System::Void chart1_SelectionRangeChanged(System::Object^ sender, System::Windows::Forms::DataVisualization::Charting::CursorEventArgs^ e) {

		chart2->Titles[0]->Text = "Ухо с " + X1 + "мс по " + X2 + " мс";
		for (size_t i = 0; i < math_c->uho_cdiff.size(); i++)
		{
			if (i >= X1 / time && i <= X2 / time)
				chart2->Series[0]->Points->AddXY(i * time, math_c->uho_cdiff[i]);
		}

		chart2->Titles[1]->Text = "Палец с " + X1palec + "мс по " + X2palec + " мс";
		for (size_t i = 0; i < math_c->pal_cdiff.size(); i++)
		{
			if (i >= X1palec / time && i <= X2palec / time)
				chart2->Series[1]->Points->AddXY(i * time, math_c->pal_cdiff[i]);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		chart2->Series[0]->Points->Clear();
		chart2->Series[1]->Points->Clear();
	}
	private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			
	}
	
private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {

}
	     
private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void comboBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	cli::array<String^>^ ports = SerialPort::GetPortNames();

	comboBox1->Items->Clear();

	comboBox1->Items->AddRange(ports);
}
	   Sample* s = new Sample();
	   bool stop = false;
	   private: delegate void updateChart(double x, double y);
				   private: delegate void updateChart1(double x, double y);
				 private: void update_chart1(double x, double y) {
					 chart3->Series[1]->Points->AddXY(x, y);
				 }
			  private: void update_chart(double x, double y) {
				  chart3->Series[0]->Points->AddXY(x, y);
			  }
		private: void ch(Object^ state) {
			for (int i = 0; i < s->one.size(); i++)
			{
				if (stop) break;
				chart3->BeginInvoke(gcnew updateChart(this, &Main::update_chart), i * time, s->one[i]);
				Sleep(8);
			}
		}
		private: void ch1(Object^ state) {
			for (int i = 0; i < s->one.size(); i++)
			{
				if (stop) break;
				chart3->BeginInvoke(gcnew updateChart1(this, &Main::update_chart1), i * time-1, s->one[i]-120);
				Sleep(8);
			}
		}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	chart3->Series[0]->Points->Clear();
	chart3->Series[1]->Points->Clear();
	System::Threading::ThreadPool::QueueUserWorkItem(gcnew WaitCallback(this,&Main::ch));
	System::Threading::ThreadPool::QueueUserWorkItem(gcnew WaitCallback(this, &Main::ch1));
}
	  
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	stop = true;
	
}
};
}
