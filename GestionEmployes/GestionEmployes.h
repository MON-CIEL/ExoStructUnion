#include <iostream>
using namespace std;

struct Dates {
	int jour;
	int mois;
	int annee;
};

struct Employes {
	char nom[20];
	char prenom[20];
	struct Dates embauche;
	struct Dates prise;
};

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

void saisitInformations(Employes* nomV);
void saisitInformations(Employes* nomV) {

	do {
		cout << endl << "Veuillez saisir le(s) prenom(s) de votre employe(e)" << endl;
		cout << endl << "Prenom saisit :";
		cin >> nomV->prenom;
	} while (verifier());

	do {
		cout << endl << "Veuillez saisir le(s) nom(s) de votre employe(e)" << endl;
		cout << endl << "Nom saisit :";
		cin >> nomV->nom;
	} while (verifier());

	do {
		cout << endl << "Veuillez saisir le jour de la date d'embauche de votre employe(e)" << endl;
		cout << endl << "Jour saisit : ";
		cin >> nomV->prise.jour;
	} while (verifier() || nomV->prise.jour < 1 || nomV->prise.jour > 31);



	do {
		cout << endl << "Veuillez saisir le mois de la date d'embauche de votre employe(e)" << endl;
		cout << endl << "Mois saisit : ";
		cin >> nomV->prise.mois;
	} while (verifier() || nomV->prise.mois < 1 || nomV->prise.mois > 12);


	do {
		cout << endl << "Veuillez saisir l'annee de la date d'embauche de votre employe(e)" << endl;
		cout << endl << "Annee saisit : ";
		cin >> nomV->prise.annee;
	} while (verifier() || nomV->prise.annee < 0);


	do {
		cout << endl << "Veuillez saisir le jour de la date de prise de votre employe(e)" << endl;
		cout << endl << "Jour saisit : ";
		cin >> nomV->prise.jour;
	} while (verifier() || nomV->prise.jour < 1 || nomV->prise.jour > 31);



	do {
		cout << endl << "Veuillez saisir le mois de la date de prise de votre employe(e)" << endl;
		cout << endl << "Mois saisit : ";
		cin >> nomV->prise.mois;
	} while (verifier() || nomV->prise.mois < 1 || nomV->prise.mois > 12);


	do {
		cout << endl << "Veuillez saisir l'annee de la date de prise de votre employe(e)" << endl;
		cout << endl << "Annee saisit : ";
		cin >> nomV->prise.annee;
	} while (verifier() || nomV->prise.annee < 0);
}
