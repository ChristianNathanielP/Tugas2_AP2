#include <typeinfo>
#include <iostream>
using namespace std;

//Deklarasi variabel global
int angka_akhir = 0; //variabel untuk menyimpan angka paling akhir yang tidak memenuhi algoritma FizzBuzz

//Fungsi seleksi deret Algoritma FizzBuzz
void FizzBuzz (int fizz_deret) {
    //untuk menyeleksi deret dalam Algoritma FizzBuzz
    if ((fizz_deret % 3 == 0) && (fizz_deret % 5 == 0)) //untuk kelipatan 3 dan5
    { 
        cout << "FizzBuzz";
    } 
    else if (fizz_deret % 3 == 0) //untuk kelipatan 3
    { 
        cout << "Fizz";
    } 
    else if (fizz_deret % 5 == 0) //untuk kelipatan 5
    { //Temasuk kelipatan 5
        cout << "Buzz";
    } 
    else //selain kelipatan 3 dan 5 dan diluar range
    { 
        cout << fizz_deret;
        angka_akhir = fizz_deret; //masukan deret terakhir fizzbuzz ke variabel angka_akhir
    }
}

void DeretSegitiga (int n_deret) 
{   
    for (int i = 1; i <= n_deret; i++) 
    {
        int deret = i * (i + 1);
        
        //proses untuk menampilkan deret segitiga
        if (i < n_deret) 
        {
            FizzBuzz(deret);
            cout << ",";
        } 
        else 
        {
            FizzBuzz(deret);
        }
    }

    cout << "\nTipe data " << angka_akhir << " adalah " << typeid(angka_akhir).name() << endl; //untuk menampilkan tipe data angka terakhir yang tidak memenuhi algoritma FizzBuzz
}


int main() {
    system("CLS");
    int deret;
    char ulang;
    
    perulangan:
    
    cout << "======= Program Algoritma FizzBuzz =======\n";
    cout << "\nMasukkan jumlah deret segitiga : "; 
    cin >> deret;
    
    //proses seleksi dari inputan pengguna
    if ((deret >= 3) && (deret <= 100)) //untuk menampilkan deret fizzbuzz dan deret segitiga 
    {
        cout << "\nDeret : ";
        DeretSegitiga(deret);
    } 
    else 
    {
        cout << "Input tidak valid, berikan nilai dengan rentang 3-100" << endl; //jika inputan di luar range
    }


    cout << "\nApakah ingin mengulang kembali? (Y/T) : "; 
    cin >> ulang;
    if ((ulang == 'y') || (ulang == 'Y')) 
    {
        system("cls"); //membersihkan layar jika pengguna melakukan 271T percobaan
        goto perulangan;
    }
    
    system("pause");
    return (0);
}

