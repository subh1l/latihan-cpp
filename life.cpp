/*
Nama Program: game of life
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 27 November 2025
Deskripsi   : menentukan keadaan suatu sel pada generasi berikutnya
*/

#include <iostream>
using namespace std;

typedef int larik[100][100];

void input(int &row, int &column, larik &arr)
{
    cin >> row;
    cin >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void output(int row, int column, larik arr)
{
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void skip(int row, int column, larik arr, larik &next)
{
    int count;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            count = 0;
            if (arr[i - 1][j - 1] == 1)
            {
                count++;
            }
            if (arr[i - 1][j] == 1)
            {
                count++;
            }
            if (arr[i - 1][j + 1] == 1)
            {
                count++;
            }
            if (arr[i][j + 1] == 1)
            {
                count++;
            }
            if (arr[i + 1][j + 1] == 1)
            {
                count++;
            }
            if (arr[i + 1][j] == 1)
            {
                count++;
            }
            if (arr[i + 1][j - 1] == 1)
            {
                count++;
            }
            if (arr[i][j - 1] == 1)
            {
                count++;
            }
            if (arr[i][j] == 0 && count == 3)
            {
                next[i][j] = 1;
            }
            else if (arr[i][j] == 1 && (count == 3 || count == 2))
            {
                next[i][j] = 1;
            }
            else if (arr[i][j] == 1 && count > 3)
            {
                next[i][j] = 0;
            }
            else if (arr[i][j] == 1 && count < 2)
            {
                next[i][j] = 0;
            }
        }
    }
}

int main()
{
    larik present;
    larik future;
    int baris;
    int kolom;

    input(baris, kolom, present);
    skip(baris, kolom, present, future);
    output(baris, kolom, future);

    return 0;
}