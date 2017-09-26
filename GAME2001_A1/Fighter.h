//GAME 2001 (Data Structures) Assignment 1
//Authors: David Lafantaisie, Hercules Dias Campos

#pragma once

#include <iostream>
#include <string>

#include "Fighter.h"

using std::string;
using std::cout;
using std::endl;

class Fighter {
private:
	string fName;
	int damage;
	int structStrength;

public:
	Fighter(string, int, int);
	~Fighter() {}
	void reduceStructure(int);
	string getFName();
	int getStructStrength();
	void getInfo();
};

Fighter::Fighter(string n, int d, int s) {
	fName = n;
	damage = d;
	structStrength = s;
}

void Fighter::reduceStructure(int dm) {	structStrength -= dm; }

string Fighter::getFName() { return fName; }

int Fighter::getStructStrength() { return damage; }

void Fighter::getInfo() {
	cout << endl;
}