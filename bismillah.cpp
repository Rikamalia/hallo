#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
int kode, jumlah, tahun_terbit, pilihan, jumba;
string judul_buku,penulis_buku;
double harga;
string harganya;

cin>>jumba;
for (int i=0;i<jumba;i++){
    cout<<"============Masukkan Data buku ke-"<<i+1<<"============"<<endl;
    cout<<"Masukkan kode buku: ";
    cin>>kode;
    cout<<"Masukkan judul buku: ";
    cin.ignore();
    getline(cin,judul_buku);
    cout<<"Masukkan jumlah buku: ";
    cin>>jumlah;
    cout<<"Masukkan nama pengarang: ";
    cin.ignore();
    getline(cin,penulis_buku);
    cout<<"Masukkan harga barang: ";
    cin>>harga;
}

for (int i=0;i<jumba;i++){
    cout<<kode<<endl;
    cout<<judul_buku<<endl;
    cout<<jumlah<<endl;
    cout<<penulis_buku<<endl;
    harganya=to_string(harga);
    cout<<harganya<<endl;
}

// cin>>harga;
// harganya= to_string(harga);
// cout<<harganya;
//if ()

return 0;
}
