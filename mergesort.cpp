/*
Nama Program: mergesort.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 9 November 2025
Deskripsi   : sorting array dengan teknik merge sort untuk ascending dan descending
*/

#include <iostream>
using namespace std;

typedef int larik[100];

void merge(larik &arr, int low, int mid, int high, int type);
void sort(larik &arr, int low, int high, int type);
void input(larik &arr, int &size, int &type);
void output(larik arr, int size);

int main()
{
    larik nums;
    int type, size;

    input(nums, size, type);
    sort(nums, 0, size - 1, type);
    output(nums, size);

    return 0;
}

void merge(larik &arr, int low, int mid, int high, int type)
{
    int sizeLeft = mid - low + 1;
    int sizeRight = high - mid;
    int left[sizeLeft], right[sizeRight];

    for (int i = 0; i < sizeLeft; i++)
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < sizeRight; i++)
    {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = low;
    while (i < sizeLeft && j < sizeRight)
    {
        if (type == 1)
        {
            if (left[i] <= right[j])
            {
                arr[k] = left[i];
                k++;
                i++;
            }
            else
            {
                arr[k] = right[j];
                k++;
                j++;
            }
        }
        else if (type == -1)
        {
            if (left[i] >= right[j])
            {
                arr[k] = left[i];
                k++;
                i++;
            }
            else
            {
                arr[k] = right[j];
                k++;
                j++;
            }
        }
    }
    while (i < sizeLeft)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < sizeRight)
    {
        arr[k] = left[j];
        k++;
        j++;
    }
}

void sort(larik &arr, int low, int high, int type)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        sort(arr, low, mid, type);
        sort(arr, mid + 1, high, type);
        merge(arr, low, mid, high, type);
    }
}

void input(larik &arr, int &size, int &type)
{
    cout << "Jenis Pengurutan[1/-1]: ";
    cin >> type;
    cout << "Jumlah Elemen: ";
    cin >> size;
    cout << "Nilai Elemen:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void output(larik arr, int size)
{
    cout << "\nData yang sudah diurutkan:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}