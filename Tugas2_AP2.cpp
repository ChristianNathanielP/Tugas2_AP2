#include <iostream>
#include <typeinfo>
using namespace std;

int j_gagal = 2;

void printFizzBuzz(int n) {
    int tambah = 4;
    int jumlah = 2;
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
                j_gagal = jumlah;
            }
        } else {
            cout << jumlah;
        }
        jumlah += tambah;
        tambah += 2;
    }
    cout << "\nTipe data " << j_gagal << " adalah " << typeid(j_gagal).name() << endl;
}


int main() {
        char option;
    do {
        system("CLS");
        int n;
        cout << "Masukkan angka antara 3-100: ";
        cin >> n;

        if (n >= 3 && n <= 100) {
            system("CLS");
            printFizzBuzz(n);
        } else {
            system("CLS");
            cout << "Input tidak valid, masukkan angka antara 3-100\n";
        }

        cout << "Ulangi program? (Y/N) : ";
        cin >> option;
    } while (option == 'Y' || option == 'y');
}