#pragma once

using namespace System;

namespace NS_Composants
{
	ref class Map_Personne
	{
	protected:
		int id_personne;
		String^ nom;
		String^ prenom;
	public:
		Map_Personne(void);
		virtual String^ SELECT(void);
		virtual String^ INSERT(void);
		virtual String^ UPDATE(void);
		virtual String^ DELETE(void);
		int getID_Personne(void);
		virtual String^ getNom(void);
		virtual String^ getPrenom(void);
		void setID_Personne(int);
		void setNom(String^);
		void setPrenom(String^);
	};
}
