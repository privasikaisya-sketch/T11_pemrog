#include <iostream>
#include <string> 
using namespace std;

int main() {
    string pilihan;
    float panjang, lebar, alas, tinggi, jari_jari, luas;
    const float phi = 3.14;

    cout << "=== Program Menghitung Luas Bangun Datar ===" << endl;
    cout << "Pilihan: persegi, segitiga, lingkaran" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    if (pilihan == "persegi" || pilihan == "segiempat") {
        cout << "\n=== Luas Persegi Panjang / Segi Empat ===" << endl;
        cout << "Masukkan panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar: ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas persegi panjang = " << luas << endl;
    } 
    else if (pilihan == "segitiga") {
        cout << "\n=== Luas Segitiga ===" << endl;
        cout << "Masukkan alas: ";
        cin >> alas;
        cout << "Masukkan tinggi: ";
        cin >> tinggi;
        luas = 0.5 * alas * tinggi;
        cout << "Luas segitiga = " << luas << endl;
    } 
    else if (pilihan == "lingkaran") {
        cout << "\n=== Luas Lingkaran ===" << endl;
        cout << "Masukkan jari-jari: ";
        cin >> jari_jari;
        luas = phi * jari_jari * jari_jari;
        cout << "Luas lingkaran = " << luas << endl;
    } 
    else {
        cout << "Pilihan tidak dikenal!" << endl;
    }

    cout << "\nProgram selesai. Terima kasih!" << endl;
    return 0;
}