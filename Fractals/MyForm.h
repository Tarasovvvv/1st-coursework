#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#pragma once
namespace Fractals
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
	protected: 
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm() { if (components) delete components; }
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  MAP;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::PictureBox^  Preview;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::ComponentModel::IContainer^  components;
	protected:
	protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MAP = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->Preview = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MAP))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Preview))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// MAP
			// 
			this->MAP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->MAP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MAP->Location = System::Drawing::Point(13, 13);
			this->MAP->Margin = System::Windows::Forms::Padding(0);
			this->MAP->Name = L"MAP";
			this->MAP->Size = System::Drawing::Size(672, 672);
			this->MAP->TabIndex = 0;
			this->MAP->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(6, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Построить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(688, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 158);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор фрактала";
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->checkBox6->Location = System::Drawing::Point(6, 134);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(83, 19);
			this->checkBox6->TabIndex = 3;
			this->checkBox6->Text = L"Салфетка";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			this->checkBox6->MouseLeave += gcnew System::EventHandler(this, &MyForm::checkBox6_MouseLeave);
			this->checkBox6->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox6_MouseMove);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->checkBox5->Location = System::Drawing::Point(6, 111);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(130, 19);
			this->checkBox5->TabIndex = 3;
			this->checkBox5->Text = L"Кривая Гильберта";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			this->checkBox5->MouseLeave += gcnew System::EventHandler(this, &MyForm::checkBox5_MouseLeave);
			this->checkBox5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox5_MouseMove);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->checkBox4->Location = System::Drawing::Point(6, 88);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(137, 19);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Ковёр Серпинского";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			this->checkBox4->MouseLeave += gcnew System::EventHandler(this, &MyForm::checkBox4_MouseLeave);
			this->checkBox4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox4_MouseMove);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->checkBox3->Location = System::Drawing::Point(6, 65);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(144, 19);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Кривая Серпинского";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			this->checkBox3->MouseLeave += gcnew System::EventHandler(this, &MyForm::checkBox3_MouseLeave);
			this->checkBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox3_MouseMove);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->checkBox2->Location = System::Drawing::Point(6, 42);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(114, 19);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Снежинка Коха";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			this->checkBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm::checkBox2_MouseLeave);
			this->checkBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox2_MouseMove);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->checkBox1->Location = System::Drawing::Point(6, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(96, 19);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Кривая Коха";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			this->checkBox1->MouseLeave += gcnew System::EventHandler(this, &MyForm::checkBox1_MouseLeave);
			this->checkBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox1_MouseMove);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->trackBar3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->trackBar2);
			this->groupBox2->Controls->Add(this->trackBar1);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox2->Location = System::Drawing::Point(688, 172);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(223, 180);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры";
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 1;
			this->trackBar3->Location = System::Drawing::Point(6, 133);
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(211, 45);
			this->trackBar3->TabIndex = 1;
			this->trackBar3->Value = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(14, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 15);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Размер";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->label2->Location = System::Drawing::Point(11, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Угол отклонения";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(11, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 15);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Глубина рекурсии";
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(6, 84);
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(211, 45);
			this->trackBar2->TabIndex = 0;
			this->trackBar2->Value = 5;
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(6, 36);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(211, 45);
			this->trackBar1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(6, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(211, 27);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(3, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Программа запущена";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->checkBox7->Location = System::Drawing::Point(6, 85);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(95, 19);
			this->checkBox7->TabIndex = 5;
			this->checkBox7->Text = L"Автоочистка";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::checkBox7_MouseMove);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->checkBox7);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(688, 358);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(223, 106);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Управление";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(689, 645);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(223, 40);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Информация";
			// 
			// Preview
			// 
			this->Preview->ImageLocation = L"";
			this->Preview->Location = System::Drawing::Point(6, 19);
			this->Preview->Name = L"Preview";
			this->Preview->Size = System::Drawing::Size(211, 145);
			this->Preview->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Preview->TabIndex = 8;
			this->Preview->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->Preview);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Arial", 3, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Millimeter,
				static_cast<System::Byte>(204)));
			this->groupBox5->Location = System::Drawing::Point(688, 470);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(224, 170);
			this->groupBox5->TabIndex = 9;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Предпросмотр";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(924, 697);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->MAP);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Программа для построения фракталов. Автор: студент Тарасов Лев, 2 курс, группа 62"
				L"45 МОАИС";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MAP))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Preview))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		// MAP(pictureBox1) - объект типа pictureBox(далее буду называть его полотном), на котором и происходит рисование фракталов, объявлен при создании формы
		size_t ChoosenFractal = 0;	// Номер выбранного фрактала 
		bool isFilled = false;		// Отвечает за то, заполнено ли полотно чем-то
		int depth; // глубина рекурсии
		float x, y, dx, dy, w, h, length, angle, scale; // Переменные используемые при построении фракталов
		// x, y - координаты начальной точки инициатора
		// dx - прибавка по x, dy - прибавка по y
		// w - ширина холста, h - высота
		// length - длина инициатора, либо одной из его сторон
		// angle - угол отклонения
		// scale - размер

		// Фракталы
		void DrawKochLine(int depth, float x, float y, float length, float angle) // Строит фрактал "Кривая Коха"
		{
			Graphics ^ g = MAP->CreateGraphics(); // Объект, используемый только для построения прямой линии между двумя точками
			Pen^ pen = gcnew Pen(Color::Black, 1);// Объект "карандаш", я определяю через него цвет и толщину линий
			if (depth == 0) // Рисую начальный сегмент(инициатор). в данном фрактале - это обычная прямая
			{
				float dx = GetProjection(length, angle, 'x');
				float dy = GetProjection(length, angle, 'y');
				g->DrawLine(pen, x, y, x + dx, y + dy); // Так выглядит создание линии по координатам двух точек
			}
			else
			{
				// По правилу построения кривой Коха требуется с каждым вызовом рекурсивной функции сокращать длинну инициатора(length) в 3 раза, также уменьшаю depth с каждым вызовом
				depth--;
				length /= 3;

				//Нахожу координаты точек
				float x2 = GetProjection(length, angle, 'x') + x;
				float y2 = GetProjection(length, angle, 'y') + y;

				float x3 = GetProjection(length, angle - 60, 'x') + x2;
				float y3 = GetProjection(length, angle - 60, 'y') + y2;

				float x4 = GetProjection(length, angle + 60, 'x') + x3;
				float y4 = GetProjection(length, angle + 60, 'y') + y3;

				//Рекурсивно рисую части кривой(4 вызова для 4 частей следующего генератора)
				DrawKochLine(depth, x, y, length, angle);
				DrawKochLine(depth, x2, y2, length, angle - 60);
				DrawKochLine(depth, x3, y3, length, angle + 60);
				DrawKochLine(depth, x4, y4, length, angle);
			}
		}
		void DrawKochSnowflake(int depth, float x1, float y1, float length, float angle) // Строит фрактал "Снежинка Коха"
		{	// Снежинка Коха - треугольник из кривых Коха, для построения которых нужно указать угол(для треугольника он равен 60 градусам)
			// и найти их начальные точки с координатами соответственно pt2(x2, y2), pt3(x3, y3), первая точка находится в параметре функции (x1, y1)
			Graphics ^ g = MAP->CreateGraphics();
			Pen^ pen = gcnew Pen(Color::Black, 1);
			float x2 = GetProjection(length, angle, 'x') + x1;
			float y2 = GetProjection(length, angle, 'y') + y1;

			float x3 = GetProjection(length, angle + 120, 'x') + x2;
			float y3 = GetProjection(length, angle + 120, 'y') + y2;

			// Три стороны в треугольнике - три вызова
			DrawKochLine(depth, x1, y1, length, angle);
			DrawKochLine(depth, x2, y2, length, angle + 120);
			DrawKochLine(depth, x3, y3, length, angle + 240);
		}
		void DrawSerpinskyLine(int depth, float dx, float dy) // Строит фрактал "Кривая Серпинского"
		{ // Фрактал строится путем построения линий в направлении, заданном с помощью dx и dy
			R(depth, dx, dy); DrawAndUpdate(dx, dy);
			D(depth, dx, dy); DrawAndUpdate(-dx, dy);
			L(depth, dx, dy); DrawAndUpdate(-dx, -dy);
			U(depth, dx, dy); DrawAndUpdate(dx, -dy);
		}
		void DrawSerpinskyTriangle(int depth, float x0, float y0, float length, float H, float O, float angle) // Строит фрактал "Трегуольник Серпинского"
		{	// Фрактал начинается с треугольника
			if (depth == 0)
			{
				Graphics ^ g = MAP->CreateGraphics();
				SolidBrush^ blueBrush = gcnew SolidBrush(Color::FromArgb(75, 0, 0, 0));

				//Нахожу точки треугольника
				Point p1 = Point(x0, y0);
				Point p2 = Point(x0 + O, y0 - H);
				Point p3 = Point(x0 + 2 * O, y0);
				array<Point>^ Points = { p1,p2,p3 };

				// FillPolygon() - делает заливку в указанной области(в данном случае область строится по трём точкам)
				g->FillPolygon(blueBrush, Points);
			}
			else
			{
				depth--;
				length /= 2;
				H /= 2;
				O /= 2;
				// После уменьшения треугольника, строим три его копии так, чтобы они тоже образовывали треугольник
				DrawSerpinskyTriangle(depth, x0, y0, length, H, O, angle);
				DrawSerpinskyTriangle(depth, x0 + O, y0 - H, length, H, O, angle);
				DrawSerpinskyTriangle(depth, x0 + 2 * O, y0, length, H, O, angle);
			}
		}
		void DrawHilbertLine(int depth, float dx, float dy) // Строит фрактал "Кривая Гильберта"
		{
			if (depth > 0) DrawHilbertLine(depth - 1, dy, dx); DrawAndUpdate(dx, dy);
			if (depth > 0) DrawHilbertLine(depth - 1, dx, dy); DrawAndUpdate(dy, dx);
			if (depth > 0) DrawHilbertLine(depth - 1, dx, dy); DrawAndUpdate(-dx, -dy);
			if (depth > 0) DrawHilbertLine(depth - 1, -dy, -dx);
		}
		void DrawNapkin(int depth, float x0, float y0, float length, float angle) // Строит фрактал "Салфетка"
		{
			if (depth == 0)
			{
				Graphics ^ g = MAP->CreateGraphics();
				SolidBrush^ blueBrush = gcnew SolidBrush(Color::FromArgb(75, 0, 0, 0));
				float xpr = GetProjection(length, angle, 'x'); // Проекции по х и по у при заданном угле и длинне
				float ypr = GetProjection(length, angle, 'y');

				Point p1 = Point(x0, y0);
				Point p2 = Point(x0 + length, y0);
				Point p3 = Point(x0 + length + xpr, y0 - ypr);
				Point p4 = Point(x0 + xpr, y0 - ypr);
				array<Point>^ Points = { p1,p2,p3,p4 };

				g->FillPolygon(blueBrush, Points);
			}
			else
			{
				depth--;
				length /= 3;
				float xpr = GetProjection(length, angle, 'x'); // Проекции по х и по у при заданном угле и длинне
				float ypr = GetProjection(length, angle, 'y');
				DrawNapkin(depth, x0, y0, length, angle);
				DrawNapkin(depth, x0 + xpr, y0 - ypr, length, angle);
				DrawNapkin(depth, x0 + xpr * 2, y0 - ypr * 2, length, angle);
				DrawNapkin(depth, x0 + length + xpr * 2, y0 - ypr * 2, length, angle);
				DrawNapkin(depth, x0 + length * 2 + xpr * 2, y0 - ypr * 2, length, angle);
				DrawNapkin(depth, x0 + length * 2 + xpr, y0 - ypr, length, angle);
				DrawNapkin(depth, x0 + length * 2, y0, length, angle);
				DrawNapkin(depth, x0 + length , y0, length, angle);
			}
		}

		// Вспомогательные функции для фракталов
		void R(int depth, float dx, float dy)
		{	// Строит верхнюю часть кривой Серпинского
			if (depth > 0)
			{
				depth--;
				R(depth, dx, dy); DrawAndUpdate(dx, dy);
				D(depth, dx, dy); DrawAndUpdate(2 * dx, 0);
				U(depth, dx, dy); DrawAndUpdate(dx, -dy);
				R(depth, dx, dy);
			}
		}
		void D(int depth, float dx, float dy)
		{	// Строит правую часть кривой Серпинского
			if (depth > 0)
			{
				depth--;
				D(depth, dx, dy); DrawAndUpdate(-dx, dy);
				L(depth, dx, dy); DrawAndUpdate(0, 2 * dy);
				R(depth, dx, dy); DrawAndUpdate(dx, dy);
				D(depth, dx, dy);
			}
		}
		void L(int depth, float dx, float dy)
		{	// Строит нижнюю часть кривой Серпинского
			if (depth > 0)
			{
				depth--;
				L(depth, dx, dy); DrawAndUpdate(-dx, -dy);
				U(depth, dx, dy); DrawAndUpdate(-2 * dx, 0);
				D(depth, dx, dy); DrawAndUpdate(-dx, dy);
				L(depth, dx, dy);
			}
		}
		void U(int depth, float dx, float dy)
		{	// Строит левую часть кривой Серпинского
			if (depth > 0)
			{
				depth--;
				U(depth, dx, dy); DrawAndUpdate(dx, -dy);
				R(depth, dx, dy); DrawAndUpdate(0, -2 * dy);
				L(depth, dx, dy); DrawAndUpdate(-dx, -dy);
				U(depth, dx, dy);
			}
		}
		void DrawAndUpdate(float dx, float dy)
		{	// Функция рисует линию от последней точки до новой, а также обновляет координаты.
			Graphics ^ g = MAP->CreateGraphics();
			Pen^ pen = gcnew Pen(Color::Black, 1);
			g->DrawLine(pen, x, y, x + dx, y + dy);
			x += dx;
			y += dy;
		}

		// Функции для повышения читабельности кода
		float GetProjection(float length, float angle, char ax)
		{	// Вычисление проеции прямой на ось Оx или на ось Оy
			if (ax == 'x') return length * cos(ConvertToRadians(angle));
			else return length * sin(ConvertToRadians(angle));
		}
		float ConvertToRadians(float Degrees)
		{	// Перевод градусов в радианы
			return M_PI * Degrees / 180;
		}
		void SetChoosenFractal() // Проверяем состояния каждого чекбокса. ChoosenFractal будет менятся в зависимости от того, какой из них отмечен галочкой(CheckState==Checked).
		{
			if (checkBox6->CheckState == CheckState::Checked) ChoosenFractal = 6;
			else if (checkBox5->CheckState == CheckState::Checked) ChoosenFractal = 5;
			else if (checkBox4->CheckState == CheckState::Checked) ChoosenFractal = 4;
			else if (checkBox3->CheckState == CheckState::Checked) ChoosenFractal = 3;
			else if (checkBox2->CheckState == CheckState::Checked) ChoosenFractal = 2;
			else if (checkBox1->CheckState == CheckState::Checked) ChoosenFractal = 1;
			else ChoosenFractal = 0; // Не отмечен ни один из чекбоксов
		}
		void SetVariables()	// Устанавливает некоторые значения в начальное положение
		{
			w = MAP->Width - 3;						 // w - ширина полотна
			h = MAP->Height - 3;					 // h - высота полотна
			isFilled = true;						 // Отвечает за то, заполнена ли pictureBox1 чем-то
			scale = trackBar3->Value / 5.0;			 // scale - коэффициент, задающйся при помощи ползунка trackBar3, от которого зависит масштаб рисуемой фигуры
			depth = trackBar1->Value;				 // depth - глубина рекурсии, задающаяся при помощи ползунка trackBar1, влияет на то, сколько раз фрактал будет создавать самоподобные фигуры, из которых он состоит. сильно влияет на производительность(при depth = 10 построение занимает примерно 15-20 секунд.)
			if (trackBar2->Value > 5)				 // angle - угол, задающйся при помощи ползунка trackBar2. Этот угол задаёт направление построения фрактала.
				angle = (trackBar2->Value - 5) * -3;
			else if (trackBar2->Value < 5)
				angle = (5 - trackBar2->Value) * 3;
			else angle = 0;
		}
		void CleanMAP()
		{ // Очистка полотна и вывод надписи "Очищено"
			if (isFilled) // Проверка на пустоту
			{
				Graphics ^ g = MAP->CreateGraphics();
				Pen^ pen = gcnew Pen(Color::Black, 1);
				g->Clear(Color::FromArgb(224, 224, 224));
				label3->ForeColor = Color::Green;
				label3->Text = "Очищено";
				SetChoosenFractal();
				isFilled = false;
			}
		}

	// "Построить"
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		label3->Text = "";
		if (checkBox7->CheckState == CheckState::Checked) CleanMAP();
		label3->ForeColor = Color::Green;

		// Установка текущих значений переменных, и построение выбранного фрактала
		// Перед вызовом функции построения вычисляются начальные координаты, длина, а также значения, нужные конкретному фракталу
		SetVariables();
		SetChoosenFractal();
		switch (ChoosenFractal)
		{
		case 0:
		{
			label3->ForeColor = Color::Red;
			label3->Text = "Фрактал не выбран";
			break;
		}
		case 1:
		{
			length = scale * w / 2;
			x = (w - length) / 2;
			y = h / 2;
			DrawKochLine(depth, x, y, length, angle);
			label3->Text = "Построена кривая Коха";
			break;
		}
		case 2:
		{
			length = scale * w / 2;
			x = (w - length) / 2;
			y = h / 2 - length * sin(ConvertToRadians(angle + 60)) / 3;
			DrawKochSnowflake(depth, x, y, length, angle);
			label3->Text = "Построена снежинка Коха";
			break;
		}
		case 3:
		{
			float count = pow(2.0, depth + 2) - 2.0;
			length = scale * w / 2 / count;
			dx = length * cos(ConvertToRadians(45 + angle)) * sqrt(2);
			dy = length * sin(ConvertToRadians(45 + angle)) * sqrt(2);
			x = (w - dx * count) / 2 + dx;
			y = (h - dy * count) / 2;
			DrawSerpinskyLine(depth, dx, dy);
			label3->Text = "Построена кривая Серпинского";
			break;
		}
		case 4:
		{
			length = scale * w / 2;
			angle += 60;
			float H = GetProjection(length, angle, 'y');// Высота треугольника
			float O = sqrt(length * length - H * H);	// Основание треугольника
			x = w / 2 - GetProjection(length,angle,'x');
			y = (h + H) / 2;
			DrawSerpinskyTriangle(depth, x, y, length, H, O, angle);
			label3->Text = "Построен ковёр Серпинского";
			break;
		}
		case 5:
		{
			length = scale * w / 2;
			x = (w - length) / 2;
			y = x;
			dx = length / (pow(2.0, depth + 1) - 1.0)*cos(ConvertToRadians(angle));
			dy = length / (pow(2.0, depth + 1) - 1.0)*sin(ConvertToRadians(angle));
			DrawHilbertLine(depth, dx, dy);
			label3->Text = "Построена кривая Гильберта";
			break;
		}
		case 6:
		{
			length = scale* w/2;
			x = (w - length) / 2;
			y = x + length;
			DrawNapkin(depth, x, y, length, 5 * angle + 90);
			label3->Text = "Построена салфетка";
			break;
		}
		}
	}
	// "Очистить"
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CleanMAP();
	}
	// Выбор фрактала
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{	// Выбрали кривую Коха
		if (checkBox1->Checked)
		{
			checkBox2->CheckState::set(CheckState::Unchecked);
			checkBox3->CheckState::set(CheckState::Unchecked);
			checkBox4->CheckState::set(CheckState::Unchecked);
			checkBox5->CheckState::set(CheckState::Unchecked);
			checkBox6->CheckState::set(CheckState::Unchecked);
		}
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{	// Выбрали снежинку Коха
		if (checkBox2->Checked)
		{
			checkBox1->CheckState::set(CheckState::Unchecked);
			checkBox3->CheckState::set(CheckState::Unchecked);
			checkBox4->CheckState::set(CheckState::Unchecked);
			checkBox5->CheckState::set(CheckState::Unchecked);
			checkBox6->CheckState::set(CheckState::Unchecked);
		}
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{	// Выбрали кривую Серпинского
		if (checkBox3->Checked)
		{
			checkBox1->CheckState::set(CheckState::Unchecked);
			checkBox2->CheckState::set(CheckState::Unchecked);
			checkBox4->CheckState::set(CheckState::Unchecked);
			checkBox5->CheckState::set(CheckState::Unchecked);
			checkBox6->CheckState::set(CheckState::Unchecked);
		}
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{	// Выбрали ковер Серпинского
		if (checkBox4->Checked)
		{
			checkBox1->CheckState::set(CheckState::Unchecked);
			checkBox2->CheckState::set(CheckState::Unchecked);
			checkBox3->CheckState::set(CheckState::Unchecked);
			checkBox5->CheckState::set(CheckState::Unchecked);
			checkBox6->CheckState::set(CheckState::Unchecked);
		}
	}
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{	// Выбрали кривую Гильберта
		if (checkBox5->Checked)
		{
			checkBox1->CheckState::set(CheckState::Unchecked);
			checkBox2->CheckState::set(CheckState::Unchecked);
			checkBox3->CheckState::set(CheckState::Unchecked);
			checkBox4->CheckState::set(CheckState::Unchecked);
			checkBox6->CheckState::set(CheckState::Unchecked);
		}
	}
	private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{	// Выбрали салфетку
		if (checkBox6->Checked)
		{
			checkBox1->CheckState::set(CheckState::Unchecked);
			checkBox2->CheckState::set(CheckState::Unchecked);
			checkBox3->CheckState::set(CheckState::Unchecked);
			checkBox4->CheckState::set(CheckState::Unchecked);
			checkBox5->CheckState::set(CheckState::Unchecked);
		}
	}
	// Загрузка картинки в предпросмотр
	private: System::Void checkBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		Preview->Image = Image::FromFile("Кривая Коха.jpg");
	}
	private: System::Void checkBox2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		Preview->Image = Image::FromFile("Снежинка Коха.jpg");
	}
	private: System::Void checkBox3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		Preview->Image = Image::FromFile("Кривая Серпинского.jpg");
	}
	private: System::Void checkBox4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		Preview->Image = Image::FromFile("Ковёр Серпинского.jpg");
	}
	private: System::Void checkBox6_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		Preview->Image = Image::FromFile("Салфетка.jpg");
	}
	private: System::Void checkBox5_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		Preview->Image = Image::FromFile("Кривая Гильберта.jpg");
	}
	private: System::Void checkBox7_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		toolTip1->SetToolTip(this->checkBox7, "При отключенной автоочистке очередной график будет строиться поверх предыдущего");
	}
	// Замена картинок при отводе курсора 
	private: System::Void checkBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Preview->Image = Image::FromFile("Пустая картинка.jpg");
	}
	private: System::Void checkBox2_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Preview->Image = Image::FromFile("Пустая картинка.jpg");
	}
	private: System::Void checkBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Preview->Image = Image::FromFile("Пустая картинка.jpg");
	}
	private: System::Void checkBox4_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Preview->Image = Image::FromFile("Пустая картинка.jpg");
	}
	private: System::Void checkBox5_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Preview->Image = Image::FromFile("Пустая картинка.jpg");
	}
	private: System::Void checkBox6_MouseLeave(System::Object^  sender, System::EventArgs^  e)
	{
		Preview->Image = Image::FromFile("Пустая картинка.jpg");
	}
	};
}