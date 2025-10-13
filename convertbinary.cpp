/*
Nama Program: convertbinary.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 8 Oktober 2025
Deskripsi   : konversi angka desimal menjadi biner, oktal, dan heksadesimal
Waktu buat  : 40 menit 2 detik
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

int toDecimal(string number)
{
    int total = 0;
    int power = 0;
    for (int i = number.length() - 1; i >= 0; i--)
    {
        if (number[i] == '1')
        {
            total += 1 * pow(2, power);
        }
        else
        {
            total += 0;
        }
        power++;
    }
    return total;
}

int toOctal(string number)
{
    int total = 0;
    string temp;
    int position = 1;

    for (int i = number.length() - 1; i >= 0; i--)
    {
        temp = number[i] + temp;
        if (temp.length() < 3 && i == 0)
        {
            for (int i = 3 - temp.length(); i > 0; i--)
            {
                temp = "0" + temp;
            }
        }
        if (temp.length() == 3)
        {
            if (temp == "000")
            {
                total += 0;
            }
            else if (temp == "001")
            {
                total += 1 * position;
            }
            else if (temp == "010")
            {
                total += 2 * position;
            }
            else if (temp == "011")
            {
                total += 3 * position;
            }
            else if (temp == "100")
            {
                total += 4 * position;
            }
            else if (temp == "101")
            {
                total += 5 * position;
            }
            else if (temp == "110")
            {
                total += 6 * position;
            }
            else if (temp == "111")
            {
                total += 7 * position;
            }
            temp = "";
            position *= 10;
        }
    }
    return total;
}

string toHex(string number)
{
    string total;
    string temp;

    for (int i = number.length() - 1; i >= 0; i--)
    {
        temp = number[i] + temp;
        if (temp.length() < 4 && i == 0)
        {
            for (int i = 4 - temp.length(); i > 0; i--)
            {
                temp = "0" + temp;
            }
        }
        if (temp.length() == 4)
        {
            if (temp == "0000")
            {
                total = "0" + total;
            }
            else if (temp == "0001")
            {
                total = "1" + total;
            }
            else if (temp == "0010")
            {
                total = "2" + total;
            }
            else if (temp == "0011")
            {
                total = "3" + total;
            }
            else if (temp == "0100")
            {
                total = "4" + total;
            }
            else if (temp == "0101")
            {
                total = "5" + total;
            }
            else if (temp == "0110")
            {
                total = "6" + total;
            }
            else if (temp == "0111")
            {
                total = '7' + total;
            }
            else if (temp == "1000")
            {
                total = '8' + total;
            }
            else if (temp == "1001")
            {
                total = '9' + total;
            }
            else if (temp == "1010")
            {
                total = 'A' + total;
            }
            else if (temp == "1011")
            {
                total = 'B' + total;
            }
            else if (temp == "1100")
            {
                total = 'C' + total;
            }
            else if (temp == "1101")
            {
                total = 'D' + total;
            }
            else if (temp == "1110")
            {
                total = 'E' + total;
            }
            else if (temp == "1111")
            {
                total = 'F' + total;
            }
            temp = "";
        }
    }
    return total;
}

int main()
{
    string binarynum;
    cin >> binarynum;

    cout << toDecimal(binarynum) << "\n";
    cout << toOctal(binarynum) << "\n";
    cout << toHex(binarynum) << "\n";
}