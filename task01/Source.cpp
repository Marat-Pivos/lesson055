#include "LOGIC.h"

int main() {
	int aclass[SIZE];
	int bclass[SIZE];
	int cclass[SIZE];

	for (int i = 0; i < SIZE; i++) {
		aclass[i] = rand() % 10 + 1;
		bclass[i] = rand() % 10 + 1;
		cclass[i] = rand() % 10 + 1;
	}

	return 0;

}