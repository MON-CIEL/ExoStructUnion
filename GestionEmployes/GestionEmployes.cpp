#include <stdlib.h> /* Lib Standard*/
#include <iostream> /* Lib Cin , Cout */
#include "GestionEmployes.h"  
using namespace std;

// Nom du projet : TP5 Struct Enum Union
// Nom de l’auteur : Marcelo Monteiro Garcia
// Date de création : 25/11/2024
// Révision ou version : (facultatif pour les TPs)
// Version du compilateur : (facultatif)
// Résumé :

int main() {
	cout << endl << "Voici le porgramme GestionEmployes" << endl;

	Employes test;
	strcpy_s(test.prenom, "Marcelo");
	strcpy_s(test.nom, "Monteiro Garcia");
	test.embauche.jour = 03;
	test.embauche.mois = 03;
	test.embauche.annee = 2006;
	test.prise.jour = 06;
	test.prise.mois = 06;
	test.prise.annee = 2006;	
	
	Employes test2;
	saisitInformations(&test2);

}