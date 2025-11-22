#include <iostream>
using namespace std;


int main() 
{
	double harga, diskon, jumblahDiskon, hargaSetelahDiskon;

	cout << "Masukkan:"<< endl;
	cout << "Harga barang(Rp) =";
	cin >> harga;

	cout << "Diskon barang(%)=";
	cin >> diskon;

	jumblahDiskon = harga * (diskon / 100);
	hargaSetelahDiskon = harga - jumblahDiskon;

	cout << "\nHasil:" << endl;
	cout << "Jumblah diskon=Rp" << jumblahDiskon << endl;
	cout << "hargaSetelahDiskon=" << hargaSetelahDiskon << endl;

	cin.get();
}