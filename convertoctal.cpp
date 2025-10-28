/*
Nama Program: convertoctal.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 19 Oktober 2025
Deskripsi   : konversi angka oktal menjadi biner, desimal, dan heksadesimal
Waktu buat  : 20 menit 31 detik
*/

#include <iostream>
using namespace std;

int pow(int num, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return num * pow(num, power - 1);
    }
}

int toDecimal(int angka)
{
    int temp, total = 0, count = 0;
    while (angka > 0)
    {
        temp = angka % 10;
        angka /= 10;
        switch (temp)
        {
        case 0:
            total += 0;
            break;
        case 1:
            total += 1 * pow(8, count);
            break;
        case 2:
            total += 2 * pow(8, count);
            break;
        case 3:
            total += 3 * pow(8, count);
            break;
        case 4:
            total += 4 * pow(8, count);
            break;
        case 5:
            total += 5 * pow(8, count);
            break;
        case 6:
            total += 6 * pow(8, count);
            break;
        case 7:
            total += 7 * pow(8, count);
            break;
        }
        count++;
    }
    return total;
}

int toBinary(int angka)
{
    int position = 1;
    int result = 0;
    while (angka > 0)
    {
        result = result + (angka % 2) * position;
        angka /= 2;
        position *= 10;
    }
    return result;
}

string toHex(int angka)
{
    string hasil = "";

    while (angka > 0)
    {
        switch (angka % 16)
        {
        case 0:
            hasil = "0" + hasil;
            break;
        case 1:
            hasil = "1" + hasil;
            break;
        case 2:
            hasil = "2" + hasil;
            break;
        case 3:
            hasil = "3" + hasil;
            break;
        case 4:
            hasil = "4" + hasil;
            break;
        case 5:
            hasil = "5" + hasil;
            break;
        case 6:
            hasil = "6" + hasil;
            break;
        case 7:
            hasil = "7" + hasil;
            break;
        case 8:
            hasil = "8" + hasil;
            break;
        case 9:
            hasil = "9" + hasil;
            break;
        case 10:
            hasil = "A" + hasil;
            break;
        case 11:
            hasil = "B" + hasil;
            break;
        case 12:
            hasil = "C" + hasil;
            break;
        case 13:
            hasil = "D" + hasil;
            break;
        case 14:
            hasil = "E" + hasil;
            break;
        case 15:
            hasil = "F" + hasil;
            break;
        }
        angka /= 16;
    }
    return hasil;
}

int main()
{
    int octal;
    cout << "bilangan yang akan dikonvert: ";
    cin >> octal;

    cout << "Dalam desimal: " << toDecimal(octal) << "\n";
    cout << "Dalam biner: " << toBinary(toDecimal(octal)) << "\n";
    cout << "Dalam heksadesimal: " << toHex(toDecimal(octal)) << "\n";
}