#include <iostream>      // Memanggil library untuk input dan output (cout, cin)
#include <string>        // Memanggil library agar bisa memakai tipe data string
using namespace std;     // Menghindari penulisan std:: pada cout dan cin

int main() {
    string pilihan;        // Variabel untuk menyimpan pilihan bangun datar
    float panjang, lebar;  // Variabel untuk nilai panjang dan lebar persegi panjang
    float alas, tinggi;    // Variabel untuk alas dan tinggi segitiga
    float jari_jari;       // Variabel untuk jari-jari lingkaran
    float luas;            // Variabel untuk menyimpan hasil luas
    const float phi = 3.14; // Konstanta phi yang digunakan untuk rumus lingkaran

    // Menampilkan menu pilihan bangun datar
    cout << "=== Program Menghitung Luas Bangun Datar ===" << endl;
    cout << "Pilihan: persegi, segitiga, lingkaran" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Masukkan pilihan: "; // Meminta user memasukkan pilihan
    cin >> pilihan;               // Menyimpan input ke variabel pilihan

    // Mengecek apakah pilihan adalah persegi atau segiempat
    if (pilihan == "persegi" || pilihan == "segiempat") {
        cout << "\n=== Luas Persegi Panjang / Segi Empat ===" << endl;

        cout << "Masukkan panjang: "; // Meminta panjang
        cin >> panjang;

        cout << "Masukkan lebar: ";   // Meminta lebar
        cin >> lebar;

        luas = panjang * lebar;       // Rumus luas persegi panjang
        cout << "Luas persegi panjang = " << luas << endl; // Menampilkan hasil
    } 

    // Jika pilihan adalah segitiga
    else if (pilihan == "segitiga") {
        cout << "\n=== Luas Segitiga ===" << endl;

        cout << "Masukkan alas: ";   // Meminta nilai alas
        cin >> alas;

        cout << "Masukkan tinggi: "; // Meminta nilai tinggi
        cin >> tinggi;

        luas = 0.5 * alas * tinggi;  // Rumus luas segitiga
        cout << "Luas segitiga = " << luas << endl; // Menampilkan hasil
    } 

    // Jika pilihan adalah lingkaran
    else if (pilihan == "lingkaran") {
        cout << "\n=== Luas Lingkaran ===" << endl;

        cout << "Masukkan jari-jari: "; // Meminta jari-jari lingkaran
        cin >> jari_jari;

        luas = phi * jari_jari * jari_jari; // Rumus luas lingkaran: π × r × r
        cout << "Luas lingkaran = " << luas << endl; // Menampilkan hasil
    } 

    // Jika pilihan tidak sesuai dengan menu
    else {
        cout << "Pilihan tidak dikenal!" << endl; // Pesan error
    }

    cout << "\nProgram selesai. Terima kasih!" << endl; // Penutup program
    return 0; // Mengakhiri program
}
