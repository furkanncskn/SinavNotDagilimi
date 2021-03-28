#include <iostream> 
#include <array>
#include "sinif.h"
using namespace std;

void main() {

	string isim = "Matematik";
	const array<int, sinif::ogrenciSayisi > notDizi = { 20,30,42,11,9,2,7,70,100,88 };
	sinif mySinif(isim, notDizi);

	mySinif.printSinif();
	cout << endl;

	cout << "Sinif ortalamasi: " << mySinif.getOrtalama() << endl;
	cout << "En kucuk deger: " << mySinif.getMinimum() << endl;
	cout << "En buyuk deger: " << mySinif.getMaksimum() << endl;
	
	mySinif.notDagilim();
}

