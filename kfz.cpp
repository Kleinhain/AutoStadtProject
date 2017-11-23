#include <iostream>
#include <string>
#include "kfz.h"
using namespace std;



// Konstruktor
Kfz::Kfz(string fname, string hersteller, zustand s)
{
	name = fname;
	hersteller = hersteller;
	status = s;
}

// Deconstructor
Kfz::~Kfz()
{

}

// Zugriff auf herrsteller private variable
string Kfz::getHersteller()
{
	return hersteller;
}

void Kfz::setHersteller(string nname)
{
	hersteller = nname;
}

string Kfz::getName()
{
	return name;
}

void Kfz::setName(string nname)
{
	name = nname;
}


void Kfz::setStatus(zustand s)
{
	status = s;
}

Kfz::zustand Kfz::getStatus()
{
	return status;
}
