/*
Nama Program: container
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 16 November 2025
Deskripsi   : menentukan bentuk kontainer dengan volume terbanyak
*/

#include <iostream>
using namespace std;

typedef int larik[100000];

void input(int &size, larik &arr);
void findVolume(int size, larik arr, int &volume);
void output(int result);

int main()
{
    larik height;
    int n;
    int volume = 0;

    input(n, height);
    findVolume(n, height, volume);
    output(volume);

    return 0;
}

void input(int &size, larik &arr)
{
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void findVolume(int size, larik arr, int &volume)
{
    int distance;
    int finalHeight;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            finalHeight = (arr[i] < arr[j]) ? arr[i] : arr[j];
            (i < j) ? distance = j - i : distance = i - j;
            if (i != j && (distance * finalHeight) > volume)
            {
                volume = distance * finalHeight;
            }
        }
    }
}

void output(int result)
{
    cout << result << endl;
}