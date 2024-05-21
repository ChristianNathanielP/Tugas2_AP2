#include <iostream>
#include <typeinfo>

using namespace std;

std::string getFizzBuzz(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        return "FizzBuzz";
    } else if (num % 3 == 0) {
        return "Fizz";
    } else if (num % 5 == 0) {
        return "Buzz";
    } else {
        return std::to_string(num);
    }
}

void displayTriangleSeries(int x) {
    
    if (x < 3 || x > 100) {
        std::cout << "Input tidak valid, berikan nilai dengan rentang 3-100" << std::endl;
        return;
    }

    for (int i = 1, num = 2; i <= x; ++i, num = i * (i + 1) / 2) {
        std::cout << getFizzBuzz(num);

        if (i < x) {
            std::cout << ", ";
        }
    }

    std::cout << " Tipe data " << typeid(int).name() << std::endl;
}

int main() {
    int x;
    std::cout << "Masukkan bilangan x : ";
    std::cin >> x;

    displayTriangleSeries(x);

    return 0;
}
