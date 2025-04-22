#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	string nama, ttl, alamat, kel, kec, agama, kawin, warga, berlaku, darah, kerja;
	int nik, rt;
	int ulang;
	
	do {
		cout << "=================KTP==================="<<endl;
		cout << "NIK\t    \t\t\t: ";
		cin >> nik;
		cout << "nama    \t\t\t: ";
		cin >> nama;
		cout << "tempat tanggal lahir\t\t: ";
		cin >> ttl;
		cout << "rt/rw\t\t\t\t: ";
		cin >> rt;
		cout << "kel/des \t\t\t: ";
		cin >> kel;
		cout << "kecamatan\t\t\t: ";
		cin >> kec;
		cout << "agama\t\t\t\t: ";
		cin >> agama;
		cout << "status perkawinan\t\t: ";
		cin >> kawin;
		cout << "status pekerjaan\t\t: ";
		cin >> kerja;
		cout << "kewarganegaraan\t\t\t: ";
		cin >> warga;
		cout << "berlaku hingga\t\t	: ";
		cin >> berlaku;
		cout << "gol. darah\t\t\t: ";
		cin >> darah;
		cout << "========================================="<< endl;
		
		cout << ""<<endl;
		cout << ""<<endl;
		cout << ""<<endl;
		
		cout << "=====================KTP===================="<< endl;
		cout << "||NIK    \t\t\t: " << nik << endl;
		cout << "||nama    \t\t\t: " << nama << endl;
		cout << "||tempat tanggal lahir \t\t: " << ttl << endl;
		cout << "||rt/rw \t\t\t: " << rt << endl;
		cout << "||kel/des\t\t\t: " << kel << endl;
		cout << "||kecamatan\t\t\t: " << kec << endl;
		cout << "||agama\t\t\t\t: " << agama << endl;
		cout << "||status perkwinan\t\t: " << kawin << endl;
		cout << "||status pekerjaan\t\t: " << kerja << endl;
		cout << "||kewarganegaaan\t\t: " << warga << endl;
		cout << "||beraku hingga\t\t\t: " << berlaku << endl;
		cout << "||gol. darah\t\t\t: " << darah << endl;
		cout << "============================================"<< endl;				
	
	
		cout << "input data lagi? (y=ya / no=tidak): ";
		cin >> ulang;
		cin.ignore();
	} while (ulang);
	
	cout << "terima kasih " << endl;
	getch();
	return 0;
	
	
}
