#include <iostream>
#include <vector>
#include <string> 
#include <typeinfo>  
using namespace std;  

// Fungsi untuk menghasilkan deret segitiga dengan jumlah n angka
vector<int> generate_triangle_series(int n) {
    vector<int> deret_segitiga;
    int angka = 2; // Angka pertama dalam deret segitiga

    for (int i = 0; i < n; ++i) {
        deret_segitiga.push_back(angka);
        angka += (i + 2) * 2; // Setiap angka berikutnya adalah kelipatan 2 dari indeks
    }
    return deret_segitiga;
}

// Fungsi untuk menerapkan algoritma FizzBuzz pada deret segitiga
vector<string> apply_fizzbuzz(vector<int>& series) {
    vector<string> result;
    for (int num : series) {
        if (num % 3 == 0 && num % 5 == 0) {
            result.push_back("FizzBuzz"); 
            //push.back menambahkan elemen baru ke dalam vektor 
        } else if (num % 3 == 0) {
            result.push_back("Fizz");
        } else if (num % 5 == 0) {
            result.push_back("Buzz");
        } else {
            result.push_back(to_string(num));
        }
    }
    return result;
}

int main() {  //fungsi utama
    try {
        int x;
        cout << "Masukkan nilai x (3 <= x <= 100): "; //input nilai x
        cin >> x;

        if (x >= 3 && x <= 100) { //jika x berada dalam rentang 3 hingga 100
            vector<int> deret_segitiga = generate_triangle_series(x);  //menggunakan deret segitiga dengan fungsi generate_triangle_series
            vector<string> fizzbuzz_result = apply_fizzbuzz(deret_segitiga); //Menerapkan algoritma FizzBuzz pada deret segitiga menggunakan fungsi apply_fizzbuzz

            cout << "Deret segitiga:\n";
            for (int i = 0; i < deret_segitiga.size(); ++i) {
                cout << deret_segitiga[i];
                if (i != deret_segitiga.size() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;

            cout << "\nHasil setelah menerapkan FizzBuzz:\n";
            for (int i = 0; i < fizzbuzz_result.size(); ++i) {
                cout << fizzbuzz_result[i];
                if (i != fizzbuzz_result.size() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;

            // Menghitung nilai terakhir dalam deret segitiga
            int last_value = deret_segitiga.back();

            // Tipe data dari angka terakhir
            cout << "Tipe data dari angka terakhir: " << typeid(last_value).name() << endl; 
        //typeid(last_value).name() mengembalikan nama tipe data dari last_value. jika last_value adalah bilangan bulat, maka hasilnya adalah "i" (bilangan bulat kompleks).

        } else {
            cout << "Input tidak valid. Berikan nilai dengan rentang 3 hingga 100." << endl;
        }
    } catch (exception& e) { //menangkap pengecualian yang terjadi ketika user memasukkan input yang tidak valid
        cout << "Input tidak valid. Masukkan bilangan bulat." << endl;
    }

}
