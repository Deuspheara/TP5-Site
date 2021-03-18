#include "GroupePlats.h"
#include <fstream>
void GroupePlats::affiche()
{
	cout << nom;
	if (prix != 0)
		cout << prix;
	//je peux accéder aux champs nom et prix de la classe ElementGroupe (dont herite GroupePlats) car ils sont déclarés en protected
	cout << endl;
	// j'affiche tous les elements de la liste d'ElementGroupe qu'ils soient GroupePlat OU Plat (grâce au polymorphisme de la fonction affiche déclarée en virtuelle)
	for (int i = 0; i < liste.size(); i++) {
		
		liste[i]->affiche();

		if (choix == true && i < liste.size()-1) {
			cout << "\tou" << endl;
		}
		if(choix == false && i < liste.size()-1) {
			cout << "\tet" << endl;
		}
	}
	
}

string GroupePlats::codeEXPORT()
{
	string sortie;


	sortie += "<h1>" + nom + "</h1>";
	if (prix != 0)
		sortie += "<h1>" + to_string(prix) + "e</h1>";

	for (int i = 0; i < liste.size(); i++) {
		sortie += liste[i]->codeEXPORT();
		//sortie += "<h1>" + liste[i]->getNom() + "</h1>";
		//if (liste[i]->getPrix() != 0) {
		//	sortie += "<p>" + to_string(liste[i]->getPrix()) + "€\n";
		//}
		if (choix == true && i < liste.size() - 1) {
			sortie += "\tou\n";
		}
		if (choix == false && i < liste.size() - 1) {
			sortie += "\et\n";
		}
	}
	return sortie;
}

string GroupePlats::exportHTML()
{
	string sortie;

	int cpt = 0;
	ifstream entree("site.html", ios::in);
	char ligne[1000];
	if (!entree)
		cout << "Probleme d'ouverture \n";
	else {
		while (!entree.eof()) {
			entree.getline(ligne, 1000,'$');
			sortie += sortie;
		}
		entree.close();
	}
	

	return sortie;
}
