#include <iostream>
using namespace std;


int main() {
	char nama[30], pembeli[30];
	int harga, jumlah, total, jumtotal, jumbayar, kembalian, potongan;
	string input, kode;

	awal:
	cout << "       TOKO BAGAS ALFIA JAYA      " << endl;
	cout << "===================================" << endl;
	cout << "Nama Pembeli    :";
	cin >> pembeli;
	cout << "pilihan barang yang tersedia" << endl;
	cout << "01 - Laptop Asus RAM 4GB - Rp. 5000.000" << endl;
	cout << "02 - Mouse Wireless - Rp. 150.000" << endl;
	cout << "03 - Mikrotik RB941 - Rp. 600.000" << endl;


	cout << endl;
	cout << endl;
	cout << "Barang yang dipilih    :";
	cin >> kode;
	cout << "jumlah beli   :";
	cin >> jumlah;


	if (kode == "01") {
		cout << "Laptop Asus RAM 4GB";
		harga = 5000000;
	}
	else if (kode == "02") {
		cout << "Mouse Wireless";
		harga = 150000;
	}
	else if (kode == "03") {
		cout << "Mikrotik RB941";
		harga = 600000;
	}
	else {
		cout << "Barang yang dibeli tidak tersedia";
	}

	cout << endl;
	cout << "====================================" << endl;
	cout << "struk pembayaran" << endl;
	cout << "=====================================" << endl;
	cout << "Nama pembeli      :" << pembeli << endl;
	cout << "Harga             :" << harga << endl;
	cout << "jumlah            :" << jumlah << endl;


	total = harga * jumlah;

	cout << "Total     :" << total << endl;

	cout << endl;

	if (total == 100000 || total < 500000) {
		potongan = 0.05 * total;
	}
	else if (total > 500000) {
		potongan = 0.10 * total;
	}
	else {
		potongan = 0;
	}
	cout << "potongan      :" << potongan << endl;
	cout << "================================" << endl;

	jumtotal = total - potongan;

	cout << "total keseluruhan   :" << jumtotal << endl;
	cout << "Uang bayar        :";
	cin >> jumbayar;

	kembalian = jumbayar - jumtotal;

	cout << "Uang Kembalian  : " << kembalian << endl;
	cout << "========================================" << endl;

	cout << "Mau input lagi [Y/N] : ";
	cin >> input;

	if (input == "y" || input == "Y") {
		goto awal;
	}
	else {
		return 0;
	}

}