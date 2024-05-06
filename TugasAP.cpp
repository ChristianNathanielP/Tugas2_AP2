#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;

vector<int> BuatSegitiga(int n) {
    vector<int> Segitiga;
    int A = 2; 
    for (int i = 0; i < n; ++i) { Segitiga.push_back(A);
        A += (i + 2) * 2; 
    }
    return Segitiga;
}
vector<string> fizzbuzz(vector<int>& series) {
    vector<string> result;
    for (int num : series) {
        if (num % 3 == 0 && num % 5 == 0) {
            result.push_back("FizzBuzz");
        } else if (num % 3 == 0) {
            result.push_back("Fizz");
        } else if (num % 5 == 0) {
            result.push_back("Buzz");
        } else
    {         
result.push_back(std::to_string(num));
        }
    }
    return result;
}
main() {
    system("cls");
    try {
        int x;
        cout << "Masukkan nilai x (3 <= x <= 100): ";
        cin >> x;
        if (x >= 3 && x <= 100) {
            vector<int> Segitiga = BuatSegitiga(x);
            vector<string> fizzbuzz_result = fizzbuzz(Segitiga);
            cout << "Deret segitiga:\n";
            for (int i = 0; i < Segitiga.size(); ++i) {
                cout << Segitiga[i];
                if (i != Segitiga.size() - 1) {
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
            cout << std::endl;
        int last_value = Segitiga.back();

            cout << "Tipe data dari angka terakhir: " << typeid(last_value).name() << endl;
        } else {
            cout << "Input tidak valid. Berikan nilai dengan rentang 3 hingga 100." << endl;
        }
    } catch (exception& e) {
        cout << "Input tidak valid. Masukkan bilangan bulat." << endl;
    }

    return 0;
}