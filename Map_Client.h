#pragma once
#include "Map_Personne.h"
#include "Map_Adresse.h"
#include "Map_Date.h"

namespace NS_Composants
{
	ref class Map_Client : public Map_Personne
	{
	private:
		int num_client;
		Map_Adresse^ adresse_livraison;
		Map_Adresse^ adresse_facturation;
		Map_Date^ date_naissance;
	public:
		Map_Client(void);
		String^ SELECT(void) override;
		String^ INSERT(void) override;
		String^ UPDATE(void) override;
		String^ DELETE(void) override;
		int getNumClient(void);
		String^ getNom(void) override;
		String^ getPrenom(void) override;
		Map_Adresse^ getAdresseLivraison(void);
		Map_Adresse^ getAdresseFacturation(void);
		Map_Date^ getDateNaissance(void);
		void setNumClient(int);
		void setAdresseLivraison(Map_Adresse^);
		void setAdresseFacturation(Map_Adresse^);
		void setDateNaissance(Map_Date^);
	};
}
