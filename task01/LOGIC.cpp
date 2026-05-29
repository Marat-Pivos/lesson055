#include "LOGIC.h"

double get_mid_mark_classa(int aclass[]) {
	double suma = 0;	

	for (int i = 0; i < SIZE; i++) {
		suma += aclass[i];
	
	}// ma - mi + mi

	return suma / SIZE;
}
double get_mid_mark_classb(int bclass[]) {	
	double sumb = 0;

	for (int i = 0; i < SIZE; i++) {
		sumb += bclass[i];
	}

	return sumb / SIZE;
}
double get_mid_mark_classc(int cclass[]) {
	double sumc = 0;

	for (int i = 0; i < SIZE; i++) {
		sumc += cclass[i];
	}

	return sumc / SIZE;
}