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
		SCasier encasiers[2];

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
		ro2.longueur = 4.777;

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


		return 0;
}