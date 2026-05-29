#include "LOGIC.h"

int main() {
	int aclass[SIZE];
	int bclass[SIZE];
	int cclass[SIZE];

	for (int i = 0; i < SIZE; i++) {
		aclass[i] = rand() % (MAX - MIN) + MIN;
		bclass[i] = rand() % (MAX - MIN) + MIN;
		cclass[i] = rand() % (MAX - MIN) + MIN;
	}

	double resulta = get_mid_mark_classa(aclass);
	double resultb = get_mid_mark_classa(bclass);
	double resultc = get_mid_mark_classa(cclass);

	cout << "Mid mark of class a - " << resulta <<
		", Mid mark of class b - " << resultb << 
		", Mid mark of class c - " << resultc << endl;

	return 0;

}