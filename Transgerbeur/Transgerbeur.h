#include <string.h>

enum EEtat {
	Palette,
	Rouleau,
	Vide
};

struct SPalette {
	int poids;
	char reference[20];
};

struct SRouleau {
		float longueur;
};

union UContenu {
	SPalette paletteCasier;
	SRouleau rouleauCasier;
};

struct SCasier {
	int px;
	int py;
	SPalette paletteCasier;
	SRouleau rouleauCasier;
	EEtat etat;
};
