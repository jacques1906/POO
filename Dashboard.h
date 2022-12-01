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
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ text1_message;
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

	private: System::Windows::Forms::Button^ button1_supprimer;

	private: System::Windows::Forms::Label^ label_ville;

	private: System::Windows::Forms::Label^ labelpayslivraison;


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

	private: System::Windows::Forms::Label^ labelvillelivraison;

	private: System::Windows::Forms::Label^ labelcodepostalelivraison;

	private: System::Windows::Forms::Label^ labeladressepostlivraison;

	private: System::Windows::Forms::Label^ labelidadresselivraison;
	private: System::Windows::Forms::TextBox^ text_adressepostalelivraison;
	private: System::Windows::Forms::TextBox^ text_payslivraison;



	private: System::Windows::Forms::TextBox^ text_villelivraison;

	private: System::Windows::Forms::TextBox^ textBox9Atext_codepostalelivraison;

	private: System::Windows::Forms::TextBox^ text_idadresselivraison;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ labeldatenaissance;

	private: System::Windows::Forms::Label^ labelprenomclient;

	private: System::Windows::Forms::Label^ labelnomclient;

	private: System::Windows::Forms::Label^ labelidclient;
private: System::Windows::Forms::TextBox^ text_nomclient;


	private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ text_datenaissance;

private: System::Windows::Forms::TextBox^ text_prenomclient;

private: System::Windows::Forms::TextBox^ text_idclient;
private: System::Windows::Forms::Button^ button1_modiffier;


private: System::Windows::Forms::Button^ button1_ajouter;

private: System::Windows::Forms::Button^ button1_afficher;
private: System::Windows::Forms::DataGridView^ dataGridView_gestclient;


private: System::Windows::Forms::Label^ labelchampclient;
private: System::Windows::Forms::Label^ labelpaysfacturation;

private: System::Windows::Forms::Label^ labelvillefacturation;

private: System::Windows::Forms::Label^ labelcodepostalefacturation;

private: System::Windows::Forms::Label^ labeladressepostalefacturation;

private: System::Windows::Forms::Label^ labelidadressefacturation;
private: System::Windows::Forms::TextBox^ text_adressepostalefacturation;
private: System::Windows::Forms::TextBox^ text_paysfacturation;



private: System::Windows::Forms::TextBox^ text_villefacturation;

private: System::Windows::Forms::TextBox^ text_codepostalefacturation;

private: System::Windows::Forms::TextBox^ text_idadressefacturation;































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
			this->labelchampclient = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->text1_message = (gcnew System::Windows::Forms::TextBox());
			this->button1_supprimer = (gcnew System::Windows::Forms::Button());
			this->labelpayslivraison = (gcnew System::Windows::Forms::Label());
			this->labelvillelivraison = (gcnew System::Windows::Forms::Label());
			this->labelcodepostalelivraison = (gcnew System::Windows::Forms::Label());
			this->labeladressepostlivraison = (gcnew System::Windows::Forms::Label());
			this->labelidadresselivraison = (gcnew System::Windows::Forms::Label());
			this->text_adressepostalelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_payslivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_villelivraison = (gcnew System::Windows::Forms::TextBox());
			this->textBox9Atext_codepostalelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_idadresselivraison = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labeldatenaissance = (gcnew System::Windows::Forms::Label());
			this->labelprenomclient = (gcnew System::Windows::Forms::Label());
			this->labelnomclient = (gcnew System::Windows::Forms::Label());
			this->labelidclient = (gcnew System::Windows::Forms::Label());
			this->text_nomclient = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->text_datenaissance = (gcnew System::Windows::Forms::TextBox());
			this->text_prenomclient = (gcnew System::Windows::Forms::TextBox());
			this->text_idclient = (gcnew System::Windows::Forms::TextBox());
			this->button1_modiffier = (gcnew System::Windows::Forms::Button());
			this->button1_ajouter = (gcnew System::Windows::Forms::Button());
			this->button1_afficher = (gcnew System::Windows::Forms::Button());
			this->dataGridView_gestclient = (gcnew System::Windows::Forms::DataGridView());
			this->Title_gestion_clients = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Commandes = (gcnew System::Windows::Forms::Panel());
			this->Title_Gestion_Commandes = (gcnew System::Windows::Forms::Label());
			this->panel_Gestion_Stock = (gcnew System::Windows::Forms::Panel());
			this->title_Gestion_Stock = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Stat = (gcnew System::Windows::Forms::Panel());
			this->Title_Gestion_Stat = (gcnew System::Windows::Forms::Label());
			this->labelpaysfacturation = (gcnew System::Windows::Forms::Label());
			this->labelvillefacturation = (gcnew System::Windows::Forms::Label());
			this->labelcodepostalefacturation = (gcnew System::Windows::Forms::Label());
			this->labeladressepostalefacturation = (gcnew System::Windows::Forms::Label());
			this->labelidadressefacturation = (gcnew System::Windows::Forms::Label());
			this->text_adressepostalefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_paysfacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_villefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostalefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_idadressefacturation = (gcnew System::Windows::Forms::TextBox());
			this->panel_Gestion_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_gestion->SuspendLayout();
			this->Panel_Dashboard->SuspendLayout();
			this->Panel_Gestion_Client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestclient))->BeginInit();
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
			this->Pannel_Titre->Margin = System::Windows::Forms::Padding(2);
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
			this->panel_Gestion_Personnel->Location = System::Drawing::Point(370, 866);
			this->panel_Gestion_Personnel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_Gestion_Personnel->Location = System::Drawing::Point(494, 6);
			this->panel_Gestion_Personnel->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel_Gestion_Personnel->Name = L"panel_Gestion_Personnel";
			this->panel_Gestion_Personnel->Size = System::Drawing::Size(336, 371);
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
			this->Title_Gestion_Personel->Location = System::Drawing::Point(733, 67);
			this->Title_Gestion_Personel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
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
			this->Btn_Gestion_Personnel->Location = System::Drawing::Point(0, 178);
			this->Btn_Gestion_Personnel->Margin = System::Windows::Forms::Padding(2);
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
			this->Btn_Gestion_clients->Location = System::Drawing::Point(0, 283);
			this->Btn_Gestion_clients->Margin = System::Windows::Forms::Padding(2);
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
			this->btn_Gestion_commandes->Location = System::Drawing::Point(0, 388);
			this->btn_Gestion_commandes->Margin = System::Windows::Forms::Padding(2);
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
			this->Btn_Gestion_stock->Location = System::Drawing::Point(0, 493);
			this->Btn_Gestion_stock->Margin = System::Windows::Forms::Padding(2);
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
			this->Btn_Gestion_stat->Location = System::Drawing::Point(0, 598);
			this->Btn_Gestion_stat->Margin = System::Windows::Forms::Padding(2);
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
			this->Btn_Exit_DB->Location = System::Drawing::Point(0, 703);
			this->Btn_Exit_DB->Margin = System::Windows::Forms::Padding(2);
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
			this->Panel_Dashboard->Location = System::Drawing::Point(379, 14);
			this->Panel_Dashboard->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Dashboard->Location = System::Drawing::Point(560, 23);
			this->Panel_Dashboard->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Dashboard->Name = L"Panel_Dashboard";
			this->Panel_Dashboard->Size = System::Drawing::Size(1801, 1243);
			this->Panel_Dashboard->Size = System::Drawing::Size(2346, 1548);
			this->Panel_Dashboard->TabIndex = 1;
			this->Panel_Dashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Panel_Dashboard_Paint);
			// 
			// Title_Dashboard
			// 
			this->Title_Dashboard->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Dashboard->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Dashboard->Location = System::Drawing::Point(695, 25);
			this->Title_Dashboard->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
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
			this->Panel_Gestion_Client->Controls->Add(this->labelpaysfacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelvillefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelcodepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labeladressepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelidadressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_adressepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_paysfacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_villefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_codepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_idadressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelchampclient);
			this->Panel_Gestion_Client->Controls->Add(this->label18);
			this->Panel_Gestion_Client->Controls->Add(this->label17);
			this->Panel_Gestion_Client->Controls->Add(this->text1_message);
			this->Panel_Gestion_Client->Controls->Add(this->button1_supprimer);
			this->Panel_Gestion_Client->Controls->Add(this->labelpayslivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelvillelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelcodepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labeladressepostlivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelidadresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_adressepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_payslivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_villelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->textBox9Atext_codepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_idadresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->label3);
			this->Panel_Gestion_Client->Controls->Add(this->labeldatenaissance);
			this->Panel_Gestion_Client->Controls->Add(this->labelprenomclient);
			this->Panel_Gestion_Client->Controls->Add(this->labelnomclient);
			this->Panel_Gestion_Client->Controls->Add(this->labelidclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_nomclient);
			this->Panel_Gestion_Client->Controls->Add(this->textBox4);
			this->Panel_Gestion_Client->Controls->Add(this->text_datenaissance);
			this->Panel_Gestion_Client->Controls->Add(this->text_prenomclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_idclient);
			this->Panel_Gestion_Client->Controls->Add(this->button1_modiffier);
			this->Panel_Gestion_Client->Controls->Add(this->button1_ajouter);
			this->Panel_Gestion_Client->Controls->Add(this->button1_afficher);
			this->Panel_Gestion_Client->Controls->Add(this->dataGridView_gestclient);
			this->Panel_Gestion_Client->Controls->Add(this->Title_gestion_clients);
			this->Panel_Gestion_Client->Location = System::Drawing::Point(388, 19);
			this->Panel_Gestion_Client->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Gestion_Client->Location = System::Drawing::Point(518, 29);
			this->Panel_Gestion_Client->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Gestion_Client->Name = L"Panel_Gestion_Client";
			this->Panel_Gestion_Client->Size = System::Drawing::Size(1788, 1233);
			this->Panel_Gestion_Client->Size = System::Drawing::Size(2384, 1537);
			this->Panel_Gestion_Client->TabIndex = 3;
			this->Panel_Gestion_Client->Visible = false;
			// 
			// labelchampclient
			// 
			this->labelchampclient->AutoSize = true;
			this->labelchampclient->BackColor = System::Drawing::Color::Transparent;
			this->labelchampclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->labelchampclient->ForeColor = System::Drawing::Color::White;
			this->labelchampclient->Location = System::Drawing::Point(27, 179);
			this->labelchampclient->Name = L"labelchampclient";
			this->labelchampclient->Size = System::Drawing::Size(166, 32);
			this->labelchampclient->TabIndex = 39;
			this->labelchampclient->Text = L"Champ Client";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(1419, 179);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(273, 32);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Adresse de facturation";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(723, 179);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(244, 32);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Adresse de livraison";
			// 
			// text1_message
			// 
			this->text1_message->Location = System::Drawing::Point(8, 768);
			this->text1_message->Multiline = true;
			this->text1_message->Name = L"text1_message";
			this->text1_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text1_message->Size = System::Drawing::Size(1777, 71);
			this->text1_message->TabIndex = 36;
			// 
			// button1_supprimer
			// 
			this->button1_supprimer->Location = System::Drawing::Point(1455, 723);
			this->button1_supprimer->Name = L"button1_supprimer";
			this->button1_supprimer->Size = System::Drawing::Size(298, 39);
			this->button1_supprimer->TabIndex = 35;
			this->button1_supprimer->Text = L"SUPPRIMER";
			this->button1_supprimer->UseVisualStyleBackColor = true;
			// 
			// labelpayslivraison
			// 
			this->labelpayslivraison->AutoSize = true;
			this->labelpayslivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelpayslivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpayslivraison->ForeColor = System::Drawing::Color::White;
			this->labelpayslivraison->Location = System::Drawing::Point(732, 632);
			this->labelpayslivraison->Name = L"labelpayslivraison";
			this->labelpayslivraison->Size = System::Drawing::Size(50, 28);
			this->labelpayslivraison->TabIndex = 24;
			this->labelpayslivraison->Text = L"Pays";
			// 
			// labelvillelivraison
			// 
			this->labelvillelivraison->AutoSize = true;
			this->labelvillelivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelvillelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelvillelivraison->ForeColor = System::Drawing::Color::White;
			this->labelvillelivraison->Location = System::Drawing::Point(732, 539);
			this->labelvillelivraison->Name = L"labelvillelivraison";
			this->labelvillelivraison->Size = System::Drawing::Size(49, 28);
			this->labelvillelivraison->TabIndex = 23;
			this->labelvillelivraison->Text = L"Ville";
			// 
			// labelcodepostalelivraison
			// 
			this->labelcodepostalelivraison->AutoSize = true;
			this->labelcodepostalelivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelcodepostalelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcodepostalelivraison->ForeColor = System::Drawing::Color::White;
			this->labelcodepostalelivraison->Location = System::Drawing::Point(732, 432);
			this->labelcodepostalelivraison->Name = L"labelcodepostalelivraison";
			this->labelcodepostalelivraison->Size = System::Drawing::Size(125, 28);
			this->labelcodepostalelivraison->TabIndex = 22;
			this->labelcodepostalelivraison->Text = L"Code Postale";
			// 
			// labeladressepostlivraison
			// 
			this->labeladressepostlivraison->AutoSize = true;
			this->labeladressepostlivraison->BackColor = System::Drawing::Color::Transparent;
			this->labeladressepostlivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladressepostlivraison->ForeColor = System::Drawing::Color::White;
			this->labeladressepostlivraison->Location = System::Drawing::Point(732, 329);
			this->labeladressepostlivraison->Name = L"labeladressepostlivraison";
			this->labeladressepostlivraison->Size = System::Drawing::Size(147, 28);
			this->labeladressepostlivraison->TabIndex = 21;
			this->labeladressepostlivraison->Text = L"Adresse Postale";
			// 
			// labelidadresselivraison
			// 
			this->labelidadresselivraison->AutoSize = true;
			this->labelidadresselivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelidadresselivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidadresselivraison->ForeColor = System::Drawing::Color::White;
			this->labelidadresselivraison->Location = System::Drawing::Point(732, 221);
			this->labelidadresselivraison->Name = L"labelidadresselivraison";
			this->labelidadresselivraison->Size = System::Drawing::Size(104, 28);
			this->labelidadresselivraison->TabIndex = 20;
			this->labelidadresselivraison->Text = L"ID Adresse";
			this->labelidadresselivraison->Click += gcnew System::EventHandler(this, &Dashboard::label11_Click);
			// 
			// text_adressepostalelivraison
			// 
			this->text_adressepostalelivraison->Location = System::Drawing::Point(728, 360);
			this->text_adressepostalelivraison->Name = L"text_adressepostalelivraison";
			this->text_adressepostalelivraison->Size = System::Drawing::Size(298, 26);
			this->text_adressepostalelivraison->TabIndex = 19;
			// 
			// text_payslivraison
			// 
			this->text_payslivraison->Location = System::Drawing::Point(728, 663);
			this->text_payslivraison->Name = L"text_payslivraison";
			this->text_payslivraison->Size = System::Drawing::Size(298, 26);
			this->text_payslivraison->TabIndex = 18;
			// 
			// text_villelivraison
			// 
			this->text_villelivraison->Location = System::Drawing::Point(728, 570);
			this->text_villelivraison->Name = L"text_villelivraison";
			this->text_villelivraison->Size = System::Drawing::Size(298, 26);
			this->text_villelivraison->TabIndex = 17;
			// 
			// textBox9Atext_codepostalelivraison
			// 
			this->textBox9Atext_codepostalelivraison->Location = System::Drawing::Point(728, 463);
			this->textBox9Atext_codepostalelivraison->Name = L"textBox9Atext_codepostalelivraison";
			this->textBox9Atext_codepostalelivraison->Size = System::Drawing::Size(298, 26);
			this->textBox9Atext_codepostalelivraison->TabIndex = 16;
			// 
			// text_idadresselivraison
			// 
			this->text_idadresselivraison->Location = System::Drawing::Point(728, 252);
			this->text_idadresselivraison->Name = L"text_idadresselivraison";
			this->text_idadresselivraison->Size = System::Drawing::Size(298, 26);
			this->text_idadresselivraison->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(29, 632);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 28);
			this->label3->TabIndex = 14;
			this->label3->Text = L"ID Client";
			// 
			// labeldatenaissance
			// 
			this->labeldatenaissance->AutoSize = true;
			this->labeldatenaissance->BackColor = System::Drawing::Color::Transparent;
			this->labeldatenaissance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldatenaissance->ForeColor = System::Drawing::Color::White;
			this->labeldatenaissance->Location = System::Drawing::Point(29, 539);
			this->labeldatenaissance->Name = L"labeldatenaissance";
			this->labeldatenaissance->Size = System::Drawing::Size(301, 28);
			this->labeldatenaissance->TabIndex = 13;
			this->labeldatenaissance->Text = L"Date de naissance (JJ/MM/AAAA)\r\n";
			// 
			// labelprenomclient
			// 
			this->labelprenomclient->AutoSize = true;
			this->labelprenomclient->BackColor = System::Drawing::Color::Transparent;
			this->labelprenomclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelprenomclient->ForeColor = System::Drawing::Color::White;
			this->labelprenomclient->Location = System::Drawing::Point(29, 432);
			this->labelprenomclient->Name = L"labelprenomclient";
			this->labelprenomclient->Size = System::Drawing::Size(80, 28);
			this->labelprenomclient->TabIndex = 12;
			this->labelprenomclient->Text = L"Prénom";
			// 
			// labelnomclient
			// 
			this->labelnomclient->AutoSize = true;
			this->labelnomclient->BackColor = System::Drawing::Color::Transparent;
			this->labelnomclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnomclient->ForeColor = System::Drawing::Color::White;
			this->labelnomclient->Location = System::Drawing::Point(29, 329);
			this->labelnomclient->Name = L"labelnomclient";
			this->labelnomclient->Size = System::Drawing::Size(56, 28);
			this->labelnomclient->TabIndex = 11;
			this->labelnomclient->Text = L"Nom";
			// 
			// labelidclient
			// 
			this->labelidclient->AutoSize = true;
			this->labelidclient->BackColor = System::Drawing::Color::Transparent;
			this->labelidclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidclient->ForeColor = System::Drawing::Color::White;
			this->labelidclient->Location = System::Drawing::Point(29, 221);
			this->labelidclient->Name = L"labelidclient";
			this->labelidclient->Size = System::Drawing::Size(86, 28);
			this->labelidclient->TabIndex = 10;
			this->labelidclient->Text = L"ID Client";
			// 
			// text_nomclient
			// 
			this->text_nomclient->Location = System::Drawing::Point(25, 360);
			this->text_nomclient->Name = L"text_nomclient";
			this->text_nomclient->Size = System::Drawing::Size(298, 26);
			this->text_nomclient->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(25, 663);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(298, 26);
			this->textBox4->TabIndex = 8;
			// 
			// text_datenaissance
			// 
			this->text_datenaissance->Location = System::Drawing::Point(25, 570);
			this->text_datenaissance->Name = L"text_datenaissance";
			this->text_datenaissance->Size = System::Drawing::Size(298, 26);
			this->text_datenaissance->TabIndex = 7;
			// 
			// text_prenomclient
			// 
			this->text_prenomclient->Location = System::Drawing::Point(25, 463);
			this->text_prenomclient->Name = L"text_prenomclient";
			this->text_prenomclient->Size = System::Drawing::Size(298, 26);
			this->text_prenomclient->TabIndex = 6;
			// 
			// text_idclient
			// 
			this->text_idclient->Location = System::Drawing::Point(25, 252);
			this->text_idclient->Name = L"text_idclient";
			this->text_idclient->Size = System::Drawing::Size(298, 26);
			this->text_idclient->TabIndex = 5;
			// 
			// button1_modiffier
			// 
			this->button1_modiffier->Location = System::Drawing::Point(977, 723);
			this->button1_modiffier->Name = L"button1_modiffier";
			this->button1_modiffier->Size = System::Drawing::Size(298, 39);
			this->button1_modiffier->TabIndex = 4;
			this->button1_modiffier->Text = L"MODIFIER";
			this->button1_modiffier->UseVisualStyleBackColor = true;
			// 
			// button1_ajouter
			// 
			this->button1_ajouter->Location = System::Drawing::Point(514, 723);
			this->button1_ajouter->Name = L"button1_ajouter";
			this->button1_ajouter->Size = System::Drawing::Size(298, 39);
			this->button1_ajouter->TabIndex = 3;
			this->button1_ajouter->Text = L"AJOUTER";
			this->button1_ajouter->UseVisualStyleBackColor = true;
			// 
			// button1_afficher
			// 
			this->button1_afficher->Location = System::Drawing::Point(36, 723);
			this->button1_afficher->Name = L"button1_afficher";
			this->button1_afficher->Size = System::Drawing::Size(298, 39);
			this->button1_afficher->TabIndex = 2;
			this->button1_afficher->Text = L"AFFICHER";
			this->button1_afficher->UseVisualStyleBackColor = true;
			// 
			// dataGridView_gestclient
			// 
			this->dataGridView_gestclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_gestclient->Location = System::Drawing::Point(8, 845);
			this->dataGridView_gestclient->Name = L"dataGridView_gestclient";
			this->dataGridView_gestclient->RowHeadersWidth = 62;
			this->dataGridView_gestclient->RowTemplate->Height = 28;
			this->dataGridView_gestclient->Size = System::Drawing::Size(1777, 375);
			this->dataGridView_gestclient->TabIndex = 1;
			// 
			// Title_gestion_clients
			// 
			this->Title_gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_gestion_clients->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_gestion_clients->Location = System::Drawing::Point(763, 35);
			this->Title_gestion_clients->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
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
			this->Panel_Gestion_Commandes->Location = System::Drawing::Point(375, 885);
			this->Panel_Gestion_Commandes->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Gestion_Commandes->Location = System::Drawing::Point(500, 73);
			this->Panel_Gestion_Commandes->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Gestion_Commandes->Name = L"Panel_Gestion_Commandes";
			this->Panel_Gestion_Commandes->Size = System::Drawing::Size(319, 357);
			this->Panel_Gestion_Commandes->Size = System::Drawing::Size(2390, 1481);
			this->Panel_Gestion_Commandes->TabIndex = 4;
			this->Panel_Gestion_Commandes->Visible = false;
			// 
			// Title_Gestion_Commandes
			// 
			this->Title_Gestion_Commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Commandes->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Commandes->Location = System::Drawing::Point(683, 34);
			this->Title_Gestion_Commandes->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
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
			this->panel_Gestion_Stock->Location = System::Drawing::Point(393, 902);
			this->panel_Gestion_Stock->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->panel_Gestion_Stock->Location = System::Drawing::Point(524, 0);
			this->panel_Gestion_Stock->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel_Gestion_Stock->Name = L"panel_Gestion_Stock";
			this->panel_Gestion_Stock->Size = System::Drawing::Size(282, 345);
			this->panel_Gestion_Stock->Size = System::Drawing::Size(2372, 1560);
			this->panel_Gestion_Stock->TabIndex = 0;
			this->panel_Gestion_Stock->Visible = false;
			// 
			// title_Gestion_Stock
			// 
			this->title_Gestion_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_Gestion_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->title_Gestion_Stock->Location = System::Drawing::Point(693, 58);
			this->title_Gestion_Stock->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
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
			this->Panel_Gestion_Stat->Location = System::Drawing::Point(370, 919);
			this->Panel_Gestion_Stat->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Panel_Gestion_Stat->Location = System::Drawing::Point(494, 23);
			this->Panel_Gestion_Stat->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Panel_Gestion_Stat->Name = L"Panel_Gestion_Stat";
			this->Panel_Gestion_Stat->Size = System::Drawing::Size(289, 323);
			this->Panel_Gestion_Stat->Size = System::Drawing::Size(2392, 1531);
			this->Panel_Gestion_Stat->TabIndex = 5;
			this->Panel_Gestion_Stat->Visible = false;
			// 
			// Title_Gestion_Stat
			// 
			this->Title_Gestion_Stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Stat->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Stat->Location = System::Drawing::Point(664, 40);
			this->Title_Gestion_Stat->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title_Gestion_Stat->Location = System::Drawing::Point(410, 50);
			this->Title_Gestion_Stat->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Title_Gestion_Stat->Name = L"Title_Gestion_Stat";
			this->Title_Gestion_Stat->Size = System::Drawing::Size(748, 150);
			this->Title_Gestion_Stat->TabIndex = 0;
			this->Title_Gestion_Stat->Text = L"Gestion Statistiques";
			this->Title_Gestion_Stat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelpaysfacturation
			// 
			this->labelpaysfacturation->AutoSize = true;
			this->labelpaysfacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelpaysfacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpaysfacturation->ForeColor = System::Drawing::Color::White;
			this->labelpaysfacturation->Location = System::Drawing::Point(1429, 632);
			this->labelpaysfacturation->Name = L"labelpaysfacturation";
			this->labelpaysfacturation->Size = System::Drawing::Size(50, 28);
			this->labelpaysfacturation->TabIndex = 49;
			this->labelpaysfacturation->Text = L"Pays";
			// 
			// labelvillefacturation
			// 
			this->labelvillefacturation->AutoSize = true;
			this->labelvillefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelvillefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelvillefacturation->ForeColor = System::Drawing::Color::White;
			this->labelvillefacturation->Location = System::Drawing::Point(1429, 539);
			this->labelvillefacturation->Name = L"labelvillefacturation";
			this->labelvillefacturation->Size = System::Drawing::Size(49, 28);
			this->labelvillefacturation->TabIndex = 48;
			this->labelvillefacturation->Text = L"Ville";
			// 
			// labelcodepostalefacturation
			// 
			this->labelcodepostalefacturation->AutoSize = true;
			this->labelcodepostalefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelcodepostalefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcodepostalefacturation->ForeColor = System::Drawing::Color::White;
			this->labelcodepostalefacturation->Location = System::Drawing::Point(1429, 432);
			this->labelcodepostalefacturation->Name = L"labelcodepostalefacturation";
			this->labelcodepostalefacturation->Size = System::Drawing::Size(125, 28);
			this->labelcodepostalefacturation->TabIndex = 47;
			this->labelcodepostalefacturation->Text = L"Code Postale";
			// 
			// labeladressepostalefacturation
			// 
			this->labeladressepostalefacturation->AutoSize = true;
			this->labeladressepostalefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labeladressepostalefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladressepostalefacturation->ForeColor = System::Drawing::Color::White;
			this->labeladressepostalefacturation->Location = System::Drawing::Point(1429, 329);
			this->labeladressepostalefacturation->Name = L"labeladressepostalefacturation";
			this->labeladressepostalefacturation->Size = System::Drawing::Size(147, 28);
			this->labeladressepostalefacturation->TabIndex = 46;
			this->labeladressepostalefacturation->Text = L"Adresse Postale";
			// 
			// labelidadressefacturation
			// 
			this->labelidadressefacturation->AutoSize = true;
			this->labelidadressefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelidadressefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidadressefacturation->ForeColor = System::Drawing::Color::White;
			this->labelidadressefacturation->Location = System::Drawing::Point(1429, 221);
			this->labelidadressefacturation->Name = L"labelidadressefacturation";
			this->labelidadressefacturation->Size = System::Drawing::Size(104, 28);
			this->labelidadressefacturation->TabIndex = 45;
			this->labelidadressefacturation->Text = L"ID Adresse";
			// 
			// text_adressepostalefacturation
			// 
			this->text_adressepostalefacturation->Location = System::Drawing::Point(1425, 360);
			this->text_adressepostalefacturation->Name = L"text_adressepostalefacturation";
			this->text_adressepostalefacturation->Size = System::Drawing::Size(298, 26);
			this->text_adressepostalefacturation->TabIndex = 44;
			// 
			// text_paysfacturation
			// 
			this->text_paysfacturation->Location = System::Drawing::Point(1425, 663);
			this->text_paysfacturation->Name = L"text_paysfacturation";
			this->text_paysfacturation->Size = System::Drawing::Size(298, 26);
			this->text_paysfacturation->TabIndex = 43;
			// 
			// text_villefacturation
			// 
			this->text_villefacturation->Location = System::Drawing::Point(1425, 570);
			this->text_villefacturation->Name = L"text_villefacturation";
			this->text_villefacturation->Size = System::Drawing::Size(298, 26);
			this->text_villefacturation->TabIndex = 42;
			// 
			// text_codepostalefacturation
			// 
			this->text_codepostalefacturation->Location = System::Drawing::Point(1425, 463);
			this->text_codepostalefacturation->Name = L"text_codepostalefacturation";
			this->text_codepostalefacturation->Size = System::Drawing::Size(298, 26);
			this->text_codepostalefacturation->TabIndex = 41;
			// 
			// text_idadressefacturation
			// 
			this->text_idadressefacturation->Location = System::Drawing::Point(1425, 252);
			this->text_idadressefacturation->Name = L"text_idadressefacturation";
			this->text_idadressefacturation->Size = System::Drawing::Size(298, 26);
			this->text_idadressefacturation->TabIndex = 40;
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
			this->Panel_Gestion_Client->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestclient))->EndInit();
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


private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
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
