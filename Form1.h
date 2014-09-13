#include <malloc.h>
#include <string>
#include <Windows.h>

#pragma once

short gisu;
bool stop=true;
char name_2[40][7]={"강하진","김유나","김진솔","김형구","박근한","박민식","박소영","이성훈","강민성","김강현",
"김지혁","김태훈","나동훈","남상아","박소현","서수진","손헤주","송용우","양승우","오선","오영규","이고은",
"이관호","이도영","이람","이선민","이주원","이준기","이헌성","이형기","임관훈","임제헌","임지현","지영은",
"최기훈","최송희","최아름","최예은","최희수","한성원"};

char name_3[33][8]={"경희","고태영","권아영","김나현","김도현","김형직","모경현","문정현","박수찬","박인성",
"서영주","성미진","셜리","손정은","송준호","신주철","신현화","안병훈","안재붕","안주연","유인경","윤이",
"윤일근","임민수","지준경","최유녕","최준","햄","향긔","헛썽","홍재현","hansol","kkjj123"};


namespace boaz_rc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	
	/// <summary>
	/// Form1에 대한 요약입니다.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  text_result;
	private: System::Windows::Forms::Button^  button_run;
	private: System::Windows::Forms::Button^  button_stop;

	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다.
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마십시오.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->text_result = (gcnew System::Windows::Forms::TextBox());
			this->button_run = (gcnew System::Windows::Forms::Button());
			this->button_stop = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(69, 196);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(51, 16);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1,2기";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(136, 196);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(41, 16);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"3기";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// text_result
			// 
			this->text_result->Location = System::Drawing::Point(48, 219);
			this->text_result->Name = L"text_result";
			this->text_result->Size = System::Drawing::Size(158, 21);
			this->text_result->TabIndex = 2;
			// 
			// button_run
			// 
			this->button_run->Location = System::Drawing::Point(280, 193);
			this->button_run->Name = L"button_run";
			this->button_run->Size = System::Drawing::Size(75, 23);
			this->button_run->TabIndex = 3;
			this->button_run->Text = L"돌리기";
			this->button_run->UseVisualStyleBackColor = true;
			this->button_run->Click += gcnew System::EventHandler(this, &Form1::button_run_Click);
			// 
			// button_stop
			// 
			this->button_stop->Location = System::Drawing::Point(280, 217);
			this->button_stop->Name = L"button_stop";
			this->button_stop->Size = System::Drawing::Size(75, 23);
			this->button_stop->TabIndex = 4;
			this->button_stop->Text = L"정지";
			this->button_stop->UseVisualStyleBackColor = true;
			this->button_stop->Click += gcnew System::EventHandler(this, &Form1::button_stop_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(427, 250);
			this->Controls->Add(this->button_stop);
			this->Controls->Add(this->button_run);
			this->Controls->Add(this->text_result);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"BOAZ 제비뽑기";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 gisu=2;
			 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 gisu=3;
		 }
private: System::Void button_run_Click(System::Object^  sender, System::EventArgs^  e) {
			 CheckForIllegalCrossThreadCalls = false;

			 if(gisu==2){//2기이면
				 Thread^ oThread = gcnew Thread( gcnew ThreadStart( this, &Form1::thread_name_2 ) );
				 oThread->Start();//스레드 시작
			 }
			 else if(gisu==3){
				 Thread^ oThread = gcnew Thread( gcnew ThreadStart( this, &Form1::thread_name_3 ) );
				 oThread->Start();
			 }

		 }


		 void thread_name_2() {//2기 랜덤뽑기
			 stop=true;
			 int i=0;

			 while(stop){
				 text_result->Text=gcnew String(name_2[i++]);//바꾸기
				 
				 if(i==40)
					 i=0;
				 
				 Sleep(10);
			 }
		 }


		 void thread_name_3() {//3기 랜덤뽑기
			 stop=true;
			 int i=0;

			 while(stop){
				 text_result->Text=gcnew String(name_3[i++]);

				 if(i==33)
					 i=0;
				
				 Sleep(10);
			 }
		 }


private: System::Void button_stop_Click(System::Object^  sender, System::EventArgs^  e) {
			 stop=false;//중지버튼시 멈추기
		 }

		 
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			stop=false;//프로그램 종료시 종료
		 }
};
}

