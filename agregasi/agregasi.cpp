

#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu(*dini*);
	ibu* varIbu2 = new ibu(*novi*);
	anak* varAnak1 = new anak(*tono*);
	anak* varAnak2 = new anak(*rini*);
	anak* varAnak3 = new anak(*dewi*);

	varIbu->tambahAANAK(varAnak1);
	varIbu->tambahAANAK(varAnak2);
	varIbu2->tambahAANAK(varAnak3);
	varIbu-2>tambahAANAK(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;



}
