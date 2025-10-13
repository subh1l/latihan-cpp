/*
Nama Program: convertdecimal.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 2 Oktober 2025
Deskripsi   : konversi angka desimal menjadi biner, oktal, dan heksadesimal
Waktu buat  : 30 menit 41 detik
*/
#include <iostream>
using namespace std;

int toBinary(int number)
{
    int position = 1;
    int result = 0;
    while (number > 0)
    {
        result = result + (number % 2) * position;
        number /= 2;
        position *= 10;
    }
    return result;
}

int toOctal(int number)
{
    int position = 1;
    int result = 0;
    int temp;
    while (number > 0)
    {
        temp = number % 8;
        switch (temp)
        {
        case 0:
            result = result + temp * position;
            break;
        case 1:
            result = result + temp * position;
            break;
        case 2:
            result = result + temp * position;
            break;
        case 3:
            result = result + temp * position;
            break;
        case 4:
            result = result + temp * position;
            break;
        case 5:
            result = result + temp * position;
            break;
        case 6:
            result = result + temp * position;
            break;
        case 7:
            result = result + temp * position;
            break;
        }

        number /= 8;
        position *= 10;
    }
    return result;
}
string toHex(int number)
{
    int position = 1;
    string result = "";
    string temp = "";
    while (number > 0)
    {
        switch (number % 16)
        {
        case 0:
            temp += "0";
            break;
        case 1:
            temp += "1";
            break;
        case 2:
            temp += "2";
            break;
        case 3:
            temp += "3";
            break;
        case 4:
            temp += "4";
            break;
        case 5:
            temp += "5";
            break;
        case 6:
            temp += "6";
            break;
        case 7:
            temp += "7";
            break;
        case 8:
            temp += "8";
            break;
        case 9:
            temp += "9";
            break;
        case 10:
            temp += "A";
            break;
        case 11:
            temp += "B";
            break;
        case 12:
            temp += "C";
            break;
        case 13:
            temp += "D";
            break;
        case 14:
            temp += "E";
            break;
        case 15:
            temp += "F";
            break;
        }
        number /= 16;
    }
    for (int i = temp.length() - 1; i >= 0; i--)
    {
        result += temp[i];
    }
    return result;
}

int main()
{
    int n;
    cout << "angka yang akan dikonversi: ";
    cin >> n;
    cout << "Biner: " << toBinary(n);
    cout << "\nOktal: " << toOctal(n);
    cout << "\nHeksadesimal: " << toHex(n) << endl;
}