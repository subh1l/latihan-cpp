/*
Nama Program: sort.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 16 Oktober 2025
Deskripsi   : mengurutkan warna dengan urutan merah - kuning - biru
Waktu buat  : 13 menit 1 detik
*/

#include <iostream>
using namespace std;

void swap(int &a, int &b);
void sort(int arr[], int size);
void print(int arr[], int size);
void input(int arr[], int size);

int main()
{
    int size;
    cin >> size;

    int colors[size];
    
    sort(colors, size);

    print(colors, size);
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            cout << "Merah";
        }
        else if (arr[i] == 2)
        {
            cout << "Kuning";
        }
        else if (arr[i] == 3)
        {
            cout << "Biru";
        }

        if (i + 1 == size)
        {
            cout << "\n";
        }
        else
        {
            cout << " ";
        }
    }
}

void input(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        string temp;
        cin >> temp;
        if (temp == "Merah" || temp == "merah")
        {
            arr[i] = 1;
        }
        else if (temp == "Kuning" || temp == "kuning")
        {
            arr[i] = 2;
        }
        else if (temp == "Biru" || temp == "biru")
        {
            arr[i] = 3;
        }
    }
}
