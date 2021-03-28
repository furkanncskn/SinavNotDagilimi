#pragma once
#include <array>
#include <string>

class sinif {
public:
	// Dizinin eleman sayisini belirleme
	static const size_t ogrenciSayisi = 10;
	// Constructor - ders ismi ve notlar dizisine ilk deger atama
	sinif(const std::string&, const std::array<int, ogrenciSayisi >&);
	// Kurs ismini constructor haricide alma
	void setKursIsim(const std::string &);
	// Kurs ismini return etme
	std::string getKursIsim() const;
	void hesaplaNotlar() const;
	// Minimum not bul
	int getMinimum() const;
	// Maksimum not bul
	int getMaksimum() const;
	// Ortalam not bul
	double getOrtalama() const;
	// Not dagilim cubugu
	void notDagilim() const;
	// Ekrana not bilgisi yazdýrma
	void printSinif() const;

private:
	std::string dersIsim;
	std::array<int, ogrenciSayisi > notlar;
};




