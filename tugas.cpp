#include <iostream>
using namespace std;

int main()
{
    // 1. Kita deklarasikan dulu variabel nya
    string nama;
    int gol, anak, total, gaji;

    // 2. Kita buat inputan untuk user
    cout << "Masukkan nama anda: ";
    cin >> nama;
    cout << "Masukkan golongan (1,2,3): ";
    cin >> gol;
    cout << "Jumlah anak: ";
    cin >> anak;

    // 3. Operasi Kondisi di sini saya buat menggunakan switch case
    switch(gol)
    {
        case 1: 
            gaji = 5000000 * 0.95; //sesuai soal, pajak dikenakan 5% dari gaji pokok
            break;

        case 2:
            gaji = 3000000 * 0.95;
            break;

        case 3:
            gaji = 2500000 * 0.95;
            break;

        default:
            cout << "Inputan anda salah!"; //jika user menginput angka selain 1,2,3, output yang keluar adalah ini
    }

    if (anak <= 2) //lalu untuk uang tambahan, saya menggunakan if else
        total = gaji + 500000;
    else
        total = gaji + 750000;

    cout << "Total gaji anda adalah Rp." << total << endl; //output gaji bersih
}