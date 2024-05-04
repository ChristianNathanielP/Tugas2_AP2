#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int jumlah = 2, jumlah_gagal, tambah = 4;

void print(int n){
    for(int i = 1; i <= n; ++i){
        if((jumlah % 3 == 0) && (jumlah % 5 == 0)){
            cout<<", FizzBuzz";
        }
        else  if(jumlah % 3 == 0){
            cout<<", Fizz" ;
        }
         else  if(jumlah % 5 == 0){
            cout<<", Buzz" ;
        }
         else{
            cout<<""<<jumlah;
            jumlah_gagal = jumlah;
        }
        jumlah += tambah;
        tambah += 2;
    }
    
    cout<<"\nTipe Data "<<jumlah_gagal<<" Adalah "<<typeid(jumlah_gagal).name()<<endl;
}

int main() {
    system ("cls");
    
    int x;
    cout << "Masukkan bilangan (3 < x <= 100): ";
    cin >> x;

    cout << endl;

    print(x);

    return 0;
}