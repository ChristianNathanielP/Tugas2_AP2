#include <iostream>
#include <conio.h>
using namespace std;

int fungsi_satu();
int fungsi_dua(int i);

int main(){
    fungsi_satu();
    return 0;
}

int fungsi_satu(){
    int m = 0,k,j = 4,i = 2 ;

    cout << "Masukkan input:";
    cin >> k;

    if ((k < 3 ) || (k > 100)){
        cout << "Input tidak valid. Masukkan input dalam rentang 3-100.\n";
        exit(0);
    }

    cout << "2,";
    for (int l = 0; l < k; ++l) {
        if (fungsi_dua(i) == -1){
            m = i;
                if (m != 2) cout << m << ",";
            }
        i = i + j;
        j = j + 2;
    }

    if (m != 0) {
        cout << "\nTipe data " << m << " adalah i";
    }

return 0;
}

int fungsi_dua(int i){
    if ((i % 3 == 0) && (i % 5 == 0))
        cout << "FizzBuzz, ";
    else if (i % 3 == 0)
        cout << "Fizz, ";
    else if (i % 5 == 0)
        cout << "Buzz, ";
    else 
        return -1;
return 0;
}
