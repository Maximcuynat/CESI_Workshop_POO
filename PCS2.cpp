#include <iostream>
#include "PCS2.h"
#include "c1.h"
#include "c2.h"
#include "c3.h"

using namespace std;

void PCS2::PCS2S1() {
	c1 PCS2S1_c1;
	c3 PCS2S1_c3;
	cout << " # Demarage de PCS2S1" << endl;
	PCS2S1_c1.AfficherService();
	PCS2S1_c3.AfficherService();
}
