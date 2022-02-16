#pragma once

namespace tictactoe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for tttUI
	/// </summary>
	public ref class tttUI : public System::Windows::Forms::Form
	{
	public:
		tttUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~tttUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Label^ lblXwin;
	private: System::Windows::Forms::Label^ lblOlosses;
	private: System::Windows::Forms::Label^ lblOwins;
	private: System::Windows::Forms::Label^ lblXLosses;
	private: System::Windows::Forms::Label^ lblOL;
	private: System::Windows::Forms::Label^ lblXL;
	private: System::Windows::Forms::Label^ lblOW;
	private: System::Windows::Forms::Label^ lblXW;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnGiveUp;
	private: System::Windows::Forms::Label^ lblD;
	private: System::Windows::Forms::Label^ lbldraws;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->lblXwin = (gcnew System::Windows::Forms::Label());
			this->lblOlosses = (gcnew System::Windows::Forms::Label());
			this->lblOwins = (gcnew System::Windows::Forms::Label());
			this->lblXLosses = (gcnew System::Windows::Forms::Label());
			this->lblOL = (gcnew System::Windows::Forms::Label());
			this->lblXL = (gcnew System::Windows::Forms::Label());
			this->lblOW = (gcnew System::Windows::Forms::Label());
			this->lblXW = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnGiveUp = (gcnew System::Windows::Forms::Button());
			this->lblD = (gcnew System::Windows::Forms::Label());
			this->lbldraws = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->btn9);
			this->panel1->Controls->Add(this->btn8);
			this->panel1->Controls->Add(this->btn7);
			this->panel1->Controls->Add(this->btn6);
			this->panel1->Controls->Add(this->btn5);
			this->panel1->Controls->Add(this->btn4);
			this->panel1->Controls->Add(this->btn3);
			this->panel1->Controls->Add(this->btn2);
			this->panel1->Controls->Add(this->btn1);
			this->panel1->Location = System::Drawing::Point(36, 37);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(241, 261);
			this->panel1->TabIndex = 0;
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(168, 178);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(78, 83);
			this->btn9->TabIndex = 8;
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &tttUI::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(84, 178);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(78, 83);
			this->btn8->TabIndex = 7;
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &tttUI::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(0, 178);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(78, 83);
			this->btn7->TabIndex = 6;
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &tttUI::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(168, 89);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(78, 83);
			this->btn6->TabIndex = 5;
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &tttUI::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(84, 89);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(78, 83);
			this->btn5->TabIndex = 4;
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &tttUI::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(0, 89);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(78, 83);
			this->btn4->TabIndex = 3;
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &tttUI::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(168, 0);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(78, 83);
			this->btn3->TabIndex = 2;
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &tttUI::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(84, 0);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(78, 83);
			this->btn2->TabIndex = 1;
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &tttUI::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(0, 0);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(78, 83);
			this->btn1->TabIndex = 0;
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &tttUI::btn1_Click);
			// 
			// lblXwin
			// 
			this->lblXwin->AutoSize = true;
			this->lblXwin->Location = System::Drawing::Point(360, 377);
			this->lblXwin->Name = L"lblXwin";
			this->lblXwin->Size = System::Drawing::Size(47, 13);
			this->lblXwin->TabIndex = 1;
			this->lblXwin->Text = L"X Wins: ";
			// 
			// lblOlosses
			// 
			this->lblOlosses->AutoSize = true;
			this->lblOlosses->Location = System::Drawing::Point(442, 413);
			this->lblOlosses->Name = L"lblOlosses";
			this->lblOlosses->Size = System::Drawing::Size(54, 13);
			this->lblOlosses->TabIndex = 2;
			this->lblOlosses->Text = L"O Losses:";
			// 
			// lblOwins
			// 
			this->lblOwins->AutoSize = true;
			this->lblOwins->Location = System::Drawing::Point(360, 413);
			this->lblOwins->Name = L"lblOwins";
			this->lblOwins->Size = System::Drawing::Size(48, 13);
			this->lblOwins->TabIndex = 3;
			this->lblOwins->Text = L"O Wins: ";
			// 
			// lblXLosses
			// 
			this->lblXLosses->AutoSize = true;
			this->lblXLosses->Location = System::Drawing::Point(442, 377);
			this->lblXLosses->Name = L"lblXLosses";
			this->lblXLosses->Size = System::Drawing::Size(56, 13);
			this->lblXLosses->TabIndex = 4;
			this->lblXLosses->Text = L"X Losses: ";
			// 
			// lblOL
			// 
			this->lblOL->AutoSize = true;
			this->lblOL->Location = System::Drawing::Point(514, 413);
			this->lblOL->Name = L"lblOL";
			this->lblOL->Size = System::Drawing::Size(13, 13);
			this->lblOL->TabIndex = 5;
			this->lblOL->Text = L"0";
			// 
			// lblXL
			// 
			this->lblXL->AutoSize = true;
			this->lblXL->Location = System::Drawing::Point(514, 377);
			this->lblXL->Name = L"lblXL";
			this->lblXL->Size = System::Drawing::Size(13, 13);
			this->lblXL->TabIndex = 6;
			this->lblXL->Text = L"0";
			// 
			// lblOW
			// 
			this->lblOW->AutoSize = true;
			this->lblOW->Location = System::Drawing::Point(413, 413);
			this->lblOW->Name = L"lblOW";
			this->lblOW->Size = System::Drawing::Size(13, 13);
			this->lblOW->TabIndex = 7;
			this->lblOW->Text = L"0";
			// 
			// lblXW
			// 
			this->lblXW->AutoSize = true;
			this->lblXW->Location = System::Drawing::Point(413, 377);
			this->lblXW->Name = L"lblXW";
			this->lblXW->Size = System::Drawing::Size(13, 13);
			this->lblXW->TabIndex = 8;
			this->lblXW->Text = L"0";
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(491, 443);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(75, 23);
			this->btnReset->TabIndex = 9;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &tttUI::btnReset_Click);
			// 
			// btnGiveUp
			// 
			this->btnGiveUp->Location = System::Drawing::Point(36, 359);
			this->btnGiveUp->Name = L"btnGiveUp";
			this->btnGiveUp->Size = System::Drawing::Size(116, 49);
			this->btnGiveUp->TabIndex = 10;
			this->btnGiveUp->Text = L"Give Up";
			this->btnGiveUp->UseVisualStyleBackColor = true;
			this->btnGiveUp->Click += gcnew System::EventHandler(this, &tttUI::btnGiveUp_Click);
			// 
			// lblD
			// 
			this->lblD->AutoSize = true;
			this->lblD->Location = System::Drawing::Point(413, 448);
			this->lblD->Name = L"lblD";
			this->lblD->Size = System::Drawing::Size(13, 13);
			this->lblD->TabIndex = 11;
			this->lblD->Text = L"0";
			// 
			// lbldraws
			// 
			this->lbldraws->AutoSize = true;
			this->lbldraws->Location = System::Drawing::Point(360, 448);
			this->lbldraws->Name = L"lbldraws";
			this->lbldraws->Size = System::Drawing::Size(43, 13);
			this->lbldraws->TabIndex = 12;
			this->lbldraws->Text = L"Draws: ";
			// 
			// tttUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(608, 478);
			this->Controls->Add(this->lbldraws);
			this->Controls->Add(this->lblD);
			this->Controls->Add(this->btnGiveUp);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->lblXW);
			this->Controls->Add(this->lblOW);
			this->Controls->Add(this->lblXL);
			this->Controls->Add(this->lblOL);
			this->Controls->Add(this->lblXLosses);
			this->Controls->Add(this->lblOwins);
			this->Controls->Add(this->lblOlosses);
			this->Controls->Add(this->lblXwin);
			this->Controls->Add(this->panel1);
			this->Name = L"tttUI";
			this->Text = L"tttUI";
			this->Load += gcnew System::EventHandler(this, &tttUI::tttUI_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		int* board;
		int Xwins;
		int XLosses;
		int Owins;
		int OLosses;
		int turn;
		int draws;


	private: System::Void tttUI_Load(System::Object^ sender, System::EventArgs^ e) {
		board = new int[9];
		for (int i = 0; i < 9; i++)
		{
			board[i] = 0; 
		}
		Xwins = 0;
		XLosses = 0;
		Owins = 0;
		OLosses = 0;
		int turn;
		int draws;

	}
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		btn1->Enabled = false;
		if (turn % 2 == 0)
		{
			btn1->Text = "X";
			board[0] = 1;
			turn++; 
		}
		else {
			btn1->Text = "O";
			board[0] = 2;
			turn++; 
		}

		int gstat = gamestatus(); 
		
		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!"); 
				Owins++;
				XLosses++; 
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++; 
			resetBoard();
		}


	}

	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		btn2->Enabled = false;
		if (turn % 2 == 0)
		{
			btn2->Text = "X";
			board[1] = 1;
			turn++;
		}
		else {
			btn2->Text = "O";
			board[1] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++;
				XLosses++;
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++;
			resetBoard();

		}
	}

	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		btn3->Enabled = false;
		if (turn % 2 == 0)
		{
			btn3->Text = "X";
			board[2] = 1;
			turn++;
		}
		else {
			btn3->Text = "O";
			board[2] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++;
				XLosses++;
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++; 
			resetBoard();
		}

	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		btn4->Enabled = false;
		if (turn % 2 == 0)
		{
			btn4->Text = "X";
			board[3] = 1;
			turn++;
		}
		else {
			btn4->Text = "O";
			board[3] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++;
				XLosses++;
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw"); 
			draws++; 
			resetBoard();
		}
	}

	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		btn5->Enabled = false;
		if (turn % 2 == 0)
		{
			btn5->Text = "X";
			board[4] = 1;
			turn++;
		}
		else {
			btn5->Text = "O";
			board[4] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard(); 
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++;
				XLosses++;
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++; 
			resetBoard();
		}
	}

	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		btn6->Enabled = false;
		if (turn % 2 == 0)
		{
			btn6->Text = "X";
			board[5] = 1;
			turn++;
		}
		else {
			btn6->Text = "O";
			board[5] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++;
				XLosses++;
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++; 
			resetBoard();
		}
	}

	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		btn7->Enabled = false;
		if (turn % 2 == 0)
		{
			btn7->Text = "X";
			board[6] = 1;
			turn++;
		}
		else {
			btn7->Text = "O";
			board[6] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++;
				XLosses++;
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++;
			resetBoard();
		}
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		btn8->Enabled = false;
		if (turn % 2 == 0)
		{
			btn8->Text = "X";
			board[7] = 1;
			turn++;
		}
		else {
			btn8->Text = "O";
			board[7] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if ((turn - 1) % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++;
				XLosses++;
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++;
			resetBoard();
		}
	}

	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		btn9->Enabled = false;
		if ((turn - 1) % 2 == 0)
		{
			btn9->Text = "X";
			board[8] = 1;
			turn++;
		}
		else
		{
			btn9->Text = "X";
			board[8] = 2;
			turn++;
		}
		int gstat = gamestatus();

		if (gstat == 1)
		{
			if (turn % 2 == 0)
			{
				MessageBox::Show("X Wins!");
				Xwins++;
				OLosses++;
				resetBoard();
			}
			else
			{
				MessageBox::Show("O Wins!");
				Owins++; 
				XLosses++; 
				resetBoard();
			}
		}
		else if (gstat == 2)
		{
			MessageBox::Show("Draw");
			draws++; 
			resetBoard();
		}
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		turn = 0; 
		Xwins = 0; 
		Owins = 0; 
		XLosses = 0; 
		OLosses = 0; 
		draws = 0; 
		for (int j = 0; j < 9; j++)
		{
			board[j] = 0; 
		}
		btn1->Enabled = true;
		btn1->Text = " ";
		btn2->Enabled = true;
		btn2->Text = " ";
		btn3->Enabled = true;
		btn3->Text = " ";
		btn4->Enabled = true;
		btn4->Text = " ";
		btn5->Enabled = true;
		btn5->Text = " ";
		btn6->Enabled = true;
		btn6->Text = " ";
		btn7->Enabled = true;
		btn7->Text = " ";
		btn8->Enabled = true;
		btn8->Text = " ";
		btn9->Enabled = true;
		btn9->Text = " ";
		lblD->Text = Convert::ToString(draws);
		lblXW->Text = Convert::ToString(Xwins);
		lblOW->Text = Convert::ToString(Owins);
		lblXL->Text = Convert::ToString(XLosses);
		lblOL->Text = Convert::ToString(OLosses);
	}

		   int gamestatus()
		   {
			   if ((board[0] == board[1] && board[1] == board[2] && board[0] != 0) ||
				   (board[3] == board[4] && board[4] == board[5] && board[3] != 0) ||
				   (board[6] == board[7] && board[7] == board[8] && board[6] != 0) ||
				   (board[0] == board[3] && board[3] == board[6] && board[0] != 0) ||
				   (board[1] == board[4] && board[4] == board[7] && board[1] != 0) ||
				   (board[2] == board[5] && board[5] == board[8] && board[2] != 0) ||
				   (board[0] == board[4] && board[4] == board[8] && board[0] != 0) ||
				   (board[2] == board[4] && board[4] == board[6] && board[2] != 0)
				   )
			   {
				   return 1; //Win 
				}
			   else if (turn == 9)
			   {
				   return 2; //Draw
			   }
			   else
			   {
				   return 3; //Continue
			   }

			}

		   void resetBoard()
		   {
			   turn = 0;
			   for (int j = 0; j < 9; j++)
			   {
				   board[j] = 0;
			   }
			   btn1->Enabled = true;
			   btn1->Text = " ";
			   btn2->Enabled = true;
			   btn2->Text = " ";
			   btn3->Enabled = true;
			   btn3->Text = " ";
			   btn4->Enabled = true;
			   btn4->Text = " ";
			   btn5->Enabled = true;
			   btn5->Text = " ";
			   btn6->Enabled = true;
			   btn6->Text = " ";
			   btn7->Enabled = true;
			   btn7->Text = " ";
			   btn8->Enabled = true;
			   btn8->Text = " ";
			   btn9->Enabled = true;
			   btn9->Text = " ";
			   lblD->Text = Convert::ToString(draws); 
			   lblXW->Text = Convert::ToString(Xwins); 
			   lblOW->Text = Convert::ToString(Owins); 
			   lblXL->Text = Convert::ToString(XLosses); 
			   lblOL->Text = Convert::ToString(OLosses);
		   }



	private: System::Void btnGiveUp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn % 2 == 0)
		{
			Owins++; 
			XLosses++; 
		}
		else
		{
			Xwins++;
			OLosses++; 
		}
		for (int j = 0; j < 9; j++)
		{
			board[j] = 0;
		}
		btn1->Enabled = true;
		btn1->Text = " ";
		btn2->Enabled = true;
		btn2->Text = " ";
		btn3->Enabled = true;
		btn3->Text = " ";
		btn4->Enabled = true;
		btn4->Text = " ";
		btn5->Enabled = true;
		btn5->Text = " ";
		btn6->Enabled = true;
		btn6->Text = " ";
		btn7->Enabled = true;
		btn7->Text = " ";
		btn8->Enabled = true;
		btn8->Text = " ";
		btn9->Enabled = true;
		btn9->Text = " ";
		lblD->Text = Convert::ToString(draws);
		lblXW->Text = Convert::ToString(Xwins);
		lblOW->Text = Convert::ToString(Owins);
		lblXL->Text = Convert::ToString(XLosses);
		lblOL->Text = Convert::ToString(OLosses);
		turn = 0; 

	}
};
};