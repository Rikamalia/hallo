// #include<iostream>
// using namespace std;

// int main(){
    // int angper,angdu;
    // char pilihan;
    // while (true){
    //     cout<<"Angka pertama: ";
    //     cin>>angper;
    //     cout<<"Angka kedua: ";
    //     cin>>angdu;
    //     cout<<endl;
    //     cout<<"Operator (+,-,*,/ atau q untuk keluar): ";
    //     cin>>pilihan;

    //     if (pilihan=='q'){
    //         cout<<"Program selesai.";
    //         break;
    //     }

    //     switch (pilihan){
    //         case '+':
    //         cout<<"Hasil: "<<angper+angdu<<endl;
    //         break;
    //         case '-':
    //         cout<<"Hasil: "<<angper-angdu<<endl;
    //         break;
    //         case '*':
    //         cout<<"Hasil: "<<angper*angdu<<endl;
    //         break;
    //         case '/':
    //         if (angdu==0){
    //             cout<<"Tidak bisa membagi dengan 0."<<endl;
    //         } else {
    //             cout<<"Hasil: "<<angper/angdu<<endl;
    //         }
    //         break;
    //         default:
    //         cout<<"Operator tidak dikenal."<<endl;
    //         //break;
    //     }
    // }

#include <iostream>
using namespace std;

int main() {
    int angka, hasil = 1;
    cout << "Masukkan angka untuk dihitung faktorialnya: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial tidak dapat dihitung untuk angka negatif." << endl;
    } else {
        for (int i = 1; i <= angka; i++) {
            hasil *= i; // Mengalikan hasil dengan i pada setiap iterasi
        }
        cout << "Faktorial dari " << angka << " adalah: " << hasil << endl;
    }

    return 0;
}