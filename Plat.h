#pragma once
#include "ElementGroupe.h"
class Plat : public ElementGroupe
{
public :
	Plat(const string& n, double p) : ElementGroupe(n, p) { ; }
	void affiche() override;
	string codeEXPORT() override;
};

