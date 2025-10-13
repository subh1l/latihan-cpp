/*
Nama Program: array.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal Buat: 13 Oktober 2025
*/

#include <iostream>
using namespace std;

int main()
{
    /*
    Deskripsi       : menentukan berapa banyak bilangan dengan jumlah digit genap
    Waktu Pengerjaan: 6 menit 27 detik
    */

    int size, total = 0;
    cin >> size;

    int num[size];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < size; i++)
    {
        int count = 0;
        do
        {
            num[i] /= 10;
            count++;
        } while (num[i] > 0);

        if (count % 2 == 0)
        {
            total++;
        }
    }
    cout << total << "\n";

    /* 
    Deskripsi       : memberikan hasil nilai tertinggi dari pengoperasian 2 elemen array
    Waktu Pengerjaan: 13 menit 38 detik
    */
    int size, max[2] = {0, 0}, ban = 1;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] > max[i] && j != ban)
            {
                max[i] = arr[j];
                if (i == 0)
                {
                    ban = j;
                }
            }
        }
    }
    cout << (max[0] - 1) * (max[1] - 1) << "\n";
}