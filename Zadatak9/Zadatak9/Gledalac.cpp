#include "Gledalac.h"

Gledalac::Gledalac() {
	Ime = new char[30];
	Prezime = new char[30];
	Starost = 0;
	OcenaFilma = 0;
	Prisutan = 0;
}


Gledalac::~Gledalac() {

}

istream& operator>>(istream& Ulaz, Gledalac& a) {
	Ulaz >> a.Prisutan;
	if (a.Prisutan) {
		Ulaz
			>> a.Ime
			>> a.Prezime
			>> a.Starost
			>> a.OcenaFilma;
			
	}

	return Ulaz;
}

ostream& operator<<(ostream & Izlaz, Gledalac& a) {
	if (a.Prisutan) {
		Izlaz
			<< a.Ime << " "
			<< a.Prezime << " "
			<< a.OcenaFilma << " "
			<< a.Starost << " "
			<< "Prisutan\n";
	}
	else {
		Izlaz
			<< "Nije prisutan\n";
	}

	return Izlaz;
}
