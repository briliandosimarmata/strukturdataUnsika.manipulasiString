#include <iostream>
#include <string>
using namespace std;

int main() {

    string nama = "Briliando Simarmata";
    int containerVokal = 0;
    int containerKonsonan = 0;

//CEK JUMLAH KARAKTER HARUS <= 20
    do {
        cout<<"PROGRAM MENGHITUNG HURUF"<<endl;
        cout<<"OLEH BRILIANDO SIMARMATA"<<endl;
        cout<<"NPM 1610631170059\n"<<endl;
        cout<<"Masukkan nama anda [maksimal 20 karakter] : ";
        getline (cin, nama);
    } while (nama.length()>20);

//BUAT UBAH UPPERCASE JADI LOWERCASE
    for (int i=0; i<=nama.length(); i++) {
        if (nama[i]<97 & nama[i]!=32) {
            nama[i] = nama[i]+32;
        }
    }

//BUAT HITUNG KONSONAN DAN VOKAL
    for (int i=0; i<=nama.length(); i++) {
        if (nama[i]==97 || nama[i]==101 || nama[i]==105 || nama[i]==111 || nama[i]==117) {
            containerVokal++;
        } else if (nama[i] != 32){
            containerKonsonan++;
        }
    }

    cout<<"\nHASIL INPUTAN"<<endl;
    cout<<"Nama anda                : "<<nama<<endl;
    cout<<"Panjang string           : "<<nama.length()<<endl;
    cout<<"Jumlah huruf vokal       : "<<containerVokal<<endl;
    cout<<"Jumlah huruf konsonan    : "<<containerKonsonan<<endl;


    return 0;

}


