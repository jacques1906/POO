#pragma once
using namespace System;

namespace NS_Composants
{
	ref class Map_Adresse
	{
	private:
		int id_adresse;
		String^ adressePostale;
		String^ ville;
		String^ code_postal;
		String^ pays;
	public:
		Map_Adresse(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int getID_Adresse(void);
		String^ getAdressePostale(void);
		String^ getVille(void);
		String^ getCodePostal(void);
		String^ getPays(void);
		void setID_Adresse(int);
		void setAdressePostale(String^);
		void setVille(String^);
		void setCodePostal(String^);
		void setPays(String^);
	};
}
