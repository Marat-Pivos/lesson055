#include "LOGIC.h"

int main() {
	int aclass[SIZE];
	int bclass[SIZE];
	int cclass[SIZE];

	for (int i = 0; i < SIZE; i++) {
		aclass[i] = rand() % (MAX_MARK - MIN_MARK) + MIN_MARK;
		bclass[i] = rand() % (MAX_MARK - MIN_MARK) + MIN_MARK;
		cclass[i] = rand() % (MAX_MARK - MIN_MARK) + MIN_MARK;
	}

	double resulta = get_mid_mark_classa(aclass);
	double resultb = get_mid_mark_classa(bclass);
	double resultc = get_mid_mark_classa(cclass);

	cout << "Mid mark of class a - " << resulta <<
		", Mid mark of class b - " << resultb << 
		", Mid mark of class c - " << resultc << endl;

	return 0;

}