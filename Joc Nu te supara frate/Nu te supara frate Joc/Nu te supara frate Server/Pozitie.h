#ifndef PozitieH
#define PozitieH
#include <vcl.h>
#include "Zar.h"

class Pozitie {
private:
	TShape* pozitii[40];
	TLabel* labels[40];
	String labelTextInitial[40];
	int pozitieCurenta;
	Zar zar;
public:
	Pozitie();
	void adaugaPozitie(TShape* pozitie, int index);
	void adaugaLabel(TLabel* label, int index);
	TShape* getPozitie(int index);
	TLabel* getLabel(int index);
	int getZar();
	int muta(int pozitieInitiala, int valoareZar);
	void actualizeazaLabel(int pozitieVechi, int pozitieNou, String pionText);
};

#endif

