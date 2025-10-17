/*
Nama Program: findpivot.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 14 Oktober 2025
Deskripsi   : mencari index yang total nilai kiri dan kanannya sama
Waktu buat  : 8 menit 43 detik
*/

#include <iostream>
using namespace std;

int main()
{
    int size, right, left;
    cin >> size;

    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < size; i++)
    {
        right = 0;
        for (int r = i + 1; r < size; r++)
        {
            right += num[r];
        }

        left = 0;
        for (int l = i - 1; l >= 0; l--)
        {
            left += num[l];
        }

        if (left == right)
        {
            cout << i << "\n";
            break;
        }
        else if (i + 1 == size && left != right)
        {
            cout << -1 << "\n";
        }
    }
}