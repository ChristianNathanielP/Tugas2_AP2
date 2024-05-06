#include<iostream>
#include<typeinfo>
using namespace std;

int angkaakhir; //angka terakhir yang gagal memenuhi algoritma fizzbuzz

void fizzbuzz(int deret){ //fungsi untuk menampilkan fizzbuzz
    //seleksi deret untuk menampilkan fizz, buzz, fizzbuzz, dan angka terakhir
    if(deret%3==0 && deret%5==0){
        cout<<"FizzBuzz";
    } else if(deret%3==0){
        cout<<"Fizz";
    } else if(deret%5==0){
        cout<<"Buzz";
    } else{
        cout<<deret;
        angkaakhir=deret; //memberi nilai angka terakhir pada variabel angkaakhir
    }
}

void deretan(int n){ //fungsi untuk menghitung deret segitiga
    int i,deret; //'i' sebagai iterasi perulangan, 'deret' sebagai suku ke- deret segitiga

    for(i=1;i<=n;i++){
        deret=i*(i+1); //rumus deret segitiga dalam pemrograman (2,6,12,20,.....)

        if(i<n){
            fizzbuzz(deret);
            cout<<", ";
        } else{
            fizzbuzz(deret);
        }
    }
    cout<<"\nTipe data "<< angkaakhir <<" adalah "<< typeid(angkaakhir).name()<<endl; //menampilkan tipe data angka terakhir
}


int main(){
    system("cls"); //clearscreen

    int bilangan;

  a:  //label a
    cout<<"Masukkan jumlah deret segitiga (3-100) : "; cin>>bilangan;
    
    while(bilangan<3 || bilangan>100){ //perulangan jika input kurang dari tiga atau lebih dari seratus
        cout<<"Input tidak valid, berikan nilai dengan rentang 3-100"<<endl;
        goto a;
    }

    deretan(bilangan);

    return(0);
}

