#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
	return p * l;
 }

float lingkaran(float r) {
	return 3.14 * r * r;
}

float segitiga(float a, float t) {
	return 0.5 * a * t;
}

int main() {
	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;
	do {
		cout << "\n\n===========";
		cout << "\n M E N U";
		cout << "\n===========";
		cout << "\n 1. Luas Persegi Panjang";
		cout << "\n 2. Luas Lingkaran";
		cout << "\n 3. Luas Segitiga";
		cout << "\n 4. Keluar";
		cout << "\n Pilihan (1/2/3/4) : ";
		cin >> pilihan;

		switch (pilihan) {
		case 1:
			cout << "Masukkan Panjang = ";
			cin >> panjang;
			cout << "Masukkan Lebar = ";
			cin >> lebar;
			cout << "\n Luas Persegi Panjang = " << persegipanjang(panjang, lebar);
			break;
		case 2:
			cout << "Masukkan jari-jari = ";
			cin >> jejari;
			cout << "\n Luas Lingkaran = " << lingkaran(jejari);
			break;
		case 3:
			cout << "Masukkan Alas = ";
			cin >> alas;
			cout << "Maskukkan Tinggi = ";
			cin >> tinggi;
			cout << "\n Luas Segitiga = " << segitiga(alas, tinggi);
			break;
		case 4:
			break;
		default:
			cout << "Pilihan Salah !!";
			break;
		}
	} while (pilihan !=4);
}