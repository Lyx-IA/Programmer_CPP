#include <iostream>
#include <cmath>
#include <cstdlib>

///'cout', 'cin' et 'endl' font partie du namespace 'std', il faut soit inclure le namespace en début de programme ou rajouter 'std::' devant les primitive de 'std'
//using namespace std;

///Exemple de programme en C ++



int main()
{
	printf("Hello world!\n");

	///Variables ou constantes locales
	int i = 0;
	float x = 0.0;
	float racx = 0.0;
	///Constantes
	const int NFOIS = 5;

	printf("Bonjour\n");


	///cout envoie une informatoin typé dans la console
	std::cout << "Je vais vous calculer" << NFOIS << "racines carrees\n";

	for (i = 0; i < NFOIS; i++) {

		std::cout << "Donnez un nombre : ";
		///cin permet de saisir une information
		std::cin >> x;


		if (x < 0.0)
			std::cout << "Le nombre" << x << "ne possede pas de racine carree\n";
		else {
			racx = sqrtf(x);
			///endl est un retour chariot
			std::cout << "Le nombre " << x << " a pour racine carree " << racx << std::endl;
		}
	}

	std::cout << "Travail Termine" << std::endl;


	return 0;
}