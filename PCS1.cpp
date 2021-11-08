#include <iostream>
#include "PCS1.h"
#include "c1.h"
#include "c2.h"
#include "c3.h"

using namespace std;

void PCS1::PCS1S1(){
	c1 PCS1S1_c1;
	c2 PCS1S1_c2;
	cout << " # Demarage de PCS1S1" << endl;
	PCS1S1_c1.AfficherService();
	PCS1S1_c2.AfficherService();
}
void PCS1::PCS1S2() {
	c3 PCS1S1_c3;
	cout << " # Demarage de PCS1S2" << endl;
	PCS1S1_c3.AfficherService();
}
