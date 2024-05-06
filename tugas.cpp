#include <iostream>
#include <typeinfo>
using namespace std;

int angka;
void print(int n){
    if((n % 3) == 0 && (n % 5)== 0){
        cout<<"FizzBuzz";
    }
    else if((n % 3) == 0){
    cout<<"Fizz";
    }
    else if((n % 5) == 0){
    cout<<"Buzz";
    }
    else {
        cout<<n;
        angka = n;
    }
}
int deret(int n){
    int hasil = 2;
    if(n>0){
        hasil = deret(n-1)+2*(n+1);
    }
    return(hasil);
    
}
main(){
    system("cls");
    int a, b=0;
    cout<<"Masukkan nilai: "; 
    cin>>a;
    if(a < 3 || a>100){
        cout<<"Input tidak valid, berikan nilai dengan rentang 3 - 100";
        return 1;
    }
    for (int i = 0; i <= a-1 ; i++ ){
        print(deret(i));
        if(i != a-1){
            cout<<", ";
        }
    }
    cout<<"\nTipe data "<<angka<<" adalah "<<typeid(angka).name()<<endl;

}