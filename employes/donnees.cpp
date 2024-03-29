#include "donnees.h"

Donnees::Donnees()
{
	for (int cpt = 0; cpt < maxEmployes; cpt++)
	{
		lesEmployes[cpt] = NULL;
	}
	for (int cpt = 0; cpt < maxTaches; cpt++)
	{
		lesTaches[cpt] = NULL;
	}
}
Donnees::~Donnees()
{
	DetruireEmployes();
	DetruireTaches();
}
void Donnees::DetruireEmployes()
{
	for (int cpt = 0; cpt < maxEmployes; cpt++)
	{
		if (lesEmployes[cpt] != NULL)
		{
			delete lesEmployes[cpt];
			lesEmployes[cpt] = NULL;
		}
	}
}
void Donnees::DetruireTaches()
{
	for (int cpt = 0; cpt < maxTaches; cpt++)
	{
		if (lesTaches[cpt] != NULL)
		{
			delete lesTaches[cpt];
			lesTaches[cpt] = NULL;
		}
	}
}
bool Donnees::AjouterEmploye(Employe inEmploye) 
{
	bool ajoutReussi = false;

	return ajoutReussi;
}
bool Donnees::AjouterTache(Tache inTache) 
{
	bool ajoutReussi = false;
	int cpt = 0;

	while (cpt < maxTaches  && ajoutReussi == false) 
	{
		if (lesTaches[cpt] == NULL)
		{
			ajoutReussi = true;
			lesTaches[cpt] = new Tache(inTache);
		}
		cpt++;
	
	}
	return ajoutReussi;
}
Employe Donnees::ChercherEmployeSelonNumero(string inNumero)
{
	Employe employeTrouve;

	return employeTrouve;
}
Tache Donnees::ChercherTacheParIdentifiant(string inId)
{
	Tache tacheTrouve;

	int cpt = 0;
	bool flag = false;

	while (cpt < maxTaches && flag == false)
	{
		if (lesTaches[cpt]->getIdentifiant() == inId)
		{
			tacheTrouve = *lesTaches[cpt];
			flag = true;
			
		}
		cpt++;
	}
	return tacheTrouve;
}


