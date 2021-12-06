#include <iostream>
#include <string>
using namespace std;

void login();
void menu();
void OrdeVector();

int main() {

	login();

	return 0;
}

void login() {

	string user = "ungu", pw = "qwerty21", u, p;
	
	cout << endl << endl;
	cout << "\t\t\t\t\tMASUKKAN USERNAME : ";
	cin >> u;
	cout << "\t\t\t\t\tMASUKKAN PASSWORD : ";
	cin >> p;

	if (u == user && p == pw) {
		menu();

	}
	else if (u == user && p != pw) {
		cout << "\t\t\t\t\tKATA SANDI ANDA SALAH" << endl;
	}
	else if (u != user && p == pw) {
		cout << "\t\t\t\t\tUSERNAME ANDA SALAH" << endl;
	}
	else {
		cout << "\t\t\t\t\tUSRENAME DAN PASWORD SALAHA" << endl;
	}

}

void menu() {
	
	int pilihan;
	char kembali;

	system("cls");
	cout << "\t\t\t\t\t======================" << endl;
	cout << "\t\t\t\t\t   ZypherusXX STORE   " << endl;
	cout << "\t\t\t\t\t======================" << endl;
	cout << "\t\t\t\t\t[1].Order Vector      " << endl;
	cout << "\t\t\t\t\t[2].Cek Orderan       " << endl;
	cout << "\t\t\t\t\t[3].Laporan Keuangan  " << endl;
	cout << "\t\t\t\t\t[4].Keluar            " << endl;
	cout << "\t\t\t\t\t======================" << endl;
	cout << "\t\t\t\t\tPILIH [1-4] : ";
	cin >> pilihan;

	while (pilihan != 4) {

		if (pilihan == 1) {
			OrdeVector();
		}
		else if (pilihan == 2) {

		}
		
	x:

		cout << "\t\t\t\t\tKEMBALI?[Y/N] : "; cin >> kembali;
		if (kembali == 'Y') {
			menu();
			cout << "\t\t\t\t\tPILIH [1-4] : "; cin >> pilihan;
		}
		else if (kembali == 'N') {
			break;
		}
		else {
			goto x;
		}
	}
}

void OrdeVector() {

	string nama[100], noWa[100], tipe[100];
	int jumlah, jvector, a = 0, art, harga[100] = {0}, kategori, hargap[100], hargag[100], kualitas;

	cout << "\t\t\t\t\tMASUKKAN NAMA PELANGGAN     : "; 
	cin.ignore(); getline(cin, nama[a]);
	cout << "\t\t\t\t\tMASUKKAN NOMER WA PELANGGAN : "; 
	cin.ignore(); getline(cin, noWa[a]);

	system("cls");
	cout << "\t\t\t\t\t   << PILIHAN JENIS VECKTOR >>     " << endl;
	cout << "\t\t\t\t\t===================================" << endl;
	cout << "\t\t\t\t\t[1].VECTOR NATURE STYLE     " << endl;
	cout << "\t\t\t\t\t[2].VECTOR OBAMA HOPE STYLE " << endl;
	cout << "\t\t\t\t\t[3].VECTOR BIG HEAD STYLE   " << endl;
	cout << "\t\t\t\t\t[4].VECTOR LINE ART STYLE   " << endl;
	cout << "\t\t\t\t\t[5].VECTOR POP UP STYLE     " << endl;
	cout << "\t\t\t\t\t===================================" << endl;
	cout << "\t\t\t\t\tMASUKKAN PILIHAN[1-5] : ";
	cin >> jvector;

	if (jvector == 1) {
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t|       Vector Nature Style       |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|      TIPE       |     HARGA     |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|[1].ONLY FACE    |   Rp70.000    |" << endl;
		cout << "\t\t\t\t\t|[2].HALF BODY    |   Rp100.000   |" << endl;
		cout << "\t\t\t\t\t|[3].FULL FACE    |   Rp120.000   |" << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\tMASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga[a] = 70000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga[a] = 100000;
		}
		else if (art == 2) {
			tipe[a] = "FULL BODY ";
			harga[a] = 120000;
		}
	}
	else if (jvector == 2) {
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t|     VECTOR OBAMA HOPE STAYLE    |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|      TIPE       |     HARGA     |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|[1].ONLY FACE    |   Rp50.000    |" << endl;
		cout << "\t\t\t\t\t|[2].HALF BODY    |   Rp75.000    |" << endl;
		cout << "\t\t\t\t\t|[3].FULL FACE    |   Rp100.000   |" << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\tMASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga[a] = 50000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga[a] = 75000;
		}
		else if (art == 3) {
			tipe[a] = "FULL BODY ";
			harga[a] = 100000;
		}
	}
	else if (jvector == 3) {
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t|      VECTOR BIG HEAD STYLE      |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|      TIPE       |     HARGA     |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|[1].FULL BODY    |   Rp75.000    |" << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\tMASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "FULL BODY";
			harga[a] = 75000;
		}
	}
	else if (jvector == 4) {
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t|      VECTOR LINE ART STYLE      |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|      TIPE       |     HARGA     |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|[2].HALF BODY    |   Rp50.000    |" << endl;
		cout << "\t\t\t\t\t|[3].FULL FACE    |   Rp75.000   |" << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\tMASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga[a] = 50000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga[a] = 75000;
		}
	}
	else if (jvector == 5) {
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t|       VECTOR POP ART STYLE      |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|      TIPE       |     HARGA     |" << endl;
		cout << "\t\t\t\t\t|=================================|" << endl;
		cout << "\t\t\t\t\t|[1].ONLY FACE    |   Rp50.000    |" << endl;
		cout << "\t\t\t\t\t|[2].HALF BODY    |   Rp75.000    |" << endl;
		cout << "\t\t\t\t\t|[3].FULL FACE    |   Rp100.000   |" << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\tMASUKKAN TIPE : ";
		cin >> art;
		if (art == 1) {
			tipe[a] = "ONLY FACE";
			harga[a] = 50000;
		}
		else if (art == 2) {
			tipe[a] = "HALF BODY";
			harga[a] = 75000;
		}
		else if (art == 3) {
			tipe[a] = "FULL BODY ";
			harga[a] = 100000;

		}

	}

	cout << "\t\t\t\t\t===================================" << endl;
	cout << "\t\t\t\t\t| KATEGORI PENGERJAAN  |  HARGA   |" << endl;
	cout << "\t\t\t\t\t===================================" << endl;
	cout << "\t\t\t\t\t|[1].KILAT (1 DAYS)    | Rp200000 | " << endl;
	cout << "\t\t\t\t\t|[2].EXPRESS (3 DAYS)  | Rp100000 | " << endl;
	cout << "\t\t\t\t\t|[3].REGULAR (7 DAYS)  | FREE     | " << endl;
	cout << "\t\t\t\t\t===================================" << endl;
	cout << "\t\t\t\t\t KATEGORI[1-3] : ";
	cin >> kategori;
	if (kategori == 1) {
		hargap[a] = hargap[a] + 20000;
	}
	else if (kategori == 2) {
		hargap[a] = hargap[a] + 10000;
	}
	else if (kategori == 3) {
		hargap[a] = 0;
	}

	cout << "\t\t\t\t\tJUMALAH PESANAN : "; 
	cin >> jumlah;
	for (int i = 1; i <= jumlah; i++) {
		cout << "\t\t\t\t\tGAMBAR " << i << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t|   KUALITAS FOTO      |  HARGA   |" << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t|[1].HARD              | Rp300000 |" << endl;
		cout << "\t\t\t\t\t|[2].MEDIUM            | Rp200000 |" << endl;
		cout << "\t\t\t\t\t|[3].EASY              |  FREE    |" << endl;
		cout << "\t\t\t\t\t===================================" << endl;
		cout << "\t\t\t\t\t KATEGORI[1-3] : ";
		cin >> kualitas;
		if (kualitas == 1) {
			hargag[a] = hargag[a] + 30000;
		}
		else if (kualitas == 2) {
			hargag[a] = hargag[a] + 20000;
		}
		else if (kualitas == 3) {
			hargag[a] = 0;
		}
	}

	harga[a] = harga[a] + hargap[a] + hargag[a];
	cout << harga[a];
	a++;
	

	



	

	

}