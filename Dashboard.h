#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	protected:














	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ Pannel_Titre;


	private: System::Windows::Forms::Button^ Btn_Gestion_Personnel;
	private: System::Windows::Forms::Button^ Btn_Gestion_clients;
	private: System::Windows::Forms::Button^ btn_Gestion_commandes;
	private: System::Windows::Forms::Button^ Btn_Gestion_stock;
	private: System::Windows::Forms::Button^ Btn_Gestion_stat;
	private: System::Windows::Forms::Button^ Btn_Exit_DB;
	private: System::Windows::Forms::Panel^ panel_gestion;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;














	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Pannel_Titre = (gcnew System::Windows::Forms::Panel());
			this->Btn_Gestion_Personnel = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_clients = (gcnew System::Windows::Forms::Button());
			this->btn_Gestion_commandes = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stock = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stat = (gcnew System::Windows::Forms::Button());
			this->Btn_Exit_DB = (gcnew System::Windows::Forms::Button());
			this->panel_gestion = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel_gestion->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(464, 45);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1092, 106);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gestion Personnel";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Pannel_Titre
			// 
			this->Pannel_Titre->Dock = System::Windows::Forms::DockStyle::Top;
			this->Pannel_Titre->Location = System::Drawing::Point(0, 0);
			this->Pannel_Titre->Margin = System::Windows::Forms::Padding(2);
			this->Pannel_Titre->Name = L"Pannel_Titre";
			this->Pannel_Titre->Size = System::Drawing::Size(366, 178);
			this->Pannel_Titre->TabIndex = 0;
			// 
			// Btn_Gestion_Personnel
			// 
			this->Btn_Gestion_Personnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_Personnel->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Gestion_Personnel->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_Personnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_Personnel->Location = System::Drawing::Point(0, 178);
			this->Btn_Gestion_Personnel->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_Personnel->Name = L"Btn_Gestion_Personnel";
			this->Btn_Gestion_Personnel->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_Personnel->TabIndex = 1;
			this->Btn_Gestion_Personnel->Text = L"Gestion personnel";
			this->Btn_Gestion_Personnel->UseVisualStyleBackColor = true;
			this->Btn_Gestion_Personnel->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Personnel);
			// 
			// Btn_Gestion_clients
			// 
			this->Btn_Gestion_clients->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_clients->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_clients->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_clients->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_clients->Location = System::Drawing::Point(0, 283);
			this->Btn_Gestion_clients->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_clients->Name = L"Btn_Gestion_clients";
			this->Btn_Gestion_clients->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_clients->TabIndex = 2;
			this->Btn_Gestion_clients->Text = L"Gestion clients";
			this->Btn_Gestion_clients->UseVisualStyleBackColor = true;
			this->Btn_Gestion_clients->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Clients);
			// 
			// btn_Gestion_commandes
			// 
			this->btn_Gestion_commandes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Gestion_commandes->FlatAppearance->BorderSize = 0;
			this->btn_Gestion_commandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Gestion_commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->btn_Gestion_commandes->ForeColor = System::Drawing::Color::Gainsboro;
			this->btn_Gestion_commandes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Gestion_commandes->Location = System::Drawing::Point(0, 388);
			this->btn_Gestion_commandes->Margin = System::Windows::Forms::Padding(2);
			this->btn_Gestion_commandes->Name = L"btn_Gestion_commandes";
			this->btn_Gestion_commandes->Size = System::Drawing::Size(366, 105);
			this->btn_Gestion_commandes->TabIndex = 3;
			this->btn_Gestion_commandes->Text = L"Gestion commandes";
			this->btn_Gestion_commandes->UseVisualStyleBackColor = true;
			this->btn_Gestion_commandes->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Commandes);
			// 
			// Btn_Gestion_stock
			// 
			this->Btn_Gestion_stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stock->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stock->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stock->Location = System::Drawing::Point(0, 493);
			this->Btn_Gestion_stock->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_stock->Name = L"Btn_Gestion_stock";
			this->Btn_Gestion_stock->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_stock->TabIndex = 4;
			this->Btn_Gestion_stock->Text = L"Gestion stock";
			this->Btn_Gestion_stock->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stock->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stock);
			// 
			// Btn_Gestion_stat
			// 
			this->Btn_Gestion_stat->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stat->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stat->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stat->Location = System::Drawing::Point(0, 598);
			this->Btn_Gestion_stat->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Gestion_stat->Name = L"Btn_Gestion_stat";
			this->Btn_Gestion_stat->Size = System::Drawing::Size(366, 105);
			this->Btn_Gestion_stat->TabIndex = 5;
			this->Btn_Gestion_stat->Text = L"Gestion statistiques";
			this->Btn_Gestion_stat->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stat->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stat);
			// 
			// Btn_Exit_DB
			// 
			this->Btn_Exit_DB->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Exit_DB->FlatAppearance->BorderSize = 0;
			this->Btn_Exit_DB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Exit_DB->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Exit_DB->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Exit_DB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Exit_DB->Location = System::Drawing::Point(0, 703);
			this->Btn_Exit_DB->Margin = System::Windows::Forms::Padding(2);
			this->Btn_Exit_DB->Name = L"Btn_Exit_DB";
			this->Btn_Exit_DB->Size = System::Drawing::Size(366, 105);
			this->Btn_Exit_DB->TabIndex = 6;
			this->Btn_Exit_DB->Text = L"Exit";
			this->Btn_Exit_DB->UseVisualStyleBackColor = true;
			// 
			// panel_gestion
			// 
			this->panel_gestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel_gestion->Controls->Add(this->Btn_Exit_DB);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_stat);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_stock);
			this->panel_gestion->Controls->Add(this->btn_Gestion_commandes);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_clients);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_Personnel);
			this->panel_gestion->Controls->Add(this->Pannel_Titre);
			this->panel_gestion->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_gestion->Location = System::Drawing::Point(0, 0);
			this->panel_gestion->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_gestion->Name = L"panel_gestion";
			this->panel_gestion->Size = System::Drawing::Size(366, 998);
			this->panel_gestion->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(474, 129);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(978, 732);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(970, 699);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->Click += gcnew System::EventHandler(this, &Dashboard::tabPage1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(970, 699);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Dashboard::tabPage2_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1659, 998);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel_gestion);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel_gestion->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
			private: System::Void Click_Btn_gestion_Personnel(System::Object^ sender, System::EventArgs^ e) {
				

			}
			private: System::Void Click_Btn_gestion_Clients(System::Object^ sender, System::EventArgs^ e) {
			
			}
			private: System::Void Click_Btn_gestion_Commandes(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void Click_Btn_gestion_Stock(System::Object^ sender, System::EventArgs^ e) {
			}
			private: System::Void Click_Btn_gestion_Stat(System::Object^ sender, System::EventArgs^ e) {
			}
	
private: System::Void Dashboard_Text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
