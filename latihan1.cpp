#include <iostream>
#include <typeinfo>
using namespace std;

//Deklarasi variabel global
int angkaGagal = 0; //Variabel untuk menyimpan angka terakhir yang gagal memenuhi Algoritma FizzBuzz

//Fungsi Prototype
int DeretSegitiga (int n);
int FizzBuzz (int deret);

//Program Utama
int main() {
    system("CLS");
    //Deklarasi variabel lokal
    int bilangan;
    char ulang;
    //Label pengulangan go to
    kembali:
    //Tampilan untuk menerima inputan pengguna
    cout << "  # Program Algoritma FizzBuzz #";
    cout << "\n==================================";
    cout << "\nMasukkan jumlah deret segitiga : "; cin >> bilangan;
    //Seleksi hasil inputan pengguna
    if ((bilangan>=3) && (bilangan<=100)) {
        cout << "----------------------------------";
        puts("");
        //Panggil fungsi untuk menampilkan deret segitiga dengan implementasi FizzBuzz
        DeretSegitiga(bilangan);
    } else {
        system("cls");
        cout << "Input tidak valid, berikan nilai dengan rentang 3-100" << endl;
    }
    cout << "Apakah Anda ingin mengulang kembali? (Y/T) : "; cin >> ulang;
        if ((ulang == 'Y') || (ulang == 'y')) {
            system("cls");
            goto kembali;
        }
        system("pause");
    return (0);
}

int DeretSegitiga (int n) {
    //Deklarasi variable lokal
    int i,deret;
    //Perulangan untuk deret segitiga
    for (i=1;i<=n;i++) {
        deret = i * (i + 1);
        //Seleksi untuk tampilan output
        if (i<n) {
            FizzBuzz(deret);
            cout << ",";
        } else {
            FizzBuzz(deret);
        }
    }
    puts("");
    //Menampilkan tipe data dari angka terakhir yang gagal memenuhi Algoritma FizzBuzz
    cout << "Tipe data " << angkaGagal << " adalah " << typeid(angkaGagal).name() << endl;
}

int FizzBuzz (int deret) {
    //Seleksi deret berdasarkan Aturan Algoritma FizzBuzz
    if ((deret%3 == 0) && (deret%5 == 0)) { //Termasuk kelipatan 3 dan 5
        cout << "FizzBuzz";
    } else if (deret%3 == 0) { //Termasuk kelipatan 3
        cout << "Fizz";
    } else if (deret%5 == 0) { //Temasuk kelipatan 5
        cout << "Buzz";
    } else { //Bukan kelipatan 3 dan 5
        cout << deret;
        angkaGagal = deret;
    }
}