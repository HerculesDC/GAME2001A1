//GAME 2001 (Data Structures) Assignment 1
//Authors: David Lafantaisie, Hercules Dias Campos

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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
	
	srand(time(NULL));
	Carrier *c1, *c2;
	loadCarriers(c1, c2);
	battle(c1, c2);

	return 0;
}

void battle(Carrier* c1, Carrier* c2) {
	Fighter * f1 = c1->launchNextFighter();
	Fighter * f2 = c2->launchNextFighter();
	
	while(f1->getStructStrength() >=0 && f2->getStructStrength() >=0){ // while both are alive
		bool turn = rand() % 2;
		if (turn == false) { // if the roll returns 0
			if (rand() % 101 >= 50) { // if hits
				int dam = rand() % (f1->getDamage() + 1); // damage calculator
				f2->reduceStructure(dam); //fighter 1 attacks fighter 2
				cout << f1->getFName() << " hits " << f2->getFName() << " for " << dam << " damage." << endl;
			} else 
				cout << f1->getFName() << " missed!" << endl; //if it misses
			turn = !turn; //reverses the turn
		} else {
			if (rand() % 101 >= 50) { // if hits
				int dam = rand() % (f1->getDamage() + 1); // damage calculator
				f2->reduceStructure(dam); //fighter 1 attacks fighter 2
				cout << f1->getFName() << " hits " << f2->getFName() << " for " << dam << " damage." << endl;
			} else
				cout << f1->getFName() << " missed!" << endl; //if it misses
			turn = !turn; //reverses the turn
		}

	}
	
		

}

void loadCarriers(Carrier* c1, Carrier* c2) { // thought doing it separately would unclutter the main function

	/*layed this function out like this so that the carriers and fighters can be properly loaded from the string and ints
	  The idea's to reuse them in the cin lines and call the appropriate constructors once the data is loaded.
	  Apparently, fighters have to be constructed outside, then loaded into the carrier*/
	string name;
	int i1, i2;
	Fighter *f1, *f2; //pointers to fighters
	ifstream dataFile("Data.txt");

	dataFile.close();
}