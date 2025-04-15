#include <iostream>

using namespace std;

int main() {
   
    int harga_pertalite = 7000;
    int harga_pertamax = 9000;
    char nama[50];
    char jenis;
    int liter;
    
    cout<<"======================\n";
    cout<<"1. Pertalite (7000/liter)\n";
    cout<<"2. Pertamax (9000/liter)\n";
    cout<<"======================\n";
    
    cout<<"Masukkan nama: ";
    cin>>nama;
    
    cout<<"Pilih jenis (1/2): ";
    cin>>jenis;
    
    cout<<"Jumlah liter: ";
    cin>>liter;
    
    int total;
    if(jenis == '1') {
        total = liter * harga_pertalite;
        cout << "\nJenis: Pertalite\n";
    } else if(jenis == '2') {
        total = liter * harga_pertamax;
        cout << "\nJenis: Pertamax\n";
    } else {
        cout << "Pilihan tidak valid!";
        return 0;
    }
    
    cout<<"Nama: " << nama << endl;
    cout<<"Liter: " << liter << endl;
    cout<<"Total: Rp." << total << endl;
    cout<<"======================\n";
    cout<<"Terima kasih!\n";
    return 0;
}
