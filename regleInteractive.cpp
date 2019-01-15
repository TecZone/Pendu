#include "regleInteractive.h" 
#include "pch.h" //Obligatoire sur Visual Studio 2017
#include <iostream>

void regleDuJeu()
{
	std::cout << "==================================" << std::endl;
	std::cout << "|Voici les regles du jeu du Pendu|" << std::endl;
	std::cout << "|                                |" << std::endl;
	std::cout << "|   Vous devrez trouver un mot   |" << std::endl;
	std::cout << "| composer de X lettres selon la |" << std::endl;
	std::cout << "|       difficulte choisi.       |" << std::endl;
	std::cout << "|                                |" << std::endl;
	std::cout << "| Pour le trouver, il faudra que |" << std::endl;
	std::cout << "|   vous ecriviez des lettres.   |" << std::endl;
	std::cout << "|  Si la lettre est dans le mot  |" << std::endl;
	std::cout << "| alors elle s'affichera. Sinon, |" << std::endl;
	std::cout << "|      un pendu se dessine.      |" << std::endl;
	std::cout << "|                                |" << std::endl;
	std::cout << "|                                |" << std::endl;
	std::cout << "|    Ecrivez 1 pour sortir...    |" << std::endl;
	std::cout << "==================================" << std::endl;

	int regleDuJeu{ 0 };
	while (regleDuJeu != 1) {
		std::cin >> regleDuJeu;
	}

	system("cls");
}
