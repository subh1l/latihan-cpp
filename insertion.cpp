/*
Nama Program : insertion sort
Nama         : Subhil Mubarak
NPM          : 140810250032
Tanggal Buat : 7 November 2025
Deskripsi    : sorting array dengan teknik insertion sort untuk ascending dan descending
Waktu        : 14 Menit 1 Detik
*/

#include <iostream>
using namespace std;

typedef int larik[100];

void insertionSort(larik &arr, int size, int type);
void input(larik &arr, int &size, int &type);
void output(larik arr, int size);

int main()
{
    larik nums;
    int type, size;

    input(nums, size, type);
    insertionSort(nums, size, type);
    output(nums, size);

    return 0;
}

void insertionSort(larik &arr, int size, int type)
{
    int key, index;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        index = i - 1;
        if (type == 1)
        {
            while (arr[index] > key && index >= 0)
            {
                arr[index + 1] = arr[index];
                index--;
            }
            arr[index + 1] = key;
        }
        else
        {
            while (arr[index] < key && index >= 0)
            {
                arr[index + 1] = arr[index];
                index--;
            }
            arr[index + 1] = key;
        }
    }
}

void input(larik &arr, int &size, int &type)
{
    cout << "Jenis pengurutan[1/-1]: ";
    cin >> type;
    cout << "Jumlah elemen: ";
    cin >> size;
    cout << "Elemen: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void output(larik arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}