#include "Plat.h"

void Plat::affiche()
{
	cout << "\t" << nom;
	if (prix != 0)
		cout << prix;
	cout << endl;
}

string Plat::codeEXPORT()
{
	string sortie;

	sortie += "<p>" +nom + "</p>";
	if (prix != 0)
		sortie += "<p>" + to_string(prix) + "</p>\n";


	return sortie;
}
