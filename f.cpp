#include<conio.h>
#include<string>
#include<iomanip>
#include<vector>
#include<cmath>
#include<iostream>

using namespace std;
// int main (){
//     struct permainan {
//     string nama;
//     int usia;
//     string tingkat_kesulitan;
//     };

//     permainan game;
//     game.nama = "Juki";
//     game.usia = 22;
//     game.tingkat_kesulitan = "Mudah";

//     cout<<game.nama<<endl;
//     cout<<game.usia<<endl;
//     cout<<game.tingkat_kesulitan<<endl;
// }
//
//   
    // struct person {
    // string name;
    // int age;
    // };

    // int main() {
    // person person1;
    // person1.name = "jiki";
    // person1.age = 30;

    // cout<<"Name: "<<person1.name<<endl;
    // cout<<"Age: "<<person1.age<<endl;
    // }
//
//
    // struct Mahasiswa {
    //     string nama;
    //     int nim;
    //     double ipk;
    // };

    // void tampilkandata (const Mahasiswa& mahasiswa) {
    //     cout<<"Nim: "<<setw(8)<<mahasiswa.nim;
    //     cout<<" Nama: "<<setw(20)<<mahasiswa.nama;
    //     cout<<" Ipk: "<<setw(4)<<fixed<<setprecision(2)<<mahasiswa.ipk<<endl;
    // }

    // int main () {
    // vector<Mahasiswa>daftarMahasiswa;
    // daftarMahasiswa.push_back({"John Doe", 123456, 3.75});
    // daftarMahasiswa.push_back({"Jane Smith", 234567, 3.90});
    // daftarMahasiswa.push_back({"Bob Johnson", 345678, 3.60});

    // cout<<"Daftar Mahasiswa: \n";
    // cout<<setw(15)<<"NIM"<<setw(25)<<"Nama"<<setw(10)<<"IPK"<<endl;
    // cout<<"--------------------------------------------------------\n";
    // for (const Mahasiswa& mhs : daftarMahasiswa) {
    //     tampilkandata (mhs);
    // }
    // }

    // enum days { Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Minggu };

    // int main () {
    //     days today = Rabu;

    //     cout<<"Hari ini adalah hari ";
    //     switch (today) {
    //         case Senin:
    //              cout<<"Senin";
    //              break;
    //         case Selasa:
    //              cout<<"Selasa";
    //              break;
    //         case Rabu:
    //              cout<<"Rabu";
    //              break;
    //         case Kamis:
    //              cout<<"Kamis";
    //              break;
    //         case Jumat:
    //              cout<<"Jumat";
    //              break;
    //         case Sabtu:
    //              cout<<"Sabtu";
    //              break;
    //         case Minggu:
    //              cout<<"Minggu";
    //              break;
    //         default:
    //         cout<<"Hari yang anda cari tidak ditemukan";
    //     }
    //     cout<<endl;
    // }

    // enum warna { Merah,Hijau,Biru,Kuning,Ungu };

    // int main () {
    //     warna favorite = Biru;

    //     cout<<"Warna favorite saya adalah ";
    //     switch (favorite) {
    //         case Merah:
    //              cout<<"Merah";
    //              break;
    //         case Hijau:
    //              cout<<"Hijau";
    //              break;
    //         case Biru:
    //              cout<<"Biru";
    //              break;
    //         case Kuning:
    //              cout<<"Kuning";
    //              break;
    //         case Ungu:
    //              cout<<"Ungu";
    //              break;
    //         default:
    //         cout<<"Warna Favorite yang anda cari tidak ditemukan";
    //     }
    //     cout<<endl;
    // }
//
//
    // enum days { Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Minggu };

    // int main () {
    //     int daynumber;
    //     cout<<"=====Daftar Hari====="<<endl;
    //     cout<<"0.Senin"<<endl;
    //     cout<<"1.Selasa"<<endl;
    //     cout<<"2.Rabu"<<endl;
    //     cout<<"3.Kamis"<<endl;
    //     cout<<"4.Jumat"<<endl;
    //     cout<<"5.Sabtu"<<endl;
    //     cout<<"6.Minggu"<<endl;
    //     cout<<"======================"<<endl;
    //     cout<<"Masukkan nomer hari (0-6): ";
    //     cin>>daynumber;

    //     days day;
    //     switch (daynumber) {
    //         case Senin:   
    //         case Selasa:   
    //         case Rabu:    
    //         case Kamis:    
    //         case Jumat:
    //              day = static_cast<days> (daynumber);
    //              cout<<"Ini hari kerja.";
    //              break;
    //         case Sabtu:
    //              day = Sabtu;
    //              cout<<"Ini hari Sabtu, hari akhir pekan.";
    //              break;
    //         case Minggu:
    //              day = Minggu;
    //              cout<<"Ini hari Minggu, hari akhir pekan."<<endl;
    //              break;
    //         default:
    //          cout<<"Nomor hari yang dimasukkan tidak valid."<<endl;
    //      return 1;
    // }
    // }
//
//
        // int add(int x,int y) {
        //     return x+y;
        // }
        // int add1(int x,int y) {
        //     return x-y;
        // }
        // int add2(int x,int y) {
        //     return x*y;
        // }
        // int add3(int x,int y) {
        //     return x/y;
        // }

        // void greet(string name) {
        //     cout<<"Hello, "<<name<<"!"<<endl;
        // }

        // int main () {
        //     int result = add(5,3);
        //     int result1 = add1(5,3);
        //     int result2 = add2(5,3);
        //     int result3 = add3(10,5);
        //     cout<<"Penjumlahan: "<<result<<endl;
        //     cout<<"Pengurangan: "<<result1<<endl;
        //     cout<<"Perkalian: "<<result2<<endl;
        //     cout<<"Pembagian: "<<result3<<endl;
        //     greet("rika");
        // }
//
//
    // double hitungLuas(double radius) {
    //     return M_PI * panjang * lebar;
    // }
    // double hitungKeliling(double radius) {
    //     return 2 * M_PI * radius;
    // }
    // int main () {
    //     double radius;
    //     cout<<"Masukkan panjang radius lingkaran: ";
    //     cin>>radius;

    //     double luas = hitungLuas(radius);
    //     double keliling = hitungKeliling(radius);

    //     cout<<"Luas Lingkaran: "<<luas<<endl;
    //     cout<<"Keliling Lingkaran: "<<keliling<<endl;
    // }

    // double hitungLuas(double panjang,double lebar) {
    //     return panjang * lebar;
    // }
    // double hitungKeliling(double panjang,double lebar) {
    //     return 2 * (panjang + lebar);
    // }
//
//
    // int main () {
    //     double panjang;
    //     cout<<"Masukkan panjang: ";
    //     cin>>panjang;
    //     double lebar;
    //     cout<<"Masukkan lebar: ";
    //     cin>>lebar;

    //     double luas = hitungLuas(panjang,lebar);
    //     double keliling = hitungKeliling(panjang,lebar);

    //     cout<<"Luas Persegi Panjang: "<<luas<<endl;
    //     cout<<"Keliling Persegi Panjang: "<<keliling<<endl;
    // }
//
//
    // double hitungLuas(double sisi) {
    //     return sisi * sisi;
    // }
    // double hitungKeliling(double sisi) {
    //     return 4 * sisi;
    // }
    // int main () {
    //     double sisi;
    //     cout<<"Masukkan sisi persegi: ";
    //     cin>>sisi;

    //     double luas = hitungLuas(sisi);
    //     double keliling = hitungKeliling(sisi);

    //     cout<<"Luas Persegi: "<<luas<<endl;
    //     cout<<"Keliling Persegi: "<<keliling<<endl;
    // }
//
//
    // void greet(string name) {
    //     cout<<"Hello "<<name<<endl;
    // }
    // void almt(string alamat) {
    //     cout<<"Alamat: "<<alamat<<endl;
    // }
    // void umr(int umur) {
    //     cout<<"Umur: "<<umur<<endl;
    // }
    // void tlp(string telp) {
    //     cout<<"Nomer telepon: "<<telp<<endl;
    // }
    // int main() {
    //     greet("Rika");
    //     almt("Rembang");
    //     umr(18);
    //     tlp("0890000333");
    // }   
//
//41
    // int datax[10], data2[10];
    // int n;

    // int tukar(int a,int b) {
    //     int t;
    //     t=datax[b];
    //     datax[b]=datax[a];
    //     datax[a]=t;
    // }

    // int input () {
    //     cout<<"Masukkan jumlah data = ";
    //     cin>>n;
    //     cout<<endl;
    //     for (int i=0;i<n;i++) {
    //         cout<<"Masukkan Data ke-"<<i+1<<": ";
    //         cin>>datax[i];
    //         data2[i]=datax[i];
    //     }
    //     cout<<endl;
    // }
    // int tampil() {
    //     for (int i=0;i<n;i++){
    //         cout<<"["<<datax[i]<<"]";
    //     }
    //     cout<<endl;
    // }
    // int bubble_sort(){
    //     for (int i=1;i<n;i++){
    //         for (int j=n-1;j>=i;j--){
    //             if (datax[j]<datax[j-1]){
    //                 tukar(j,j-1);
    //             }
    //         }
    //         tampil();
    //     }
    //     cout<<endl;
    // }
    // int main() {
    //     cout<<"ALGORITMA BUBBLE SORT"<<endl;
    //     cout<<"====================="<<endl;
    //     input();
    //     cout<<"Proses Bubble Sort"<<endl;
    //     tampil();
    //     bubble_sort();
    //     // return 0;
    //     // getch();
    // } 

// #include <iostream>
// using namespace std;
// int data[10], data2[10];
// int n;
// int tukar(int a, int b){
//     int t;
//     t=data[b];
//     data[b]=data[a];
//     data[a]=t;
// }
// int input(){
//     cout << "Masukan jumlah data =";
//     cin >> n;
//     cout << endl;
//     for(int i=0; i<n; i++){
//         cout << "Masukan data ke-" << i+1 << "=";
//         cin >> data[i];
//         data2[i]=data[i];
//         cout << endl;
//     }
// }
// int tampil(){
//     for(int i=0; i<n; i++){
//        cout <<"["<<data[i]<<"]";
//     }
//     cout << endl;
// }

// int buble_sort(){
//     for(int i=1; i<n; i++){
//         for(int j=n-1; j>=i; j++){
//             if(data[j]<data[j-1]){
//                 tukar(j,j-1);
//             }
//         }
//         tampil();
//     }
//     cout << endl;
// }

// int main(){
//     cout << "ALGORITMA BUBLE SORT" << endl;
//     cout << "====================" << endl;
//     input();
//     cout << "Proses Buble Sort" << endl;
//     tampil();
//     buble_sort();
// }

    // int datax[10], data2[10];
    // int n;

    // void tukar(int a,int b) {
    //     int t;
    //     t=datax[b];
    //     datax[b]=datax[a];
    //     datax[a]=t;
    // }

    // void input () {
    //     cout<<"Masukkan jumlah data = ";
    //     cin>>n;
    //     cout<<endl;
    //     for (int i=0;i<n;i++) {
    //         cout<<"Masukkan Data ke-"<<i+1<<": ";
    //         cin>>datax[i];
    //         data2[i]=datax[i];
    //     }
    //     cout<<endl;
    // }
    // void tampil() {
    //     for (int i=0;i<n;i++){
    //         cout<<"["<<datax[i]<<"]";
    //     }
    //     cout<<endl;
    // }
    // void bubble_sort(){
    //     for (int i=1;i<n;i++){
    //         for (int j=n-1;j>=i;j--){
    //             if (datax[j]<datax[j-1]){
    //                 tukar(j,j-1);
    //             }
    //         }
    //         tampil();
    //     }
    //     cout<<endl;
    // }
    // int main() {
    //     cout<<"ALGORITMA BUBBLE SORT"<<endl;
    //     cout<<"====================="<<endl;
    //     input();
    //     cout<<"Proses Bubble Sort"<<endl;
    //     tampil();
    //     bubble_sort();
    //     // return 0;
    //     // getch();
    // } 

//
        // int main() {
        //     cout<<"## Program C++ Mengurutkan Angka (Selection Sort)##"<<endl;
        //     cout<<"==================================================="<<endl;
        //     cout<<endl;

        //     int i,j,n;
        //     cout<<"Input Jumlah Element Array: ";
        //     cin>>n;
        //     cout<<endl;

        //     int arr[n];
        //     cout<<"Input"<<n<<"angka (dipisah dengan enter): ";
        //     cout<<endl;

        //     for(i=0;i<n;i++){
        //         cout<<"Angka ke-"<<i+1<<": ";
        //         cin>>arr[i];
        //     }

        //     for(i=0;i<n-1;i++){
        //         int index=i;
        //         for (j=i+1;j<n;j++){
        //             if (arr[j]<arr[index]){
        //                 index =j;
        //             }
        //         }
        //     int temp = arr[i];
        //     arr[i]=arr[index];
        //     arr[index]=temp;
        //     }
        //     cout<<endl;
        //     cout<<"Array setelah diurutkan: ";
        //     for (i=0;i<n;i++){
        //         cout<<arr[i]<<" ";
        //     }
        //     cout<<endl;
        // }
//Dari Besar ke kecil s
        // int main() {
        //     cout<<"## Program C++ Mengurutkan Angka (Selection Sort)##"<<endl;
        //     cout<<"==================================================="<<endl;
        //     cout<<endl;

        //     int i,j,n;
        //     cout<<"Input Jumlah Element Array: ";
        //     cin>>n;
        //     cout<<endl;

        //     int arr[n];
        //     cout<<"Input"<<n<<"angka (dipisah dengan enter): ";
        //     cout<<endl;

        //     for(i=0;i<n;i++){
        //         cout<<"Angka ke-"<<i+1<<": ";
        //         cin>>arr[i];
        //     }

        //     for(i=0;i<n-1;i++){
        //         int index=i;
        //         for (j=i+1;j<n;j++){
        //             if (arr[j]>arr[index]){
        //                 index =j;
        //             }
        //         }
        //     int temp = arr[i];
        //     arr[i]=arr[index];
        //     arr[index]=temp;
        //     }
        //     cout<<endl;
        //     cout<<"Array setelah diurutkan dari besar ke kecil: ";
        //     for (i=0;i<n;i++){
        //         cout<<arr[i]<<" ";
        //     }
        //     cout<<endl;
        // }
//
//
        // int main() {
        //     cout<<"## Program C++ Mengurutkan Angka (Insertion Sort)##"<<endl;
        //     cout<<"==================================================="<<endl;
        //     cout<<endl;

        //     int i,j,n, key;

        //     cout<<"Input jumlah element array: ";
        //     cin>>n;
        //     cout<<endl;

        //     int arr[n];
        //     cout<<"input "<<n<<" angka (dipisah dengan enter): ";
        //     cout<<endl;

        //     for (i=0;i<n;i++){
        //         cout<<"Angka ke-"<<i+1<<": ";
        //         cin>>arr[i];
        //     }

        //     for (i=1;i<n;i++) {
        //         key=arr[i];
        //         j=i-1;

        //         while (j>=0 && arr[j]>key) {
        //             arr[j+1]=arr[j];
        //             j--;
        //         }
        //         arr[j+1]=key;
        //     }
        //     cout<<endl;
        //     cout<<"Array setelah diurutkan: ";
        //     for (i=0;i<n;i++) {
        //         cout<<arr[i]<<" ";
        //     }
        //     cout<<endl;
        // }
//
//
    // int main () {
    //     int i,n;
    //     int cari,ketemu=0;
    //     int A[100];

    //     cout<<"PROGRAM SEARCHING LINIER\n";
    //     cout<<"=========================="<<endl;
    //     cout<<"Masukkan Banyak Data: ";
    //     cin>>n;
    //     cout<<endl;

    //     for (i=1;i<=n;i++) {
    //         cout<<"Masukkan Data Ke-"<<i<<": ";
    //         cin>>A[i];
    //     }
    //     cout<<endl;
    //     cout<<"Input Bilangan yang dicari: ";
    //     cin>>cari;
    //     cout<<"============================"<<endl;
    //     cout<<endl;

    //     for (i=0;i<=n;i++) {
    //         if (A[i]==cari) {
    //             ketemu=1;
    //             cout<<"Data Ditemukan Pada Indeks Ke-"<<i<<endl;
    //         }
    //     }
    //     if (ketemu==0) {
    //         cout<<"Data tidak ditemukan";
    //     }
    // }
//
//50
    // void bubblesort (int arr[],int n) {
    //     for (int i=0;i<n-1;++i) {
    //         for (int j=0;j<n-i-1;++j) {
    //             if (arr[j]>arr[j+1]) {
    //                 int temp=arr[j];
    //                 arr [j]=arr[j+1];
    //                 arr[j+1]=temp;
    //             }
    //         }
    //     }
    // }
    // int binarysearch (int arr[],int low,int high,int target) {
    //     while (low <= high) {
    //         int mid=low+(high-low) /2;  
    //         if (arr[mid]==target)
    //         return mid;
    //         else if (arr[mid]<target)
    //         low = mid+1;
    //         else
    //         high=mid-1;
    //     }
    //     return -1;
    // }
    // int main () {
    //     int arr[] = {64,34,25,12,22,11,90};
    //     int n=sizeof (arr)/sizeof (arr[0]);
    //     bubblesort(arr, n);

    //     cout<<"Sorted array: ";
    //     for (int i=0;i<n;++i)
    //     cout<<arr[i]<<" ";
    //     cout<<endl;

    //     int target=13;
    //     int result=binarysearch(arr,0,n-1,target);
    //     if (result != -1)
    //     cout<<"Element found at index "<<result<<endl;
    //     else
    //     cout<<"Element not found"<<endl;
    // }
//
//51
    void bubblesort (int arr[],int n) {
       for (int i = 0;i<n-1;++i) {
        for (int j = 0;j<n-i-1;++j) {
            if (arr[j]<arr[j+1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
       } 
    }
    int binarysearch (int arr[], int low,int high,int target) {
        while (low <= high) {
            int mid=low+ (high-low) /2;
            if (arr[mid] == target)
            return mid;
            else if (arr[mid]>target)
            low = mid+1;
            else high=mid-1; 
        }
        return -1;
    }
    int main () {
        const int size =7;
        int numbers [size] = {64,34,25,12,22,11,90};
        bubblesort (numbers,size);
        cout<<"Array setelah diurutkan: ";
        for (int i=0;i<size;++i) {
            cout<<numbers[i]<<" ";
        }
        cout<<endl;
        int target = 22;
        int result = binarysearch (numbers,0,size-1,target);
        if (result != -1) {
            cout<<"Elemen "<<target<<" ditemukan pada inseks "<<result<<endl;
        } else {
            cout<<"Elemen "<<target<<" tidak ditemukan dalam array."<<endl;
        }
        return 0;
    }
