// Zadatak9.cpp : Defines the entry point for the console application.
//

#include "Bioskop.h"
#include "Gledalac.h"
#include <iostream>

#define X 1
#define Y 3

int main() {
	Bioskop<Gledalac> Cinema(X, Y);
	Gledalac Neki[X*Y];

	int k = 0;

	for (int i = 0; i < X; i++) {
		for (int j = 0; j < Y; j++) {
			
			std::cin >> Neki[k];
			Cinema(i, j) = Neki[k];
			std::cout << Neki[k] << endl;
			k++;
		}
	}

	std::cout << Cinema.ProsecnaOcena() << " je prosecna ocena\n" << Cinema.ProsekGodina() << " je prosek godina\n";

	std::cin >> k;
	return 0;
}