#include "Zar.h"
#include <cstdlib>
#include <ctime>

Zar::Zar(){
valoare=0;
srand(time(0));
}

void Zar::arunca(){
valoare=(rand()%6)+1;
}

int Zar::getValoare(){
	arunca();
    return valoare;
}

