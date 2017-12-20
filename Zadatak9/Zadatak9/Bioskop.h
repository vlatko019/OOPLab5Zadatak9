#pragma once

template <class A_Type> 
class Bioskop {

private:
	A_Type** Sedista;
	int DimenzijaX;
	int DimenzijaY;

public:
	Bioskop();
	Bioskop(int X, int Y);
	~Bioskop();
	double ProsekGodina();
	double ProsecnaOcena();
	inline A_Type operator()(int X, int Y) { return Sedista[X][Y]; };
	//A_Type add(A_Type x, A_Type y);
};

template <class A_Type> 
Bioskop<A_Type>::Bioskop() {
	DimenzijaX = 20;
	DimenzijaY = 20;
	
	Sedista = new A_Type*[DimenzijaX];

	for (int i = 0; i < DimenzijaX; i++) {
		Sedista[i] = new A_Type[DimenzijaY];
	}

	for (int i = 0; i < DimenzijaX; i++) {
		for (int j = 0; j < DimenzijaY; j++) {
			Sedista[i][j] = A_Type();
		}
	}
}

template <class A_Type>
Bioskop<A_Type>::Bioskop(int X, int Y) {
	DimenzijaX = X;
	DimenzijaY = Y;

	Sedista = new A_Type*[DimenzijaX];

	for (int i = 0; i < DimenzijaX; i++) {
		Sedista[i] = new A_Type[DimenzijaY];
	}

	for (int i = 0; i < DimenzijaX; i++) {
		for (int j = 0; j < DimenzijaY; j++) {
			Sedista[i][j] = A_Type();
		}
	}
}

template<class A_Type>
Bioskop<A_Type>::~Bioskop() {
	if (Sedista != 0) {
		for (int i = 0; i < DimenzijaX; i++) {
			delete[] Sedista[i];
		}

		delete[] Sedista;
	}
}

template <class A_Type>
double Bioskop<A_Type>::ProsekGodina() {
	double avg = 0;

	for (int i = 0; i < DimenzijaX; i++) {
		for (int j = 0; j < DimenzijaY; j++) {
			avg += Sedista[i, j]->VratiStarost();
		}
	}

	avg /= DimenzijaX * DimenzijaY;

	return avg;
}

template<class A_Type>
double Bioskop<A_Type>::ProsecnaOcena() {
	double avg = 0;

	for (int i = 0; i < DimenzijaX; i++) {
		for (int j = 0; j < DimenzijaY; j++) {
			if (Sedista[i, j]->PrisutanQ()) {
				avg += Sedista[i, j]->VratiOcenu();
			}
		}
	}

	avg /= DimenzijaX * DimenzijaY;

	return avg;
	
}
