/*
Nama Program : bubble sort
Nama         : Subhil Mubarak
NPM          : 140810250032
Tanggal Buat : 8 November 2025
Deskripsi    : sorting array dengan teknik buble sort untuk ascending dan descending
Waktu        : 16 Menit 19 Detik
*/

#include <iostream>
using namespace std;

typedef int larik[100];

void swap(int &num1, int &num2);
void input(int &size, larik &arr, int &type);
void sort(int size, larik &arr, int type);
void output(int size, larik arr);

int main()
{
    int type, size;
    larik nums;

    input(size, nums, type);
    sort(size, nums, type);
    output(size, nums);

    return 0;
}

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void input(int &size, larik &arr, int &type)
{
    cout << "Jenis pengurutan[1/-1]: ";
    cin >> type;
    cout << "Jumlah elemen: ";
    cin >> size;
    cout << "Nilai Elemen:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void sort(int size, larik &arr, int type)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (type == 1)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
            else if (type == -1)
            {
                if (arr[j] < arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
            else
            {
                break;
            }
        }
    }
}

void output(int size, larik arr)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}