#include <iostream>
#include <string>

using namespace std;

class KTP {
private:
    string nama, ttl, alamat, kel, kec, agama, kawin, warga, berlaku, darah, kerja;
    int nik, rt;

public:
    void input() {
        cout<<"\n============== INPUT DATA KTP ==============" << endl;
        cout<< "NIK\t\t\t\t: ";
        cin>> nik;
        cout<< "Nama\t\t\t\t: ";
        cin>> nama;
        cin.ignore();
        cout<< "Tempat Tanggal Lahir\t\t: ";
        getline(cin, ttl);
        cout<< "RT/RW\t\t\t\t: ";
        cin>> rt;
        cout<< "Kel/Desa\t\t\t: ";
        cin>> kel;
        cout<< "Kecamatan\t\t\t: ";
        cin>> kec;
        cout<< "Agama\t\t\t\t: ";
        cin>> agama;
        cout<< "Status Perkawinan\t\t: ";
        cin>> kawin;
        cout<< "Pekerjaan\t\t\t: ";
        cin>> kerja;
        cout<< "Kewarganegaraan\t\t\t: ";
        cin>> warga;
        cout<< "Berlaku Hingga\t\t\t: ";
        cin>> berlaku;
        cout<< "Golongan Darah\t\t\t: ";
        cin>> darah;
    }

    void tampil(){
        cout<< "\n============== CETAK DATA KTP ==============" << endl;
        cout<< "|| NIK\t\t\t\t: " << nik << endl;
        cout<< "|| Nama\t\t\t\t: " << nama << endl;
        cout<< "|| TTL\t\t\t\t: " << ttl << endl;
        cout<< "|| RT/RW\t\t\t: " << rt << endl;
        cout<< "|| Kel/Desa\t\t\t: " << kel << endl;
        cout<< "|| Kecamatan\t\t\t: " << kec << endl;
        cout<< "|| Agama\t\t\t: " << agama << endl;
        cout<< "|| Status Perkawinan\t\t: " << kawin << endl;
        cout<< "|| Pekerjaan\t\t\t: " << kerja << endl;
        cout<< "|| Kewarganegaraan\t\t: " << warga << endl;
        cout<< "|| Berlaku Hingga\t\t: " << berlaku << endl;
        cout<< "|| Golongan Darah\t\t: " << darah << endl;
        cout<< "============================================" << endl;
    }
};
void inputData() {
    KTP ktp;
    ktp.input();
    ktp.tampil();

    char ulang;
    cout << "Input data lagi? (y/n): ";
    cin >> ulang;
    cin.ignore();

    if (ulang == 'y' || ulang == 'Y') {
        inputData();
    } else {
        cout << "Terima kasih." << endl;
    }
}

int main() {
    inputData();
    return 0;
}
