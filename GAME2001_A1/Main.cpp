//GAME 2001 (Data Structures) Assignment 1
//Authors: David Lafantaisie, Hercules Dias Campos

#include <iostream>
#include <string>
#include <fstream>

#include "Carrier.h"
#include "Fighter.h"

using std::string;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::fstream;

void loadCarriers(Carrier*, Carrier*);
void battle(Carrier *, Carrier*);
int main(void) {
	
	
	Carrier *c1, *c2;
	loadCarriers(c1, c2);
	battle(c1, c2);

	return 0;
}

void battle(Carrier* c1, Carrier* c2) {
	// TODO: implement.
}

void loadCarriers(Carrier* c1, Carrier* c2) { // thought doing it separately would unclutter the main function

	string name;
	int i1, i2;
	ifstream dataFile("Data.txt");

	dataFile.close();
}