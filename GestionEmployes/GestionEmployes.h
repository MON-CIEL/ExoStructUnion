#include <iostream> /* Lib Cin , Cout */
#include <iomanip> /* Lib Set... , hex , dec , ...*/
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
		cin >> nomV->embauche.jour;
	} while (verifier() || nomV->embauche.jour < 1 || nomV->embauche.jour > 31);

	do {
		cout << endl << "Veuillez saisir le mois de la date d'embauche de votre employe(e)" << endl;
		cout << endl << "Mois saisit : ";
		cin >> nomV->embauche.mois;
	} while (verifier() || nomV->embauche.mois < 1 || nomV->embauche.mois > 12);

	do {
		cout << endl << "Veuillez saisir l'annee de la date d'embauche de votre employe(e)" << endl;
		cout << endl << "Annee saisit : ";
		cin >> nomV->embauche.annee;
	} while (verifier() || nomV->embauche.annee < 0);

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

void affichageInformations(Employes* nomV);
void affichageInformations(Employes* nomV) {
	cout << endl << "L'employe(e) " << nomV->prenom << " " << nomV->nom << " : " << endl;
	cout << endl << "	- a ete embauche le " << nomV->embauche.jour << "/" << nomV->embauche.mois << "/" << nomV->embauche.annee << endl;
	cout << endl << "	- a pris le poste pour lequel il/elle a ete employ(e) le " << nomV->prise.jour << "/" << nomV->prise.mois << "/" << nomV->prise.annee << endl;

	cout << endl << "Voici un tableau regroupant les informations de l'employe(e) en question :  " << endl;
	/*Tableau*/
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|" << setw(32) << "Prenom(s) |" << setw(32) << "Nom(s) |" << setw(27) << "Date d'embauche |" << setw(27) << "Date de prise |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------	" << endl;
	cout << "|" << setw(30) << nomV->prenom << " |" << setw(30) << nomV->nom << " |" << setw(18) << nomV->embauche.jour << "/" << nomV->embauche.mois << "/" << nomV->embauche.annee << " |" << setw(18) << nomV->prise.jour << "/" << nomV->prise.mois << "/" << nomV->prise.annee << " |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------	" << endl;
}
