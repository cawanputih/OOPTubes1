#include "makhluk.h"

makhluk::makhluk() {
	int x = rand() % 100;
	int y = rand() % 100;
	P.set(x, y);
	int arah = rand() % 8;
}

void makhluk::bergerak() {
	/*
	0 : timur
	1 : tenggara
	2 : seltan
	3 : barat daya
	4 : barat 
	5 : barat laut
	6 : utara
	7 : timur laut
	
	*/
	
		switch (arah) {
		case 0 : P.move(power,0) ; break;
		case 1 : P.move(power,-power) ; break;
		case 2 : P.move(0,-power) ; break;
		case 3 : P.move(-power,-power) ; break;
		case 4 : P.move(-power,0) ; break;
		case 5 : P.move(-power,power) ; break;
		case 6 : P.move(0,power) ; break;
		case 7 : P.move(power,power) ; break;
		}
		
	//jika keluar dari bidang, bagaimana?
}

Point makhluk::getlok() { 
	return P; 
}
