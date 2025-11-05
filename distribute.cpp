/*
Nama Program : quick descending
Nama         : Subhil Mubarak
NPM          : 140810250032
Tanggal Buat : 5 November 2025
Deskripsi    : meratakan beban
Waktu        : 30 Menit 21 Detik
*/

#include <iostream>
using namespace std;

void swap(int &a, int &b);
int partition(int arr[], int low, int high, int sort);
void quickSort(int arr[], int low, int high, int sort);
void print(int arr[], int size);
void inputArr(int arr[], int size);

int main()
{
    int size, type;
    cout << "Jenis urutan(1/-1): ";
    cin >> type;
    cout << "Jumlah elemen array: ";
    cin >> size;
    int num[size];
    cout << "Elemen array:\n";
    inputArr(num, size);

    quickSort(num, 0, size - 1, type);

    print(num, size);
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high, int sort)
{
    int pivot = arr[high];
    int index = low - 1;

    for (int i = low; i < high; i++)
    {
        if (sort == 1)
        {
            if (arr[i] <= pivot)
            {
                index++;
                swap(arr[index], arr[i]);
            }
        }
        else
        {
            if (arr[i] >= pivot)
            {
                index++;
                swap(arr[index], arr[i]);
            }
        }
    }
    swap(arr[index + 1], arr[high]);
    return index + 1;
}

void quickSort(int arr[], int low, int high, int sort)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high, sort);
        quickSort(arr, low, pivot - 1, sort);
        quickSort(arr, pivot + 1, high, sort);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void inputArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}