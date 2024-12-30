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