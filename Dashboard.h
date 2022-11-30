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
	protected:
	private: System::Windows::Forms::Panel^ panel;
	private: System::Windows::Forms::Label^ Title_Dashboard;

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
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->Title_Dashboard = (gcnew System::Windows::Forms::Label());
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(244, 649);
			this->panel1->TabIndex = 0;
			// 
			// panel
			// 
			this->panel->Controls->Add(this->Title_Dashboard);
			this->panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel->Location = System::Drawing::Point(244, 0);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(983, 207);
			this->panel->TabIndex = 1;
			// 
			// Title_Dashboard
			// 
			this->Title_Dashboard->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Title_Dashboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Title_Dashboard->Location = System::Drawing::Point(232, 69);
			this->Title_Dashboard->Name = L"Title_Dashboard";
			this->Title_Dashboard->Size = System::Drawing::Size(546, 55);
			this->Title_Dashboard->TabIndex = 0;
			this->Title_Dashboard->Text = L"Dashboard";
			this->Title_Dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1227, 649);
			this->Controls->Add(this->panel);
			this->Controls->Add(this->panel1);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->panel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
