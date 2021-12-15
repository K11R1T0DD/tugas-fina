#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void menu();
void OrdeVector(int &a);
void cekOrderan(int &a);
void batalPesanan(int &a);
void laporanKeuangan();

string nama[10], noWa[10], tipe[10];
int hargatotal[10], kategori[10], hargatotalH = 0;

int main() {

	int a = 0, c = 0;
	int pilihan;
	char kembali;

	menu();
	cout << "PILIH [1-4] : ";
	cin >> pilihan;
	while (pilihan != 4) {

		switch (pilihan) {
			case 1: OrdeVector(a);
					break;
			case 2: cekOrderan(a);
					break;
			case 3: laporanKeuangan();
					break;
			default: cout << "PILIHAN ANDA TIDAK ADA" << endl;
		}

	x:

		cout << "KEMBALI?[Y/N] : "; cin >> kembali;
		if (kembali == 'Y') {
			menu();
			cout << "PILIH [1-4] : "; cin >> pilihan;
		}
		else if (kembali == 'N') {
			break;
		}
		else {
			goto x;
		}
	}
	return 0;

}

void menu() {
	
	system("cls");
	cout << "======================" << endl;
	cout << "   ZypherusXX STORE   " << endl;
	cout << "======================" << endl;
	cout << "[1].ORDER VECTOR      " << endl;
	cout << "[2].CEK ORDERAN       " << endl;
	cout << "[3].LAPORAN KEUANGAN  " << endl;
	cout << "[4].EXIT              " << endl;
	cout << "======================" << endl;

}

void OrdeVector(int &a) {

	int jvector, art, harga = 0, hargap = 0, hargag = 0, kualitas;

	system("cls");
	cout << "INPUT NAMA CLIENT     : "; cin.ignore(); getline(cin, nama[a]);
	cout << "INPUT WHATSAPP CLIENT : "; cin.ignore(); getline(cin, noWa[a]);

	x:
	system("cls");
	cout << "    << PILIHAN JENIS VECKTOR >> " << endl;
	cout << "===================================" << endl;
	cout << "[1].VECTOR NATURE STYLE     " << endl;
	cout << "[2].VECTOR OBAMA HOPE STYLE " << endl;
	cout << "[3].VECTOR BIG HEAD STYLE   " << endl;
	cout << "[4].VECTOR LINE ART STYLE   " << endl;
	cout << "[5].VECTOR POP UP STYLE     " << endl;
	cout << "===================================" << endl;
	cout << "MASUKKAN PILIHAN[1-5] : ";
	cin >> jvector;
	
	system("cls");
	if (jvector == 1) {
		cout << "===================================" << endl;
		cout << "|       Vector Nature Style       |" << endl;
		cout << "|=================================|" << endl;
		cout << "|      TIPE       |     HARGA     |" << endl;
		cout << "|=================================|" << endl;
		cout << "|[1].ONLY FACE    |   Rp70.000    |" << endl;
		cout << "|[2].HALF BODY    |   Rp100.000   |" << endl;
		cout << "|[3].FULL FACE    |   Rp120.000   |" << endl;
		cout << "===================================" << endl;
		cout << "MASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga = 70000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga = 100000;
		}
		else if (art == 2) {
			tipe[a] = "FULL BODY ";
			harga = 120000;
		}
		else {
			goto x;
		}
	}
	else if (jvector == 2) {
		cout << "===================================" << endl;
		cout << "|     VECTOR OBAMA HOPE STAYLE    |" << endl;
		cout << "===================================" << endl;
		cout << "|      TIPE       |     HARGA     |" << endl;
		cout << "|=================================|" << endl;
		cout << "|[1].ONLY FACE    |   Rp50.000    |" << endl;
		cout << "|[2].HALF BODY    |   Rp75.000    |" << endl;
		cout << "|[3].FULL FACE    |   Rp100.000   |" << endl;
		cout << "===================================" << endl;
		cout << "MASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga = 50000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga = 75000;
		}
		else if (art == 3) {
			tipe[a] = "FULL BODY ";
			harga = 100000;
		}
		else {
			goto x;
		}
	}
	else if (jvector == 3) {
		cout << "===================================" << endl;
		cout << "|      VECTOR BIG HEAD STYLE      |" << endl;
		cout << "|=================================|" << endl;
		cout << "|      TIPE       |     HARGA     |" << endl;
		cout << "|=================================|" << endl;
		cout << "|[1].FULL BODY    |   Rp75.000    |" << endl;
		cout << "===================================" << endl;
		cout << "MASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "FULL BODY";
			harga = 75000;
		}
		else {
			goto x;
		}
	}
	else if (jvector == 4) {
		cout << "===================================" << endl;
		cout << "|      VECTOR LINE ART STYLE      |" << endl;
		cout << "|=================================|" << endl;
		cout << "|      TIPE       |     HARGA     |" << endl;
		cout << "|=================================|" << endl;
		cout << "|[1].HALF BODY    |   Rp50.000    |" << endl;
		cout << "|[2].FULL FACE    |   Rp75.000   |" << endl;
		cout << "===================================" << endl;
		cout << "MASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga = 50000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga = 75000;
		}
		else {
			goto x;
		}
	}
	else if (jvector == 5) {
		cout <<"===================================" << endl;
		cout <<"|       VECTOR POP ART STYLE      |" << endl;
		cout <<"|=================================|" << endl;
		cout <<"|      TIPE       |     HARGA     |" << endl;
		cout <<"|=================================|" << endl;
		cout <<"|[1].ONLY FACE    |   Rp50.000    |" << endl;
		cout <<"|[2].HALF BODY    |   Rp75.000    |" << endl;
		cout <<"|[3].FULL FACE    |   Rp100.000   |" << endl;
		cout <<"===================================" << endl;
		cout <<"MASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga = 50000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga = 75000;
		}
		else if (art == 3) {
			tipe[a] = "FULL BODY ";
			harga = 100000;
		}
		else {
			goto x;
		}
	}
	else {
		goto x;
	}

	b:
	cout << "===================================" << endl;
	cout << "| KATEGORI PENGERJAAN  |  HARGA   |" << endl;
	cout << "===================================" << endl;
	cout << "|[1].KILAT (1 DAYS)    | Rp200000 | " << endl;
	cout << "|[2].EXPRESS (3 DAYS)  | Rp100000 | " << endl;
	cout << "|[3].REGULAR (7 DAYS)  | FREE     | " << endl;
	cout << "===================================" << endl;
	cout << "KATEGORI[1-3] : ";
	cin >> kategori[a];
		if (kategori[a] == 1) {
		hargap = hargap + 20000;
		}
		else if (kategori[a] == 2) {
		hargap = hargap + 10000;
		}
		else if (kategori[a] == 3) {
		hargap = 0;
		}
		else {
			goto b;
		}
	c:
	cout <<"===================================" << endl;
	cout <<"|   KUALITAS FOTO      |  HARGA   |" << endl;
	cout <<"===================================" << endl;
	cout <<"|[1].HARD              | Rp300000 |" << endl;
	cout <<"|[2].MEDIUM            | Rp200000 |" << endl;
	cout <<"|[3].EASY              |  FREE    |" << endl;
	cout <<"===================================" << endl;
	cout <<"KATEGORI[1-3] : ";
	cin >> kualitas;
		if (kualitas == 1) {
		hargag = hargag + 30000;
		}
		else if (kualitas == 2) {
		hargag = hargag + 20000;
		}
		else if (kualitas == 3) {
		hargag = 0;
		}
		else {
			goto c;
		}

	hargatotal[a] = harga + hargap + hargag;
	a++;

}


void cekOrderan(int &a) {

	int ukuran = sizeof(kategori) / sizeof(*kategori);
	int  status;

	cout << "===============================" << endl;
	cout << "| NO |   NAMA\t| HARGA TOTAL |" << endl;
	cout << "===============================" << endl;
	for (int i = 1; i < ukuran; i++) {
		for (int x = 0; x < ukuran - 1; x++) {
			if (kategori[x] > kategori[x + 1]) {
				
			}
		}	
	}	
	
	cout << endl;
	cout << "[1].FINISH " << endl;
	cout << "[2].CANCEL " << endl;
	cout << "[3].KEMBALI " << endl;
	cout << "STATUS PESANANAN : "; cin >> status;
	if (status == 1) {
		batalPesanan(a);
	}
	else if (status == 2) {
		batalPesanan(a);
	}
	else if (status == 3) {
		
	}
}

void batalPesanan(int &a) {

	int x;

	cout << "PESANAN KE [1-" << a << "] :"; cin >> x;
	x = x - 1;

	hargatotalH = hargatotal[x] + hargatotalH;

	for (int i = x; i < a; i++) {
		nama[x] = nama[x + 1];
		noWa[x] = noWa[x + 1];
		hargatotal[x] = hargatotal[x + 1];
		tipe[x] = tipe[x + 1];
	}
	a = a - 1;

}

void laporanKeuangan(){

	cout << "TOTAL PENDAPATAN" << endl;
	cout << hargatotalH << endl;

}


\

