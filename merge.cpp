/*
Nama Program: findpivot.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 15 Oktober 2025
Deskripsi   : menggabungkan nilai dari 2 array dan mengurutkannya
Waktu buat  : 20 menit 40 detik
*/

#include <iostream>
using namespace std;

int main()
{
    int sizea, sizeb, numa;
    cout << "masukkan ukuran array a & b:";
    cin >> sizea >> sizeb;
    cout << "masukkan jumlah elemen array a:";
    cin >> numa;

    int numsa[sizea], numsb[sizeb];
    for (int i = 0; i < sizea; i++)
    {
        if (i >= numa)
        {
            numsa[i] = 0;
        }
        else
        {
            cin >> numsa[i];
        }
    }

    for (int i = 0; i < sizeb; i++)
    {
        cin >> numsb[i];
    }

    int idx = 0;
    for (int i = numa; i < sizea; i++)
    {
        numsa[i] = numsb[idx];
        idx++;
    }

    for (int i = 0; i < sizea; i++)
    {
        for (int j = 0; j < sizea - i - 1; j++)
        {
            if (numsa[j] > numsa[j + 1])
            {
                int temp = numsa[j];
                numsa[j] = numsa[j + 1];
                numsa[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < sizea; i++)
    {
        if (i + 1 == sizea)
        {
            cout << numsa[i] << "\n";
        }
        else
        {
            cout << numsa[i] << " ";
        }
    }
}