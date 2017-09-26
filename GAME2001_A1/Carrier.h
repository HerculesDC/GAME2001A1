//GAME 2001 (Data Structures) Assignment 1
//Authors: David Lafantaisie, Hercules Dias Campos

#pragma once

#include <iostream>
#include <string>

#include "Fighter.h"

using std::string;
using std::cout;
using std::endl;

class Carrier {
private:
	string name;
	Fighter* *bayList; //actually done to begin an array of pointers to fighters
	int maxBays;
	int numFighters;

public:
	Carrier(string, int);
	~Carrier() {};
	bool loadFighter(Fighter*);
	bool launchNextFighter();
	void getInfo(); // in the behaviors section of the assignment outline, this appears as "printInfo()"
	bool hasFighters();
	int getCapacity(); // not included in the class model, but described in the "behaviors" section
	int getNumFighters();
	string getName();
};

Carrier::Carrier(string n, int max) { 
	name = n;
	maxBays = max;
	numFighters = 0;
	bayList = new Fighter*[max]; // sets up how many pointers the array will hold
}

bool Carrier::loadFighter(Fighter* f) {
	
	if (numFighters < maxBays) {
		bayList[numFighters++] = f; // I still don't understand where we actually construct a proper fighter to put here...
		cout << "Fighter loaded into the bay" << endl;
		return true;
	} else {
		cout << "Bays full! Fighter not added..." << endl;
		return false;
	}

}

bool Carrier::launchNextFighter() {
	
	if (numFighters == 0) {
		cout << "Bays empty! No fighters to launch..." << endl;
		return false;
	} else {
		for (int i = 0; i < numFighters; i++)
			bayList[i] = bayList[(i + 1)];
		numFighters--;
		return true;
	}
}

void Carrier::getInfo() {
	cout << "Carrier's name: " << name << '.' << endl; //still needs implementing the fighter information part
}

bool Carrier::hasFighters() {
	if (numFighters > 0) return true;
	else return false;
}

int Carrier::getCapacity() { return maxBays; }

int Carrier::getNumFighters() { return numFighters; }

string Carrier::getName() { return name; }