#include <iostream> //header untuk fungsi-fungsi standar dalam C++, seperti cin dan cout
#include <typeinfo> //header untuk fungsi menampilkan informasi tipe data variabel
using namespace std;

int angkaInvalid = 0;   //deklarasi variabel global "angkaInvalid" untuk menyimpan nilai suku yang tidak memenuhi kondisi FizzBuzz

void algoFizzBuzz(int suku) {   //fungsi untuk algoritma FizzBuzz
    if (suku % 3 == 0 && suku % 5 == 0) {   //jika suku kelipatan 3 & 5
        cout << "Fizzbuzz";
    } else if (suku % 3 == 0) { //jika suku kelipatan 3
        cout << "Fizz";
    } else if (suku % 5 == 0) { //jika suku kelipatan 5
        cout << "Buzz";
    } else {    //jika suku tidak memenuhi kondisi FizzBuzz
        cout << suku;
        angkaInvalid = suku;    //nilai suku disimpan dalam variabel angkaInvalid
    }   //end if-else
}   //end fungsi algoFizzBuzz

void deret(int n) { //fungsi untuk deret segitiga
    int suku;   //deklarasi variabel "suku" yang bertipe data integer
    for (int i = 1; i <= n; i++) {  //begin for untuk iterasi 1 hingga n
        suku = i * (i+1);   //menghitung deret segitiga
        if (i < n) {    //begin block if-else
            algoFizzBuzz(suku); //memanggil fungsi algoFizzBuzz
            cout << ", ";
        }
        else {
            algoFizzBuzz(suku); //memanggil fungsi algoFizzBuzz
        }   //end blok if-else
    }   //end blok for
    cout << "\nTipe data " << angkaInvalid << " adalah " << typeid(angkaInvalid).name() << endl;    //mencetak tipe data dari angka yang tidak memenuhi kondisi FizzBuzz
}   //end fungsi deret

int main() {    //begin program utama
    system("CLS");  //membersihkan layar
    char ulang; //deklarasi variabel "ulang" yang bertipe data char
    do {    //begin blok do-while
        int n;  //deklarasi variabel "n" yang bertipe data integer
        system ("CLS");
        cout << "----------------------------------------------------\n";
        cout << "| Program Deret Segitiga dengan Algoritma FizzBuzz |\n";
        cout << "----------------------------------------------------\n";
        cout << "Masukkan sebuah angka\t: "; cin >> n;  //meminta input sebuah angka dan inputan disimpan dalam variabel "n"
        if (n >= 3 && n <= 100) {   //jika angka inputan ada dalam rentang 3-100 maka program melanjutkan fungsi deret
            deret(n);   //memanggil fungsi deret
        } else {    //jika angka inputan tidak dalam rentang 3-100 maka cetak peringatan
            cout << "Input tidak valid, berikan nilai dengan rentang 3-100";    //peringatan agar input angka dalam rentang 3-100
        }   //end blok do-while
        cout << "Apakah anda ingin mengulangi program? (Y/T): "; cin >> ulang;  //bertanya apakah user ingin mengulangi program? Lalu jawaban disimpan dalam variabel "ulang"
    } while (ulang == 'Y' || ulang == 'y'); //jika jawaban user 'Y' atau 'y' maka program kembali ke loop awal
    return 0;
}   //end program utama