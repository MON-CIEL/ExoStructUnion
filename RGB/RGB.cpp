#include <stdlib.h> /* Lib Standard*/
#include <iostream> /* Lib Cin , Cout */
#include "RGB.h"
using namespace std;

// Nom du projet : TP5 Struct Enum Union
// Nom de l’auteur : Marcelo Monteiro Garcia
// Date de création : 25/11/2024
// Révision ou version : (facultatif pour les TPs)
// Version du compilateur : (facultatif)
// Résumé :

int main() {

	/*
		UColor colorVal;
		colorVal.val = 100 * 256 * 256 + 15 * 256 + 130;
		colorVal.components.g = 200;
		cout << sizeof(colorVal) << endl;
	*/

	cout << endl << "Voici le porgramme RGB" << endl;

	/* Declarations Variables */
	Srgb valeursCouleurs;
	
	
	cout << endl << "Veuillez saisir une valeur pour r en hexadecimale" << endl;
	cout << endl << "Valeur saisit : ";
	cin >> hex >> valeursCouleurs.r;
	cout << endl << "Veuillez saisir une valeur pour g en hexadecimale" << endl;
	cout << endl << "Valeur saisit : ";
	cin >> hex >> valeursCouleurs.g;
	cout << endl << "Veuillez saisir une valeur pour b en hexadecimale" << endl;
	cout << endl << "Valeur saisit : ";
	cin >> hex >> valeursCouleurs.b;
}
