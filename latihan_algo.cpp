/*
Nama Program: latihan_algo.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 28 Oktober 2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

float avg3(int num1, int num2, int num3)
/*
Deskripsi: Menghitung rata-rata 3 angka
Waktu: 1 menit 2 detik
*/
{
    float hasil = (num1 + num2 + num3) / 3;
    return hasil;
}

int findVolt(int ampere, int ohm)
/*
Deskripsi: Menghitung nilai tegangan
Waktu: 52 detik
*/
{
    return ampere * ohm;
}

float keliling(int diameter)
/*
Deskripsi: menghitung keliling lingkaran menggunakan diameter
Waktu: 1 menit 9 detik
*/
{
    return diameter * 3.14159;
}

float idrToUsd(int uang)
/*
Deskripsi: menukar uang rupiah menjadi dolar
Waktu: 1 menit 53 detik
*/
{
    float kurs = 15000;
    float dolar = uang / kurs;
    return dolar;
}

/*
Deskripsi: mengonversi celsius menjadi fahrenheit, reamur, dan kelvin
Waktu: 2 menit 45 detik
*/

float toFahrenheit(int suhu)
{
    return suhu * 9 / 5 + 32;
}

float toReamur(int suhu)
{
    return suhu * 4 / 5;
}

float toKelvin(int suhu)
{
    return suhu + 273.15;
}

int main()
{
    cout << avg3(5, 10, 15) << "\n";
    cout << findVolt(3, 4) << "\n";
    cout << keliling(10) << "\n";
    cout << fixed << setprecision(2) << idrToUsd(100000) << "\n";
    cout << toFahrenheit(25) << "\n";
    cout << toReamur(25) << "\n";
    cout << toKelvin(25) << "\n";
}