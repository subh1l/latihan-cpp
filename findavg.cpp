/*
Nama Program: findavg.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 18 Oktober 2025
Deskripsi   : menentukan rata rata dari array nilai yang diberikan
Waktu buat  : 15 menit 0 detik
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int jumlah, temp;
    float hasil, total = 0;
    cin >> jumlah;

    int berat[jumlah];
    for (int i = 0; i < jumlah; i++)
    {
        cin >> berat[i];
        total += berat[i];
    }

    hasil = total / jumlah;

    cout << fixed << setprecision(2) << hasil << "\n";

}