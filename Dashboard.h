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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel_Dash_Board;

	protected:

	private: System::Windows::Forms::Label^ Title_Dashboard;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Btn_Gestion_stat;

	private: System::Windows::Forms::Button^ Btn_Gestion_stock;

	private: System::Windows::Forms::Button^ btn_Gestion_commandes;

	private: System::Windows::Forms::Button^ Btn_Gestion_clients;

	private: System::Windows::Forms::Button^ Btn_Gestion_Personnel;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Btn_Gestion_stat = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stock = (gcnew System::Windows::Forms::Button());
			this->btn_Gestion_commandes = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_clients = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_Personnel = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel_Dash_Board = (gcnew System::Windows::Forms::Panel());
			this->Title_Dashboard = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel_Dash_Board->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->Btn_Gestion_stat);
			this->panel1->Controls->Add(this->Btn_Gestion_stock);
			this->panel1->Controls->Add(this->btn_Gestion_commandes);
			this->panel1->Controls->Add(this->Btn_Gestion_clients);
			this->panel1->Controls->Add(this->Btn_Gestion_Personnel);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(488, 1248);
			this->panel1->TabIndex = 0;
			// 
			// Btn_Gestion_stat
			// 
			this->Btn_Gestion_stat->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stat->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stat->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stat->Location = System::Drawing::Point(0, 700);
			this->Btn_Gestion_stat->Name = L"Btn_Gestion_stat";
			this->Btn_Gestion_stat->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_stat->TabIndex = 5;
			this->Btn_Gestion_stat->Text = L"Gestion statistiques";
			this->Btn_Gestion_stat->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stat->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stat);
			// 
			// Btn_Gestion_stock
			// 
			this->Btn_Gestion_stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stock->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stock->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stock->Location = System::Drawing::Point(0, 569);
			this->Btn_Gestion_stock->Name = L"Btn_Gestion_stock";
			this->Btn_Gestion_stock->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_stock->TabIndex = 4;
			this->Btn_Gestion_stock->Text = L"Gestion stock";
			this->Btn_Gestion_stock->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stock->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stock);
			// 
			// btn_Gestion_commandes
			// 
			this->btn_Gestion_commandes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Gestion_commandes->FlatAppearance->BorderSize = 0;
			this->btn_Gestion_commandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Gestion_commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->btn_Gestion_commandes->ForeColor = System::Drawing::Color::Gainsboro;
			this->btn_Gestion_commandes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Gestion_commandes->Location = System::Drawing::Point(0, 438);
			this->btn_Gestion_commandes->Name = L"btn_Gestion_commandes";
			this->btn_Gestion_commandes->Size = System::Drawing::Size(488, 131);
			this->btn_Gestion_commandes->TabIndex = 3;
			this->btn_Gestion_commandes->Text = L"Gestion commandes";
			this->btn_Gestion_commandes->UseVisualStyleBackColor = true;
			this->btn_Gestion_commandes->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Commandes);
			// 
			// Btn_Gestion_clients
			// 
			this->Btn_Gestion_clients->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_clients->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_clients->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_clients->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_clients->Location = System::Drawing::Point(0, 307);
			this->Btn_Gestion_clients->Name = L"Btn_Gestion_clients";
			this->Btn_Gestion_clients->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_clients->TabIndex = 2;
			this->Btn_Gestion_clients->Text = L"Gestion clients";
			this->Btn_Gestion_clients->UseVisualStyleBackColor = true;
			this->Btn_Gestion_clients->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Clients);
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
			this->Btn_Gestion_Personnel->Location = System::Drawing::Point(0, 176);
			this->Btn_Gestion_Personnel->Name = L"Btn_Gestion_Personnel";
			this->Btn_Gestion_Personnel->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_Personnel->TabIndex = 1;
			this->Btn_Gestion_Personnel->Text = L"Gestion personnel";
			this->Btn_Gestion_Personnel->UseVisualStyleBackColor = true;
			this->Btn_Gestion_Personnel->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Personnel);
			// 
			// panel2
			// 
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(488, 176);
			this->panel2->TabIndex = 0;
			// 
			// panel_Dash_Board
			// 
			this->panel_Dash_Board->Controls->Add(this->Title_Dashboard);
			this->panel_Dash_Board->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_Dash_Board->Location = System::Drawing::Point(488, 0);
			this->panel_Dash_Board->Margin = System::Windows::Forms::Padding(6);
			this->panel_Dash_Board->Name = L"panel_Dash_Board";
			this->panel_Dash_Board->Size = System::Drawing::Size(1966, 1096);
			this->panel_Dash_Board->TabIndex = 1;
			// 
			// Title_Dashboard
			// 
			this->Title_Dashboard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Title_Dashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Title_Dashboard->Location = System::Drawing::Point(464, 45);
			this->Title_Dashboard->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Title_Dashboard->Name = L"Title_Dashboard";
			this->Title_Dashboard->Size = System::Drawing::Size(1092, 106);
			this->Title_Dashboard->TabIndex = 0;
			this->Title_Dashboard->Text = L"Dashboard";
			this->Title_Dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(2454, 1248);
			this->Controls->Add(this->panel_Dash_Board);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->panel1->ResumeLayout(false);
			this->panel_Dash_Board->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
			private: System::Void Click_Btn_gestion_Personnel(System::Object^ sender, System::EventArgs^ e) {
				Title_Dashboard->Text = "gestion personnel";
			}
						private: System::Void Click_Btn_gestion_Clients(System::Object^ sender, System::EventArgs^ e) {
							Title_Dashboard->Text = "gestion Clients";
						}
										private: System::Void Click_Btn_gestion_Commandes(System::Object^ sender, System::EventArgs^ e) {
											Title_Dashboard->Text = "gestion Commandes";
										}
														private: System::Void Click_Btn_gestion_Stock(System::Object^ sender, System::EventArgs^ e) {
															Title_Dashboard->Text = "gestion Stock";
														}
																		private: System::Void Click_Btn_gestion_Stat(System::Object^ sender, System::EventArgs^ e) {
																			Title_Dashboard->Text = "gestion Statistiques";
																		}
	};
}
