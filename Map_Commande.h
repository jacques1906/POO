#pragma once
#include "Map_Date.h"

namespace NS_Composants
{
	ref class Map_Commande
	{
	private:
		String^ ref_commande;
		int id_client;
		int id_personne;
		Map_Date^ date_emission;
		Map_Date^ date_livraison;
		float montant_TotHT, montant_TotTVA, montant_TotTTC;
	public:
		Map_Commande(void);
		String^ SELECT(void) override;
		String^ INSERT(void) override;
		String^ UPDATE(void) override;
		String^ DELETE(void) override;
		void setRefCommande(String^);
		void setIdClient(String^);
		void setIdPersonne(String^);
		void setDateEmission(Map_Date^);
		void setDateLivraison(Map_Date^);
		void setMontantToTHT(float);
		void setMontantToTTVA(float);
		void setMontantToTHTTC(float);
		String^ getRefCommande(void);
		int getIdClient(void);
		int getIdPersonne(void);
		Map_Date^ getDateEmission(void);
		Map_Date^ getDateLivraison(void);
		float getMontantToTHT(void);
		float getMontantToTTVA(void);
		float getMontantToTHTTC(void);
	};
}