// #include <iostream>
// #include <string>

// using namespace std;
// int main() {
// string S;
// int N;
// // Meminta pengguna memasukkan kalimat
// cout << " Masukkan kalimat: ";
// getline(cin, S); // Menggunakan getline untuk input string 
// //dengan spasi
// // Menampilkan kalimat yang dimasukkan pengguna
// cout << " Anda memasukkan kalimat " << S << endl;
// // Meminta pengguna memasukkan angka
// cout << " Masukkan sebuah angka: ";
// cin >> N;
// // Menampilkan hasil penjumlahan angka dengan 5
// cout << " Jika angka Anda ditambah 5, hasilnya " << N + 5 <<
// endl;
// return 0;
// }

//operasi aritmatika
#include <iostream>

using namespace std;
int main() {
// Deklarasi variabel integer
int x, y, hasil;
// Input nilai x dan y
cout << "Masukkan nilai x: ";
cin >> x;
cout << "Masukkan nilai y: ";
cin >> y;
// Operasi aritmatika
hasil = x + y;
// Output hasil
cout << "Hasil penjumlahan " << x << " + " << y << " = " << hasil 
<< endl;
return 0;
}