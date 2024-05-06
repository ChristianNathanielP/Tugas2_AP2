#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
using namespace std;
vector<int> generate_triangle_series(int n) {
    vector<int> triangle_series;
    int current_number = 2; 
    for (int i = 0; i < n; ++i) { triangle_series.push_back(current_number);
        current_number += (i + 2) * 2; 
    }
    return triangle_series;
}
vector<string> apply_fizzbuzz(vector<int>& series) {
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
result.push_back(to_string(num));
        }
    }
    return result;
}
int main() {
    try {
        int x;
        cout << "Masukkan nilai x (3 <= x <= 100): ";
        cin >> x;
        if (x >= 3 && x <= 100) {
            vector<int> triangle_series = generate_triangle_series(x);
            vector<string> fizzbuzz_result = apply_fizzbuzz(triangle_series);
            cout << "Deret segitiga:\n";
            for (int i = 0; i < triangle_series.size(); ++i) {
                cout << triangle_series[i];
                if (i != triangle_series.size() - 1) {
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
         int last_value = triangle_series.back();

            cout << "Tipe data angka terakhir adalah: " << typeid(last_value).name() << endl;
        } else {
            cout << "Input tidak valid. Berikan nilai dengan rentang 3 hingga 100." << endl;
        }
    } catch (exception& e) {
        cout << "Input tidak valid. Masukkan bilangan bulat." << endl;
    }

    return 0;
}