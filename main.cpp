// CorrectionRestaurant.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"GroupePlats.h"
#include"Plat.h"

int main()
{
	// Un Menu Simple
	GroupePlats ME("Menu Enfant", 10,true); 
	
	Plat e("Tomates", 0);
	Plat p("Hamburger", 0);
	Plat d("Glace", 0); 
	
	ME.add(&e); ME.add(&p); ME.add(&d);
	//ici, on obtient 
		// ME 
		//  |_ e 
		//  |_ p 	
		//  |_ d 
	
	ME.affiche();
	// qui affichera

		// Menu Enfant, 10 
		//  |_ Tomates 
		//  |_ Hamburger 	
		//  |_ Glace 

	// Un Menu Complexe
	GroupePlats MR("Menu Regional", 20, false); 

	GroupePlats Ent("Entrees", 0,true); GroupePlats Pla("Plats", 0,true); GroupePlats Des("Desserts", 0,false);
	MR.add(&Ent); MR.add(&Pla); MR.add(&Des);
	//ici, on obtient 
	// MR
	//  |_ Ent
	//  |_ Pla
	//  |_ Des
	
	//on créé des plats qu'on ajoute à chacun de ces groupe de plats 
	Plat p1("Plat1", 0);
	Plat p2("Plat2", 0);
	Plat p3("Plat3", 0);
	Plat p4("Plat4", 0);
	Plat p5("Plat5", 0);
	Plat p6("Plat6", 0);
	
	//au entrées
	Ent.add(&p1); Ent.add(&p2);
	//au plats 
	Pla.add(&p3); Pla.add(&p4);
	//au Desserts
	Des.add(&p5); Des.add(&p6);

	//ici on obtient 
	// MR
	//  |_ Ent
	//		|__p1
	//		|__p2
	//  |_ Pla
	//		|__p3
	//		|__p4
	//  |_ Des
	//		|__p5
	//		|__p6

	// on affiche
	MR.affiche();

	cout << MR.codeEXPORT();
}
