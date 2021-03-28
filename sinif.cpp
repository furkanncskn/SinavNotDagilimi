#include "sinif.h"
#include <iostream>
#include <iomanip>

using namespace std;

sinif::sinif(const string& isim, const array<int, ogrenciSayisi >& notDizi):dersIsim(isim),notlar(notDizi){}

void sinif::setKursIsim(const string& isim) {
	dersIsim = isim;
}

std::string sinif::getKursIsim() const {
	return dersIsim;
}

void sinif::hesaplaNotlar() const {

	cout << endl;
	cout << "Sinif ortalamasi: " << getOrtalama() << endl;
	cout << "En dusuk not: " <<  getMinimum() << endl;
	cout << "En yuksek not: " << getMaksimum() << endl;
}

int sinif::getMinimum() const {
	int enDusukNot = 100;

	for (int item : notlar) {
		if (item < enDusukNot) enDusukNot = item;
	}
	return enDusukNot;
}

int sinif::getMaksimum() const {
	int enBuyukNot = 0;
	for (int item : notlar) {
		if (item > enBuyukNot) enBuyukNot = item;
	}
	return enBuyukNot ;
}

double sinif::getOrtalama() const {
	int ortalama=0;
	for (int item : notlar) {
		ortalama += item;
	}

	return static_cast<double>(ortalama)/10;

}

void sinif::notDagilim() const {
	cout << "\nNot Dagilim:" << endl;

	const size_t dagilimBüyüklük = 11;
	array < unsigned int, dagilimBüyüklük > dagilim = {};

	for (int item : notlar) {
		++dagilim[item / 10];
	}

	for (size_t count = 0; count < dagilimBüyüklük; count++) {
		if (0 == count) cout << setw(12) <<  "  0-9: ";
		else if (10 == count) cout << setw(12) << "  100: ";
		else cout << setw(7) << count * 10 << "-" << (count * 10) + 9 << ": ";

		for (unsigned int yildiz = 0; yildiz < dagilim[count]; yildiz++) {
			cout << "*";
		}
		cout << endl;
	}
}

void sinif::printSinif() const{
	cout << "Notlar: " << endl;

	for (size_t ogrenci = 0; ogrenci < notlar.size(); ogrenci++) {
		cout << "Ogrenci " << setw(2) << ogrenci + 1 << ": " << setw(3) << notlar[ogrenci] << endl;
	}
}