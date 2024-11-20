#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
    struct baranginventaris {
        int kode;
        string nama;
        int jumlah;
        string satuan;
        double harga;
    };

    class pengelolainventaris {
        private:
        static const int maks_barang = 100;
        baranginventaris inventaris[maks_barang];
        int jumlahbarang;

        public:
        pengelolainventaris(): jumlahbarang(0) {}

        void tambahbarang(int kode,string nama,int jumlah,string satuan,double harga) {
            if (jumlahbarang < maks_barang){
                inventaris[jumlahbarang].kode=kode;
                inventaris[jumlahbarang].nama=nama;
                inventaris[jumlahbarang].jumlah=jumlah;
                inventaris[jumlahbarang].satuan=satuan;
                inventaris[jumlahbarang].harga=harga;
                jumlahbarang++;
                cout<<"Barang Berhasil Ditambahkan. "<<endl;
            } else {
                cout<<"Inventaris Sudah Penuh. Tidak Dapat Menambahkan Barang Lebih Banyak."<<endl;
            }
        }

        void hapusbarang(int kode) {
            for (int i=0;i<jumlahbarang;++i) {
                if (inventaris[i].kode==kode) {
                    for (int j=i; j<jumlahbarang-1;++j) {
                        inventaris[j]=inventaris[j+1];
                    }
                    jumlahbarang--;
                    cout<<"Barang berhasil dihapus."<<endl;
                    return;
                }
            }
            cout<<"Barang dengan kode"<<kode<<"tidak ditemukan"<<endl;
        }

        void ubahbarang(int kode,string nama,int jumlah,string satuan,double harga) {
            for (int i=0; i<jumlahbarang;i++) {
                if (inventaris[i].kode==kode){
                    inventaris[i].nama=nama;
                    inventaris[i].jumlah=jumlah;
                    inventaris[i].satuan=satuan;
                    inventaris[i].harga=harga;
                    cout<<"Barang berhasil diubah. "<<endl;
                    return;
                }
            }
             cout<<"Barang dengan kode"<<kode<<"tidak ditemukan."<<endl;
        }

        void tampilkaninventaris() {
            cout<<"Inventaris: "<<endl;
            for (int i=0;i<jumlahbarang;++i){
                cout<<"Kode: "<<inventaris[i].kode<<",Nama: "<<inventaris[i].nama<<",Jumlah: "<<inventaris[i].jumlah<<",Satuan: "<<inventaris[i].satuan<<",Harga: Rp "<<inventaris[i].harga<<endl;
            }
        }

        void caribarang(int kode) {
        for(int i=0;i<jumlahbarang;++i){
            if(inventaris[i].kode==kode) {
                cout<<"Barang ditemukan: "<<endl;
                 cout<<"Kode: "<<inventaris[i].kode<<",Nama: "<<inventaris[i].nama<<",Jumlah: "<<inventaris[i].jumlah<<",Satuan: "<<inventaris[i].satuan<<",Harga: Rp "<<inventaris[i].harga<<endl;
            return;
            }
        }
        cout<<"Barang dengan kode"<<kode<<"tidak ditemukan"<<endl;
        }

        void bubblesort() {
            for(int i=0;i<jumlahbarang-1;++i){
                for(int j=0;j<jumlahbarang-i-1;++j) {
                    if(inventaris[j].kode > inventaris[j+1].kode){
                        baranginventaris temp=inventaris[j];
                        inventaris[j]=inventaris[j+1];
                        inventaris[j+1]=temp;
                    }
                }
            }
            cout<<"Inventaris berhasil diurutkan "<<endl;
        }
    };

    int main(){
        pengelolainventaris pengelola;
        int pilihan;
        do {
            cout<<"---Sistem Pengelolaan Inventaris---"<<endl;
            cout<<"1. Tambah Barang"<<endl;
            cout<<"2. Hapus Barang"<<endl;
            cout<<"3. Ubah Barang"<<endl;
            cout<<"4. Tampilkan inventaris"<<endl;
            cout<<"5. Cari Barang"<<endl;
            cout<<"6. Urutkan Inventaris (Bubble Sort)"<<endl;
            cout<<"7. Keluar"<<endl;
            cout<<"Masukkan pilihan anda: ";
            cin>>pilihan;

            switch (pilihan)
            {
            case 1: {
                int kode, jumlah;
                string nama,satuan;
                double harga;
                cout<<"Masukkan kode barang: ";
                cin>>kode;
                cout<<"Masukkan nama barang: ";
                cin.ignore();
                getline(cin,nama);
                cout<<"Masukkan jumlah barang: ";
                cin>>jumlah;
                cout<<"Masukkan satuan barang: ";
                cin>>satuan;
                cout<<"Masukkan harga barang: ";
                cin>>harga;
                pengelola.tambahbarang(kode,nama,jumlah,satuan,harga);
                break;
            }
            case 2: {
                int kode;
                cout<<"Masukkan kode barang yang akan dihapus: ";
                cin>>kode;
                pengelola.hapusbarang(kode);
                break;
            }
            case 3: {
                int kode, jumlah;
                string nama,satuan;
                double harga;
                cout<<"Masukkan kode barang yang akan diubah: ";
                cin>>kode;
                cout<<"Masukkan nama barang baru: ";
                cin.ignore();
                getline(cin,nama);
                cout<<"Masukkan jumlah barang baru: ";
                cin>>jumlah;
                cout<<"Masukkan satuan barang baru: ";
                cin>>satuan;
                cout<<"Masukkan harga barang baru: ";
                cin>>harga;
                pengelola.ubahbarang(kode,nama,jumlah,satuan,harga);
                break;
            }
            case 4: {
                pengelola.tampilkaninventaris();
                break;
            }
            case 5: {
                int kode;
                cout<<"Masukkan kode barang yang akan dicari: ";
                cin>>kode;
                pengelola.caribarang(kode);
                break;
            }
            case 6: {
                pengelola.bubblesort();
                break;
            }
            case 7: {
                cout<<"Keluar dari program...."<<endl;
                break;
            }
            default:
            cout<<"Pilihan tidak valid. Harap masukkan angka antara 1 sampai 7."<<endl;
            break;
            } 
        } while (pilihan !=7);
        return 0;
    }