/*
Nama Program: rotate
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 17 November 2025
Deskripsi   : memutar array 90 derajat
*/

#include <iostream>
using namespace std;

typedef int larik[20][20];

void rotate(larik &arr, int size);
void input(larik &arr, int &size);
void output(larik arr, int size);
void swap(int &num1, int &num2);

int main()
{
    larik matrix;
    int size;

    input(matrix, size);
    rotate(matrix, size);
    output(matrix, size);

    return 0;
}

void input(larik &arr, int &size)
{
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void output(larik arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void rotate(larik &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size / 2; j++)
        {
            swap(arr[i][j], arr[i][size - j - 1]);
        }
    }
}