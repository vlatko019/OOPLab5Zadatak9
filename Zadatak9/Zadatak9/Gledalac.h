#pragma once
#include <iostream>

using namespace std;

class Gledalac {
private:
	char* Ime;
	char* Prezime;
	double Starost;
	double OcenaFilma;
	bool Prisutan;

public:
	Gledalac();
	~Gledalac();
	double VratiOcenu() { return OcenaFilma; };
	double VratiStarost() { return Starost; };
	bool PrisutanQ() { return Prisutan; };
	friend istream& operator>>(istream& Ulaz, Gledalac& a);
	friend ostream& operator<<(ostream& Izlaz, Gledalac& a);
};

