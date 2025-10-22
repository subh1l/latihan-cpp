/*
Nama Program: beban.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 17 Oktober 2025
Deskripsi   : meratakan beban pada setiap node
Waktu buat  : 22 menit 5 detik
*/

#include <iostream>
using namespace std;

int main()
{
    int node, total = 0, avg, check, count = 0;
    bool tolerate = false;
    cin >> node;

    int burden[node];
    for (int i = 0; i < node; i++)
    {
        cin >> burden[i];
        total += burden[i];
    }

    if (total % node != 0)
    {
        tolerate = true;
    }
    avg = total / node;

    if (tolerate)
    {
        check = avg + 1;
    }
    else
    {
        check = avg;
    }

    for (int i = node - 1; i >= 0; i--)
    {
        if (burden[i] > check)
        {
            int extra = burden[i] - check;
            for (int j = 0; j < node; j++)
            {
                while (extra > 0 && burden[j] < check)
                {
                    burden[j]++;
                    extra--;
                    count++;
                }
            }
        }
    }
    cout << count << "\n";
}