#include <stdlib.h> /* Lib Standard*/
#include <iostream> /* Lib Cin , Cout */
#include <iomanip> /* Lib Set... , hex , dec , ...*/
#include "RGB.h"
using namespace std;

// Nom du projet : TP5 Struct Enum Union
// Nom de l’auteur : Marcelo Monteiro Garcia
// Date de création : 25/11/2024
// Révision ou version : (facultatif pour les TPs)
// Version du compilateur : (facultatif)
// Résumé :

bool verifier();
bool verifier() {
	if (cin.fail()) {

		cout << endl << "Veuillez ressaisir la valeur saisit" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		return true;
	}
	else {
		return false;
	}
}

int main() {



	cout << endl << "Voici le porgramme RGB" << endl;

	/* Declarations Variables */
	Srgb valeursColeurs;
	UColor colorVal;
	int choix;
	bool reccomencerChoix;

	do {

		cout << endl << "Voulez vous saisir chaque valeur (r , g , b) ou une valeur unique" << endl;
		cout << endl << "	- Veuillez saisir 1 si vous voulez saisir chaque valeur " << endl;
		cout << endl << "	- Veuillez saisir 2 si vous voulez saisir une valeur unique " << endl;
		cout << endl << "Reponse : ";
		cin >> choix;
	} while (choix != 1 && choix != 2);

	switch (choix) {
	default:
		break;

	case 1: {

		cout << endl << "Veuillez saisir une valeur pour r en hexadecimale" << endl;
		cout << endl << "Valeur saisit : ";
		do {
			cin >> hex >> valeursColeurs.r;
		} while (verifier());

		cout << endl << "Veuillez saisir une valeur pour g en hexadecimale" << endl;
		cout << endl << "Valeur saisit : ";
		do {
			cin >> hex >> valeursColeurs.g;
		} while (verifier());

		cout << endl << "Veuillez saisir une valeur pour b en hexadecimale" << endl;
		cout << endl << "Valeur saisit : ";
		do {
			cin >> hex >> valeursColeurs.b;
		} while (verifier());


		break;
	}

	case 2: {

		for (int i = 0; i < 3; i++) {
			cout << endl << "Veuillez saisir votre " << i + 1 << " valeur hexadecimale" << endl;
			cout << endl << "Valeur saisit : ";
			cin >> hex >> colorVal.tabCol[i];
		}
		colorVal.val = colorVal.components.r * 256 * 256 + colorVal.components.g * 256 + colorVal.components.b;

		break;
	}
	}

}
