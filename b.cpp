#include<iostream>
using namespace std;

int main(){
    string Nama = "Rika";
    int umur = 18;
    char jenisKelamin= 'P';
    bool isNight = true;
    double tinggi = 150.5;

    cout << "Nama: " << Nama << endl;
    cout << "Umur: " << umur << endl;
    cout << "Jenis Kelamin: " << jenisKelamin << endl;
    cout << "Tinggi: " << tinggi << endl;
    cout << "Apakah Malam ini cerah?: " << boolalpha << isNight << endl;
}