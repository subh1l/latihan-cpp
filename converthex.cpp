/*
Nama Program: converthex.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 20 Oktober 2025
Deskripsi   : konversi angka heksadesimal menjadi biner, desimal, dan oktal
Waktu buat  : 19 menit 29 detik
*/

#include <iostream>
using namespace std;

int pow(int angka, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return angka * pow(angka, power - 1);
    }
}

int toDecimal(string angka)
{
    int total = 0;
    int count = 0;

    for (int i = angka.size() - 1; i >= 0; i--)
    {
        switch (angka[i])
        {
        case '0':
            total += 0;
            break;
        case '1':
            total += 1 * pow(16, count);
            break;
        case '2':
            total += 2 * pow(16, count);
            break;
        case '3':
            total += 3 * pow(16, count);
            break;
        case '4':
            total += 4 * pow(16, count);
            break;
        case '5':
            total += 5 * pow(16, count);
            break;
        case '6':
            total += 6 * pow(16, count);
            break;
        case '7':
            total += 7 * pow(16, count);
            break;
        case '8':
            total += 8 * pow(16, count);
            break;
        case '9':
            total += 9 * pow(16, count);
            break;
        case 'A':
            total += 10 * pow(16, count);
            break;
        case 'B':
            total += 11 * pow(16, count);
            break;
        case 'C':
            total += 12 * pow(16, count);
            break;
        case 'D':
            total += 13 * pow(16, count);
            break;
        case 'E':
            total += 14 * pow(16, count);
            break;
        case 'F':
            total += 15 * pow(16, count);
            break;
        }
        count++;
    }
    return total;
}

int toBinary(int angka)
{
    int position = 1;
    int total = 0;
    while (angka > 0)
    {
        total += (angka % 2) * position;
        angka /= 2;
        position *= 10;
    }
    return total;
}

int toOctal(int angka)
{
    int total = 0;
    int position = 1;
    while (angka > 0)
    {
        if (angka % 8 == 0)
        {
            total += 0;
        }
        else
        {
            total += (angka % 8) * position;
        }
        angka /= 8;
        position *= 10;
    }
    return total;
}

int main()
{
    string hex;
    cout << "Bilangan yang akan dikonvert: ";
    cin >> hex;

    cout << "Dalam desimal: " << toDecimal(hex) << "\n";
    cout << "Dalam biner: " << toBinary(toDecimal(hex)) << "\n";
    cout << "Dalam oktal: " << toOctal(toDecimal(hex)) << "\n";
}