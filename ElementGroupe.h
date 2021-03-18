#pragma once
#include <string>
#include <iostream>
using namespace std;
class ElementGroupe
{
protected :
	string nom;
	double prix;
public :
	ElementGroupe(const string& n, double p) : nom(n), prix(p) { ; }
	virtual void affiche() = 0;
	virtual string codeEXPORT() = 0;
	string getNom() { return nom; }
	double getPrix() { return prix; }
};

