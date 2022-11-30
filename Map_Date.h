#pragma once
using namespace System;

namespace NS_Composants
{
	ref class Map_Date
	{
	private:
		int jour;
		int mois;
		int annee;
	public:
		Map_Date(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		int getJour(void);
		int getMois(void);
		int getAnnee(void);
		void setJour(int);
		void setMois(int);
		void setAnnee(int);
	};
}
