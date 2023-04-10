#include <iostream>
using namespace std;

class Mahasiswa {
public :
	int nim;
	string nama;
	void tampil() {
		cout << "\nNIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class MataKuliah {
private :
	int sks;
	string kode;
	string namaMk;
public:
	void inputMk() {
		cout << "\nMasukkan jumlah Sks = ";
		cin >> sks;
		cout << "\nMasukkan Kode Mk = ";
		cin >> kode;
		cout << "\nMasukkan Nama Mk = ";
		cin >> namaMk;
	}

	void tampilMK() {
		cout << "\nJumlah Sks = " << sks;
		cout << "\nKode MK = " << kode;
		cout << "\nNama Mk = " << namaMk << endl;
	}
};

int main() {

	Mahasiswa mhs;
	MataKuliah mk;

	cout << "\nMasukkan NIM = ";
	cin >> mhs.nim;

	cout << "\nMasukkan Nama = ";
	cin >> mhs.nama;

	mk.inputMk();
	mhs.tampil();
	mk.tampilMK();

	system("pause");
}