#pragma once
#include <vector>
#include "ElementGroupe.h"
using namespace std;
class GroupePlats :
	public ElementGroupe
{
private :
	vector<ElementGroupe*> liste;
	bool choix = false;

public:
	void add(ElementGroupe* e) { liste.push_back(e); }
	GroupePlats(const string& n, double p,bool c = false) : ElementGroupe(n, p), choix (c){ ; }
	void affiche() override;
	string codeEXPORT() override;
	string exportHTML();
};

