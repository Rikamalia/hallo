#include<iostream>
using namespace std;

int main() {
    int s;

    cout<<"Masukkan nilai suhu: ";
    cin>>s;

    if (s<=0) {
        cout<<"beku";
    } else if (s>100) {
        cout<<"uap";
    } else {
        cout<<"cair";
    }
}