#include "choixMenuPrincipale.h"
#include "optionDuJeu.h"
#include "regleInteractive.h"

#include "pch.h"
#include <iostream>
#include <cstdlib>





int choixMenu(int choixMenuP)
{
	switch (choixMenuP) {
	case 1:
		system("cls");
		return 1;
		break;

	case 2:
		system("cls");
		regleDuJeu(); //Utilisation ici
		return 2;
		break;

	case 3:
		system("cls");
		optionDuJeu(); //J'ai exactement le même problème avec cette fonction. Les fichiers sont les mêmes (on change juste la fonction)
		return 2;
		break;

	case 4:

		return 0;
		break;
	}

}
