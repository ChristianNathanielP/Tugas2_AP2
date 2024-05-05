#include <iostream>
#include <typeinfo>
using namespace std;

int jumlah = 2;
int J_gagal = 2;
int tambah = 4;

void tampil(int n);

int main() {
    int n;
    system("CLS");
    
    while (true) {
        cout << "Masukkan angka antara 3-100 : ";
        cin >> n;

        if (n >= 3 && n <= 100) {
            tampil(n);
            break;
        } else {
            cout << "Input Tidak Valid, Masukkan angka antara 3-100\n\n";
        }
    }
}

void tampil(int n) {
    for (int i = 1; i <= n; i++) {
        if (i > 1) {
            if (jumlah % 3 == 0 && jumlah % 5 == 0) {
                cout << ", FizzBuzz";
            } else if (jumlah % 3 == 0) {
                cout << ", Fizz";
            } else if (jumlah % 5 == 0) {
                cout << ", Buzz";
            } else {
                cout << ", " << jumlah;
                J_gagal = jumlah;
            }
        } else {
            cout << jumlah;
        }
        jumlah += tambah;
        tambah += 2;
    }
    cout << "\nTipe data " << J_gagal << " adalah " << typeid(J_gagal).name() << endl;
}