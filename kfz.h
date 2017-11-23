#pragma once

#include <iostream>
#include <string>
using namespace std;

class Kfz
{


public:
	enum zustand
	{
		verfuegbar = 0,
		vermietet,
		reperatur,
	};

	//Konstruktor
	Kfz(string fname, string hersteller, zustand s);
	//Dekonstruktor
	~Kfz();



	// Variablen setzen
	string getHersteller();
	string getName();
	zustand getStatus();


	//Variable returnen
	void setHersteller(string nname);
	void setName(string nname);
	void setStatus(zustand s);
	
private:




	string name;
	string hersteller;
	zustand status;


};
	

