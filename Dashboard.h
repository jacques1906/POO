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
	private: System::Windows::Forms::Panel^ Panel_Dashboard;
	private: System::Windows::Forms::Label^ Title_Dashboard;
	private: System::Windows::Forms::Panel^ panel_Gestion_Personnel;
	private: System::Windows::Forms::Label^ Title_Gestion_Personel;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Client;

	private: System::Windows::Forms::Label^ Title_gestion_clients;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Commandes;
	private: System::Windows::Forms::Label^ Title_Gestion_Commandes;
	private: System::Windows::Forms::Panel^ panel_Gestion_Stock;
	private: System::Windows::Forms::Label^ title_Gestion_Stock;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Stat;
	private: System::Windows::Forms::Label^ Title_Gestion_Stat;
	private: System::Windows::Forms::DateTimePicker^ select_date_embauche;
	private: System::Windows::Forms::Label^ label_date_embauche;
	private: System::Windows::Forms::Label^ label_pernom;
	private: System::Windows::Forms::TextBox^ text_pernom;
	private: System::Windows::Forms::Label^ label_nom;
	private: System::Windows::Forms::TextBox^ text_nom;
	private: System::Windows::Forms::Label^ Label_Id_perso;
	private: System::Windows::Forms::TextBox^ text_personnel;
	private: System::Windows::Forms::ComboBox^ choice_superieur;
	private: System::Windows::Forms::Label^ label_code_postal;
	private: System::Windows::Forms::TextBox^ textBox_code_postal;


	private: System::Windows::Forms::Label^ label_ville;



	private: System::Windows::Forms::Label^ label_adresse;
	private: System::Windows::Forms::TextBox^ text_adresse;



	private: System::Windows::Forms::Label^ label_Superieur;
	private: System::Windows::Forms::Label^ label_departement;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ button_enregistrer;
	private: Bunifu::Framework::UI::BunifuThinButton2^ Button_Supprimer;

	private: Bunifu::Framework::UI::BunifuThinButton2^ button_modifier;
	private: Bunifu::Framework::UI::BunifuThinButton2^ button_nouveau;



	private: System::Windows::Forms::ComboBox^ choice_departement;
	private: System::Windows::Forms::TextBox^ text_ville;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prenom;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ date_embauche;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Superieur;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ departement;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ code_postal;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Pannel_Titre = (gcnew System::Windows::Forms::Panel());
			this->panel_Gestion_Personnel = (gcnew System::Windows::Forms::Panel());
			this->text_ville = (gcnew System::Windows::Forms::TextBox());
			this->choice_departement = (gcnew System::Windows::Forms::ComboBox());
			this->Button_Supprimer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button_modifier = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button_nouveau = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button_enregistrer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prenom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date_embauche = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Superieur = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->departement = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->code_postal = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->label_departement = (gcnew System::Windows::Forms::Label());
			this->choice_superieur = (gcnew System::Windows::Forms::ComboBox());
			this->label_code_postal = (gcnew System::Windows::Forms::Label());
			this->textBox_code_postal = (gcnew System::Windows::Forms::TextBox());
			this->label_ville = (gcnew System::Windows::Forms::Label());
			this->label_adresse = (gcnew System::Windows::Forms::Label());
			this->text_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label_Superieur = (gcnew System::Windows::Forms::Label());
			this->select_date_embauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_pernom = (gcnew System::Windows::Forms::Label());
			this->text_pernom = (gcnew System::Windows::Forms::TextBox());
			this->label_nom = (gcnew System::Windows::Forms::Label());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->Label_Id_perso = (gcnew System::Windows::Forms::Label());
			this->text_personnel = (gcnew System::Windows::Forms::TextBox());
			this->Title_Gestion_Personel = (gcnew System::Windows::Forms::Label());
			this->Btn_Gestion_Personnel = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_clients = (gcnew System::Windows::Forms::Button());
			this->btn_Gestion_commandes = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stock = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stat = (gcnew System::Windows::Forms::Button());
			this->Btn_Exit_DB = (gcnew System::Windows::Forms::Button());
			this->panel_gestion = (gcnew System::Windows::Forms::Panel());
			this->Panel_Dashboard = (gcnew System::Windows::Forms::Panel());
			this->Title_Dashboard = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Client = (gcnew System::Windows::Forms::Panel());
			this->Title_gestion_clients = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Commandes = (gcnew System::Windows::Forms::Panel());
			this->Title_Gestion_Commandes = (gcnew System::Windows::Forms::Label());
			this->panel_Gestion_Stock = (gcnew System::Windows::Forms::Panel());
			this->title_Gestion_Stock = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Stat = (gcnew System::Windows::Forms::Panel());
			this->Title_Gestion_Stat = (gcnew System::Windows::Forms::Label());
			this->panel_Gestion_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_gestion->SuspendLayout();
			this->Panel_Dashboard->SuspendLayout();
			this->Panel_Gestion_Client->SuspendLayout();
			this->Panel_Gestion_Commandes->SuspendLayout();
			this->panel_Gestion_Stock->SuspendLayout();
			this->Panel_Gestion_Stat->SuspendLayout();
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
			this->Pannel_Titre->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Pannel_Titre->Name = L"Pannel_Titre";
			this->Pannel_Titre->Size = System::Drawing::Size(488, 223);
			this->Pannel_Titre->TabIndex = 0;
			// 
			// panel_Gestion_Personnel
			// 
			this->panel_Gestion_Personnel->Controls->Add(this->text_ville);
			this->panel_Gestion_Personnel->Controls->Add(this->choice_departement);
			this->panel_Gestion_Personnel->Controls->Add(this->Button_Supprimer);
			this->panel_Gestion_Personnel->Controls->Add(this->button_modifier);
			this->panel_Gestion_Personnel->Controls->Add(this->button_nouveau);
			this->panel_Gestion_Personnel->Controls->Add(this->button_enregistrer);
			this->panel_Gestion_Personnel->Controls->Add(this->dataGridView1);
			this->panel_Gestion_Personnel->Controls->Add(this->label_departement);
			this->panel_Gestion_Personnel->Controls->Add(this->choice_superieur);
			this->panel_Gestion_Personnel->Controls->Add(this->label_code_postal);
			this->panel_Gestion_Personnel->Controls->Add(this->textBox_code_postal);
			this->panel_Gestion_Personnel->Controls->Add(this->label_ville);
			this->panel_Gestion_Personnel->Controls->Add(this->label_adresse);
			this->panel_Gestion_Personnel->Controls->Add(this->text_adresse);
			this->panel_Gestion_Personnel->Controls->Add(this->label_Superieur);
			this->panel_Gestion_Personnel->Controls->Add(this->select_date_embauche);
			this->panel_Gestion_Personnel->Controls->Add(this->label_date_embauche);
			this->panel_Gestion_Personnel->Controls->Add(this->label_pernom);
			this->panel_Gestion_Personnel->Controls->Add(this->text_pernom);
			this->panel_Gestion_Personnel->Controls->Add(this->label_nom);
			this->panel_Gestion_Personnel->Controls->Add(this->text_nom);
			this->panel_Gestion_Personnel->Controls->Add(this->Label_Id_perso);
			this->panel_Gestion_Personnel->Controls->Add(this->text_personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->Title_Gestion_Personel);
			this->panel_Gestion_Personnel->Location = System::Drawing::Point(494, 6);
			this->panel_Gestion_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel_Gestion_Personnel->Name = L"panel_Gestion_Personnel";
			this->panel_Gestion_Personnel->Size = System::Drawing::Size(2392, 1512);
			this->panel_Gestion_Personnel->TabIndex = 2;
			this->panel_Gestion_Personnel->Visible = false;
			this->panel_Gestion_Personnel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel_Gestion_Personnel_Paint);
			// 
			// text_ville
			// 
			this->text_ville->Location = System::Drawing::Point(594, 421);
			this->text_ville->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->text_ville->Name = L"text_ville";
			this->text_ville->Size = System::Drawing::Size(238, 31);
			this->text_ville->TabIndex = 27;
			// 
			// choice_departement
			// 
			this->choice_departement->FormattingEnabled = true;
			this->choice_departement->Items->AddRange(gcnew cli::array< System::Object^  >(96) {
				L"Ain", L"Aisne", L"Allier", L"Alpes de Haute-Provence",
					L"Hautes-Alpes", L"Alpes-Maritimes", L"Ardêche", L"Ardennes", L"Ariège", L"Aube", L"Aude", L"Aveyron", L"Bouches-du-Rhône", L"Calvados",
					L"Cantal", L"Charente", L"Charente-Maritime", L"Cher", L"Corrèze", L"Corse-du-Sud", L"Haute-Corse", L"Côte-d\'Or", L"Côtes d\'Armor",
					L"Creuse", L"Dordogne", L"Doubs", L"Drôme", L"Eure", L"Eure-et-Loir", L"Finistère", L"Gard", L"Haute-Garonne", L"Gers", L"Gironde",
					L"Hérault", L"Île-et-Vilaine", L"Indre", L"Indre-et-Loire", L"Isère", L"Jura", L"Landes", L"Loir-et-Cher", L"Loire", L"Haute-Loire",
					L"Loire-Atlantique", L"Loiret", L"Lot", L"Lot-et-Garonne", L"Lozère", L"Maine-et-Loire", L"Manche", L"Marne", L"Haute-Marne",
					L"Mayenne", L"Meurthe-et-Moselle", L"Meuse", L"Morbihan", L"Moselle", L"Nièvre", L"Nord", L"Oise", L"Orne", L"Pas-de-Calais",
					L"Puy-de-Dôme", L"Pyrénées-Atlantiques", L"Hautes-Pyrénées", L"Pyrénées-Orientales", L"Bas-Rhin", L"Haut-Rhin", L"Rhône", L"Haute-Saône",
					L"Saône-et-Loire", L"Sarthe", L"Savoie", L"Haute-Savoie", L"Paris", L"Seine-Maritime", L"Seine-et-Marne", L"Yvelines", L"Deux-Sèvres",
					L"Somme", L"Tarn", L"Tarn-et-Garonne", L"Var", L"Vaucluse", L"Vendée", L"Vienne", L"Haute-Vienne", L"Vosges", L"Yonne", L"Territoire-de-Belfort",
					L"Essonne", L"Hauts-de-Seine", L"Seine-Saint-Denis", L"Val-de-Marne", L"Val-d\'Oise"
			});
			this->choice_departement->Location = System::Drawing::Point(884, 421);
			this->choice_departement->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->choice_departement->Name = L"choice_departement";
			this->choice_departement->Size = System::Drawing::Size(238, 33);
			this->choice_departement->TabIndex = 26;
			// 
			// Button_Supprimer
			// 
			this->Button_Supprimer->ActiveBorderThickness = 1;
			this->Button_Supprimer->ActiveCornerRadius = 20;
			this->Button_Supprimer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->Button_Supprimer->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->Button_Supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->Button_Supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Button_Supprimer.BackgroundImage")));
			this->Button_Supprimer->ButtonText = L"Supprimer";
			this->Button_Supprimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_Supprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Button_Supprimer->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->IdleBorderThickness = 1;
			this->Button_Supprimer->IdleCornerRadius = 20;
			this->Button_Supprimer->IdleFillColor = System::Drawing::Color::Transparent;
			this->Button_Supprimer->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->Button_Supprimer->Location = System::Drawing::Point(1018, 635);
			this->Button_Supprimer->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->Button_Supprimer->Name = L"Button_Supprimer";
			this->Button_Supprimer->Size = System::Drawing::Size(266, 156);
			this->Button_Supprimer->TabIndex = 25;
			this->Button_Supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_modifier
			// 
			this->button_modifier->ActiveBorderThickness = 1;
			this->button_modifier->ActiveCornerRadius = 20;
			this->button_modifier->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button_modifier->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button_modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button_modifier->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_modifier.BackgroundImage")));
			this->button_modifier->ButtonText = L"Modifier";
			this->button_modifier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_modifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_modifier->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->IdleBorderThickness = 1;
			this->button_modifier->IdleCornerRadius = 20;
			this->button_modifier->IdleFillColor = System::Drawing::Color::Transparent;
			this->button_modifier->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->button_modifier->Location = System::Drawing::Point(700, 635);
			this->button_modifier->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->button_modifier->Name = L"button_modifier";
			this->button_modifier->Size = System::Drawing::Size(266, 156);
			this->button_modifier->TabIndex = 24;
			this->button_modifier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_nouveau
			// 
			this->button_nouveau->ActiveBorderThickness = 1;
			this->button_nouveau->ActiveCornerRadius = 20;
			this->button_nouveau->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button_nouveau->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button_nouveau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button_nouveau->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_nouveau.BackgroundImage")));
			this->button_nouveau->ButtonText = L"Nouveau";
			this->button_nouveau->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_nouveau->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_nouveau->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->IdleBorderThickness = 1;
			this->button_nouveau->IdleCornerRadius = 20;
			this->button_nouveau->IdleFillColor = System::Drawing::Color::Transparent;
			this->button_nouveau->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->button_nouveau->Location = System::Drawing::Point(372, 635);
			this->button_nouveau->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->button_nouveau->Name = L"button_nouveau";
			this->button_nouveau->Size = System::Drawing::Size(266, 156);
			this->button_nouveau->TabIndex = 23;
			this->button_nouveau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_nouveau->Click += gcnew System::EventHandler(this, &Dashboard::btn_nouveau_Click);
			// 
			// button_enregistrer
			// 
			this->button_enregistrer->ActiveBorderThickness = 1;
			this->button_enregistrer->ActiveCornerRadius = 20;
			this->button_enregistrer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button_enregistrer->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button_enregistrer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button_enregistrer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_enregistrer.BackgroundImage")));
			this->button_enregistrer->ButtonText = L"Enregistrer";
			this->button_enregistrer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_enregistrer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_enregistrer->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->IdleBorderThickness = 1;
			this->button_enregistrer->IdleCornerRadius = 20;
			this->button_enregistrer->IdleFillColor = System::Drawing::Color::Transparent;
			this->button_enregistrer->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->button_enregistrer->Location = System::Drawing::Point(42, 635);
			this->button_enregistrer->Margin = System::Windows::Forms::Padding(12, 12, 12, 12);
			this->button_enregistrer->Name = L"button_enregistrer";
			this->button_enregistrer->Size = System::Drawing::Size(266, 156);
			this->button_enregistrer->TabIndex = 22;
			this->button_enregistrer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_enregistrer->Click += gcnew System::EventHandler(this, &Dashboard::button_enregistrer_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Id_Personnel,
					this->nom, this->prenom, this->date_embauche, this->Superieur, this->adresse, this->ville, this->departement, this->code_postal
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 829);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1448, 208);
			this->dataGridView1->TabIndex = 21;
			// 
			// Id_Personnel
			// 
			this->Id_Personnel->HeaderText = L"Id_Personnel";
			this->Id_Personnel->MinimumWidth = 10;
			this->Id_Personnel->Name = L"Id_Personnel";
			this->Id_Personnel->Width = 200;
			// 
			// nom
			// 
			this->nom->HeaderText = L"nom";
			this->nom->MinimumWidth = 10;
			this->nom->Name = L"nom";
			this->nom->Width = 200;
			// 
			// prenom
			// 
			this->prenom->HeaderText = L"prenom";
			this->prenom->MinimumWidth = 10;
			this->prenom->Name = L"prenom";
			this->prenom->Width = 200;
			// 
			// date_embauche
			// 
			this->date_embauche->HeaderText = L"date_embauche";
			this->date_embauche->MinimumWidth = 10;
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Width = 200;
			// 
			// Superieur
			// 
			this->Superieur->HeaderText = L"Superieur";
			this->Superieur->MinimumWidth = 10;
			this->Superieur->Name = L"Superieur";
			this->Superieur->Width = 200;
			// 
			// adresse
			// 
			this->adresse->HeaderText = L"adresse";
			this->adresse->MinimumWidth = 10;
			this->adresse->Name = L"adresse";
			this->adresse->Width = 200;
			// 
			// ville
			// 
			this->ville->HeaderText = L"ville";
			this->ville->MinimumWidth = 10;
			this->ville->Name = L"ville";
			this->ville->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ville->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->ville->Width = 200;
			// 
			// departement
			// 
			this->departement->HeaderText = L"departement";
			this->departement->MinimumWidth = 10;
			this->departement->Name = L"departement";
			this->departement->Width = 200;
			// 
			// code_postal
			// 
			this->code_postal->HeaderText = L"code_postal";
			this->code_postal->MinimumWidth = 10;
			this->code_postal->Name = L"code_postal";
			this->code_postal->Width = 200;
			// 
			// label_departement
			// 
			this->label_departement->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_departement->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_departement->Location = System::Drawing::Point(876, 363);
			this->label_departement->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_departement->Name = L"label_departement";
			this->label_departement->Size = System::Drawing::Size(200, 52);
			this->label_departement->TabIndex = 20;
			this->label_departement->Text = L"département";
			this->label_departement->Click += gcnew System::EventHandler(this, &Dashboard::label_departement_Click);
			// 
			// choice_superieur
			// 
			this->choice_superieur->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"oui", L"non" });
			this->choice_superieur->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->choice_superieur->FormattingEnabled = true;
			this->choice_superieur->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"oui", L"non" });
			this->choice_superieur->Location = System::Drawing::Point(66, 560);
			this->choice_superieur->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->choice_superieur->Name = L"choice_superieur";
			this->choice_superieur->Size = System::Drawing::Size(238, 33);
			this->choice_superieur->TabIndex = 18;
			this->choice_superieur->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::choice_superieur_SelectedIndexChanged);
			// 
			// label_code_postal
			// 
			this->label_code_postal->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_code_postal->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_code_postal->Location = System::Drawing::Point(600, 502);
			this->label_code_postal->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_code_postal->Name = L"label_code_postal";
			this->label_code_postal->Size = System::Drawing::Size(200, 52);
			this->label_code_postal->TabIndex = 17;
			this->label_code_postal->Text = L"code postal";
			// 
			// textBox_code_postal
			// 
			this->textBox_code_postal->Location = System::Drawing::Point(594, 562);
			this->textBox_code_postal->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox_code_postal->Name = L"textBox_code_postal";
			this->textBox_code_postal->Size = System::Drawing::Size(528, 31);
			this->textBox_code_postal->TabIndex = 16;
			this->textBox_code_postal->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox_code_postal_TextChanged);
			// 
			// label_ville
			// 
			this->label_ville->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_ville->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_ville->Location = System::Drawing::Point(586, 363);
			this->label_ville->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_ville->Name = L"label_ville";
			this->label_ville->Size = System::Drawing::Size(200, 52);
			this->label_ville->TabIndex = 15;
			this->label_ville->Text = L"ville";
			// 
			// label_adresse
			// 
			this->label_adresse->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adresse->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_adresse->Location = System::Drawing::Point(586, 252);
			this->label_adresse->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_adresse->Name = L"label_adresse";
			this->label_adresse->Size = System::Drawing::Size(200, 52);
			this->label_adresse->TabIndex = 13;
			this->label_adresse->Text = L"adresse";
			this->label_adresse->Click += gcnew System::EventHandler(this, &Dashboard::label3_Click);
			// 
			// text_adresse
			// 
			this->text_adresse->Location = System::Drawing::Point(594, 310);
			this->text_adresse->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->text_adresse->Name = L"text_adresse";
			this->text_adresse->Size = System::Drawing::Size(528, 31);
			this->text_adresse->TabIndex = 12;
			this->text_adresse->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_adresse_TextChanged);
			// 
			// label_Superieur
			// 
			this->label_Superieur->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Superieur->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Superieur->Location = System::Drawing::Point(58, 502);
			this->label_Superieur->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_Superieur->Name = L"label_Superieur";
			this->label_Superieur->Size = System::Drawing::Size(200, 52);
			this->label_Superieur->TabIndex = 11;
			this->label_Superieur->Text = L"Superieur";
			this->label_Superieur->Click += gcnew System::EventHandler(this, &Dashboard::label_Superieur_Click);
			// 
			// select_date_embauche
			// 
			this->select_date_embauche->Location = System::Drawing::Point(594, 185);
			this->select_date_embauche->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->select_date_embauche->Name = L"select_date_embauche";
			this->select_date_embauche->Size = System::Drawing::Size(336, 31);
			this->select_date_embauche->TabIndex = 9;
			this->select_date_embauche->ValueChanged += gcnew System::EventHandler(this, &Dashboard::select_date_embauche_ValueChanged);
			// 
			// label_date_embauche
			// 
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_date_embauche->Location = System::Drawing::Point(586, 123);
			this->label_date_embauche->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Size = System::Drawing::Size(276, 52);
			this->label_date_embauche->TabIndex = 8;
			this->label_date_embauche->Text = L"date d\'embauche";
			this->label_date_embauche->Click += gcnew System::EventHandler(this, &Dashboard::label_date_embauche_Click);
			// 
			// label_pernom
			// 
			this->label_pernom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pernom->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_pernom->Location = System::Drawing::Point(58, 375);
			this->label_pernom->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_pernom->Name = L"label_pernom";
			this->label_pernom->Size = System::Drawing::Size(200, 52);
			this->label_pernom->TabIndex = 6;
			this->label_pernom->Text = L"prenom";
			this->label_pernom->Click += gcnew System::EventHandler(this, &Dashboard::label_pernom_Click);
			// 
			// text_pernom
			// 
			this->text_pernom->Location = System::Drawing::Point(66, 433);
			this->text_pernom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->text_pernom->Name = L"text_pernom";
			this->text_pernom->Size = System::Drawing::Size(264, 31);
			this->text_pernom->TabIndex = 5;
			this->text_pernom->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_pernom_TextChanged);
			// 
			// label_nom
			// 
			this->label_nom->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nom->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_nom->Location = System::Drawing::Point(58, 252);
			this->label_nom->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label_nom->Name = L"label_nom";
			this->label_nom->Size = System::Drawing::Size(200, 52);
			this->label_nom->TabIndex = 4;
			this->label_nom->Text = L"nom";
			this->label_nom->Click += gcnew System::EventHandler(this, &Dashboard::label_nom_Click);
			// 
			// text_nom
			// 
			this->text_nom->Location = System::Drawing::Point(66, 310);
			this->text_nom->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(264, 31);
			this->text_nom->TabIndex = 3;
			this->text_nom->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_nom_TextChanged);
			// 
			// Label_Id_perso
			// 
			this->Label_Id_perso->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Id_perso->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Label_Id_perso->Location = System::Drawing::Point(58, 127);
			this->Label_Id_perso->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Label_Id_perso->Name = L"Label_Id_perso";
			this->Label_Id_perso->Size = System::Drawing::Size(200, 52);
			this->Label_Id_perso->TabIndex = 2;
			this->Label_Id_perso->Text = L"Id Personnel";
			this->Label_Id_perso->Click += gcnew System::EventHandler(this, &Dashboard::Label_Id_perso_Click);
			// 
			// text_personnel
			// 
			this->text_personnel->Location = System::Drawing::Point(66, 185);
			this->text_personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->text_personnel->Name = L"text_personnel";
			this->text_personnel->Size = System::Drawing::Size(264, 31);
			this->text_personnel->TabIndex = 1;
			this->text_personnel->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_personnel_TextChanged);
			// 
			// Title_Gestion_Personel
			// 
			this->Title_Gestion_Personel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Personel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Personel->Location = System::Drawing::Point(250, 23);
			this->Title_Gestion_Personel->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Title_Gestion_Personel->Name = L"Title_Gestion_Personel";
			this->Title_Gestion_Personel->Size = System::Drawing::Size(716, 121);
			this->Title_Gestion_Personel->TabIndex = 0;
			this->Title_Gestion_Personel->Text = L"Gestion Personnel";
			this->Title_Gestion_Personel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->Btn_Gestion_Personnel->Location = System::Drawing::Point(0, 223);
			this->Btn_Gestion_Personnel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Gestion_Personnel->Name = L"Btn_Gestion_Personnel";
			this->Btn_Gestion_Personnel->Size = System::Drawing::Size(488, 131);
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
			this->Btn_Gestion_clients->Location = System::Drawing::Point(0, 354);
			this->Btn_Gestion_clients->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Gestion_clients->Name = L"Btn_Gestion_clients";
			this->Btn_Gestion_clients->Size = System::Drawing::Size(488, 131);
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
			this->btn_Gestion_commandes->Location = System::Drawing::Point(0, 485);
			this->btn_Gestion_commandes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btn_Gestion_commandes->Name = L"btn_Gestion_commandes";
			this->btn_Gestion_commandes->Size = System::Drawing::Size(488, 131);
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
			this->Btn_Gestion_stock->Location = System::Drawing::Point(0, 616);
			this->Btn_Gestion_stock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Gestion_stock->Name = L"Btn_Gestion_stock";
			this->Btn_Gestion_stock->Size = System::Drawing::Size(488, 131);
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
			this->Btn_Gestion_stat->Location = System::Drawing::Point(0, 747);
			this->Btn_Gestion_stat->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Gestion_stat->Name = L"Btn_Gestion_stat";
			this->Btn_Gestion_stat->Size = System::Drawing::Size(488, 131);
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
			this->Btn_Exit_DB->Location = System::Drawing::Point(0, 878);
			this->Btn_Exit_DB->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Btn_Exit_DB->Name = L"Btn_Exit_DB";
			this->Btn_Exit_DB->Size = System::Drawing::Size(488, 131);
			this->Btn_Exit_DB->TabIndex = 6;
			this->Btn_Exit_DB->Text = L"Exit";
			this->Btn_Exit_DB->UseVisualStyleBackColor = true;
			this->Btn_Exit_DB->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_Exit_DB);
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
			this->panel_gestion->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel_gestion->Name = L"panel_gestion";
			this->panel_gestion->Size = System::Drawing::Size(488, 1065);
			this->panel_gestion->TabIndex = 0;
			// 
			// Panel_Dashboard
			// 
			this->Panel_Dashboard->Controls->Add(this->Title_Dashboard);
			this->Panel_Dashboard->Location = System::Drawing::Point(560, 23);
			this->Panel_Dashboard->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Dashboard->Name = L"Panel_Dashboard";
			this->Panel_Dashboard->Size = System::Drawing::Size(2346, 1548);
			this->Panel_Dashboard->TabIndex = 1;
			this->Panel_Dashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Panel_Dashboard_Paint);
			// 
			// Title_Dashboard
			// 
			this->Title_Dashboard->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Dashboard->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Dashboard->Location = System::Drawing::Point(462, 35);
			this->Title_Dashboard->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Title_Dashboard->Name = L"Title_Dashboard";
			this->Title_Dashboard->Size = System::Drawing::Size(756, 213);
			this->Title_Dashboard->TabIndex = 0;
			this->Title_Dashboard->Text = L"Dashboard";
			this->Title_Dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panel_Gestion_Client
			// 
			this->Panel_Gestion_Client->Controls->Add(this->Title_gestion_clients);
			this->Panel_Gestion_Client->Location = System::Drawing::Point(518, 29);
			this->Panel_Gestion_Client->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Gestion_Client->Name = L"Panel_Gestion_Client";
			this->Panel_Gestion_Client->Size = System::Drawing::Size(2384, 1537);
			this->Panel_Gestion_Client->TabIndex = 3;
			this->Panel_Gestion_Client->Visible = false;
			// 
			// Title_gestion_clients
			// 
			this->Title_gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_gestion_clients->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_gestion_clients->Location = System::Drawing::Point(566, 58);
			this->Title_gestion_clients->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Title_gestion_clients->Name = L"Title_gestion_clients";
			this->Title_gestion_clients->Size = System::Drawing::Size(652, 165);
			this->Title_gestion_clients->TabIndex = 0;
			this->Title_gestion_clients->Text = L"Gestion Clients";
			// 
			// Panel_Gestion_Commandes
			// 
			this->Panel_Gestion_Commandes->Controls->Add(this->Title_Gestion_Commandes);
			this->Panel_Gestion_Commandes->Location = System::Drawing::Point(500, 73);
			this->Panel_Gestion_Commandes->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Gestion_Commandes->Name = L"Panel_Gestion_Commandes";
			this->Panel_Gestion_Commandes->Size = System::Drawing::Size(2390, 1481);
			this->Panel_Gestion_Commandes->TabIndex = 4;
			this->Panel_Gestion_Commandes->Visible = false;
			// 
			// Title_Gestion_Commandes
			// 
			this->Title_Gestion_Commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Commandes->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Commandes->Location = System::Drawing::Point(584, 73);
			this->Title_Gestion_Commandes->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Title_Gestion_Commandes->Name = L"Title_Gestion_Commandes";
			this->Title_Gestion_Commandes->Size = System::Drawing::Size(832, 165);
			this->Title_Gestion_Commandes->TabIndex = 0;
			this->Title_Gestion_Commandes->Text = L"Gestion Commandes";
			this->Title_Gestion_Commandes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_Gestion_Stock
			// 
			this->panel_Gestion_Stock->Controls->Add(this->title_Gestion_Stock);
			this->panel_Gestion_Stock->Location = System::Drawing::Point(524, 0);
			this->panel_Gestion_Stock->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel_Gestion_Stock->Name = L"panel_Gestion_Stock";
			this->panel_Gestion_Stock->Size = System::Drawing::Size(2372, 1560);
			this->panel_Gestion_Stock->TabIndex = 0;
			this->panel_Gestion_Stock->Visible = false;
			// 
			// title_Gestion_Stock
			// 
			this->title_Gestion_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_Gestion_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->title_Gestion_Stock->Location = System::Drawing::Point(578, 50);
			this->title_Gestion_Stock->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->title_Gestion_Stock->Name = L"title_Gestion_Stock";
			this->title_Gestion_Stock->Size = System::Drawing::Size(634, 150);
			this->title_Gestion_Stock->TabIndex = 0;
			this->title_Gestion_Stock->Text = L"Gestion Stock";
			// 
			// Panel_Gestion_Stat
			// 
			this->Panel_Gestion_Stat->AccessibleRole = System::Windows::Forms::AccessibleRole::Pane;
			this->Panel_Gestion_Stat->Controls->Add(this->Title_Gestion_Stat);
			this->Panel_Gestion_Stat->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Panel_Gestion_Stat->Location = System::Drawing::Point(494, 23);
			this->Panel_Gestion_Stat->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Gestion_Stat->Name = L"Panel_Gestion_Stat";
			this->Panel_Gestion_Stat->Size = System::Drawing::Size(2392, 1531);
			this->Panel_Gestion_Stat->TabIndex = 5;
			this->Panel_Gestion_Stat->Visible = false;
			// 
			// Title_Gestion_Stat
			// 
			this->Title_Gestion_Stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Stat->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Stat->Location = System::Drawing::Point(410, 50);
			this->Title_Gestion_Stat->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Title_Gestion_Stat->Name = L"Title_Gestion_Stat";
			this->Title_Gestion_Stat->Size = System::Drawing::Size(748, 150);
			this->Title_Gestion_Stat->TabIndex = 0;
			this->Title_Gestion_Stat->Text = L"Gestion Statistiques";
			this->Title_Gestion_Stat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1936, 1065);
			this->Controls->Add(this->panel_Gestion_Personnel);
			this->Controls->Add(this->Panel_Gestion_Stat);
			this->Controls->Add(this->panel_Gestion_Stock);
			this->Controls->Add(this->Panel_Gestion_Commandes);
			this->Controls->Add(this->Panel_Gestion_Client);
			this->Controls->Add(this->Panel_Dashboard);
			this->Controls->Add(this->panel_gestion);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel_Gestion_Personnel->ResumeLayout(false);
			this->panel_Gestion_Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_gestion->ResumeLayout(false);
			this->Panel_Dashboard->ResumeLayout(false);
			this->Panel_Gestion_Client->ResumeLayout(false);
			this->Panel_Gestion_Commandes->ResumeLayout(false);
			this->panel_Gestion_Stock->ResumeLayout(false);
			this->Panel_Gestion_Stat->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
			private: System::Void Click_Btn_gestion_Personnel(System::Object^ sender, System::EventArgs^ e) {	
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = true;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Clients(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = true;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Commandes(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = true;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Stock(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = true;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Stat(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = true;
			}
			private: System::Void Click_Btn_Exit_DB(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
			}
			private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
				this->text_personnel->Clear();
				this->text_nom->Clear();
				choice_superieur->TabIndex =0;
				this->text_pernom->Clear();
				this->text_adresse->Clear();
				this->text_ville->Clear();
				choice_departement->TabIndex = 0;
				this->textBox_code_postal->Clear();
			}
private: System::Void Panel_Dashboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel_Gestion_Personnel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_ville_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_Id_perso_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_personnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_nom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_pernom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_pernom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_Superieur_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void choice_superieur_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_departement_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_departement_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_code_postal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_adresse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void select_date_embauche_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_date_embauche_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
