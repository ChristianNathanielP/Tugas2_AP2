#include <iostream>
#include <typeinfo>

using namespace std;

//Deklarasi Variabel Global
int jumlah = 2, jumlah_gagal = 2, tambah = 4;

//Fungsi Prototipe
void tampil(int n);
void deret(int m);

//Mulai
int main(){
    
    int n; //Deklarasi Variabel Input-an
      
    ulang:
    
    //Penjelasan Algoritma FizzBuzz
/*    cout<<"________________________________________________________________________"<<endl;
    cout<<"Aturan Algoritma FizzBuzz:"<<endl;
    cout<<"-  Jika Angka Tersebut Adalah Kelipatan 3 dan 5, Cetak 'FizzBuzz' "<<endl;
    cout<<"-  Jika Angka Tersebut Adalah Kelipatan 3, Cetak 'Fizz' "<<endl;
    cout<<"-  Jika Angka Tersebut Adalah Kelipatan 5, Cetak 'Buzz' "<<endl;
    cout<<"-  Jika Angka Tersebut Bukan Kelipatan 3 dan 5, Cetak Angka Itu Sendiri "<<endl; 
    cout<<"________________________________________________________________________"<<endl<<endl; */
    //Perulangan Yang Dilakukan Agar Pengguna Hanya Dapat Menginputkan Bilangan Rentan 3 - 100
    
    cin>>n; cout<<"________________________________________________________________________";
    cout<<endl;
    
    if (n >= 3 && n <= 100){
   //deret(n);(Digunakan Untuk Mengaktifkan Fungsi deret)
    tampil(n); //Digunakan Untuk Mengaktifkan Fungsi tampil
    }
    
    else {
        cout<<"PERINGATAN: Input Tidak Valid, Berikan Nilai Dengan Rentang 3 - 100"<<endl<<endl;
        
        goto ulang; //Pengulangan Hingga Pengguna Memasukkan Input-an Yang Benar
    }

     cout<<"________________________________________________________________________"<<endl;
    return 0; 
} //Selesai

//Isi Dari Fungsi Prototipe Yang Diatas
void tampil(int n){
          for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout<<jumlah;
        } else {
            if (jumlah % 3 == 0 && jumlah % 5 == 0) {
                cout<<", FizzBuzz";
            } else if (jumlah % 3 == 0) {
                cout<<", Fizz";
            } else if (jumlah % 5 == 0) {
                cout<<", Buzz";
            } else {
                cout<<", " << jumlah;
                jumlah_gagal = jumlah;
            }
        }
        jumlah += tambah;
        tambah += 2;
    }
    cout << "\nTipe Data "<<jumlah_gagal<<" Adalah "<<typeid(jumlah_gagal).name()<<endl;
}

void deret(int m){
    jumlah = 2; tambah = 4;
    for(int j = 1; j <= m; ++j){
        if (j == 1) {
            cout<<jumlah;
        } else {
        cout<<", "<<jumlah;
          }jumlah += tambah;
           tambah += 2;
           }
           }
