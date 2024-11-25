#include <stdlib.h> /* Lib Standard*/
#include <iostream> /* Lib Cin , Cout */
#include <string.h>
#include "Transgerbeur.h"
using namespace std;

// Nom du projet : TP5 Struct Enum Union
// Nom de l’auteur : Marcelo Monteiro Garcia
// Date de création : 25/11/2024
// Révision ou version : (facultatif pour les TPs)
// Version du compilateur : (facultatif)
// Résumé :



int main() {

	cout << endl << "Voici le porgramme Transgerbeur" << endl;

	/* Declarations Variables */
		EEtat etat;
		SPalette paletteCasier;
		SRouleau rouleauCasier;
		UContenu contenu;
		SCasier casier;
		SCasier encasiers[9];

	/*Casier 1*/

		SRouleau ro1;
		ro1.longueur = 3.5;

		SPalette pa1;
		pa1.poids = 33;
		strcpy_s (pa1.reference,  "158589551");

		EEtat etatC1;
		etatC1 = Palette;

		UContenu cont1 ;
		cont1.paletteCasier = pa1;
		cont1.rouleauCasier = ro1;

		SCasier c1;
		c1.paletteCasier = pa1;
		c1.etat = etatC1;
		c1.px = 2;
		c1.py = 3;

	/*Casier 2*/

		SRouleau ro2;
		ro2.longueur = 4.7;

		SPalette pa2;
		pa2.poids = 55;
		strcpy_s(pa2.reference, "158589551");

		EEtat etatC2;
		etatC2 = Palette;

		UContenu cont2;
		cont2.paletteCasier = pa2;
		cont2.rouleauCasier = ro2;

		SCasier c2;
		c2.paletteCasier = pa2;
		c2.etat = etatC2;
		c2.px = 7;
		c2.py = 8;

		encasiers[0] = c1 ;
		encasiers[1] = c2 ;

	cout << endl << " Voici la taille de pa1 : "  << sizeof(pa1) ;
	cout << endl << " Voici la taille de pa1.poids : " << sizeof(pa1.poids) ;
	cout << endl << " Voici la taille de pa1.reference : "  << sizeof(pa1.reference) ;
	cout << endl << " Voici la taille de ro1 : " << sizeof(ro1) ;
	cout << endl << " Voici la taille de ro1.longueur : "  << sizeof(ro1.longueur) ;
	cout << endl << " Voici la taille de etatC1 : " << sizeof(etatC1) ;
	cout << endl << " Voici la taille de cont1 : " << sizeof(cont1) ;
	cout << endl << " Voici la taille de cont1.paletteCasier : " << sizeof(cont1.paletteCasier) ;
	cout << endl << " Voici la taille de cont1.rouleauCasier : " << sizeof(cont1.rouleauCasier) ;
	cout << endl << " Voici la taille de c1 : " << sizeof(c1) ;
	cout << endl << " Voici la taille de c1.etat : " << sizeof(c1.etat) ;
	cout << endl << " Voici la taille de c1.paletteCasier : " << sizeof(c1.paletteCasier) ;
	cout << endl << " Voici la taille de c1.rouleauCasier : " << sizeof(c1.rouleauCasier) ;
	cout << endl << " Voici la taille de c1.px : " << sizeof(c1.px) ;
	cout << endl << " Voici la taille de c1.py : " << sizeof(c1.py) << endl;
 
	cout << endl << " Voici la taille de pa2 : " << sizeof(pa2);
	cout << endl << " Voici la taille de pa2.poids : " << sizeof(pa2.poids);
	cout << endl << " Voici la taille de pa2.reference : " << sizeof(pa2.reference);
	cout << endl << " Voici la taille de ro2 : " << sizeof(ro2);
	cout << endl << " Voici la taille de ro2.longueur : " << sizeof(ro2.longueur);
	cout << endl << " Voici la taille de etatC2 : " << sizeof(etatC2);
	cout << endl << " Voici la taille de cont2 : " << sizeof(cont2);
	cout << endl << " Voici la taille de cont2.paletteCasier : " << sizeof(cont2.paletteCasier);
	cout << endl << " Voici la taille de cont2.rouleauCasier : " << sizeof(cont2.rouleauCasier);
	cout << endl << " Voici la taille de c2 : " << sizeof(c2);
	cout << endl << " Voici la taille de c2.etat : " << sizeof(c2.etat);
	cout << endl << " Voici la taille de c2.paletteCasier : " << sizeof(c2.paletteCasier);
	cout << endl << " Voici la taille de c2.rouleauCasier : " << sizeof(c2.rouleauCasier);
	cout << endl << " Voici la taille de c2.px : " << sizeof(c2.px);
	cout << endl << " Voici la taille de c2.py : " << sizeof(c2.py) << endl;

	return 0;
}