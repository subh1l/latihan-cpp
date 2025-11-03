/*
Nama Program: set zeroes
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal Buat: 3 November 2025
Waktu Buat  : 38 Menit 24 detik
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int rowNum[row] = {0};
    int colNum[col] = {0};
    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowNum[i] = 1;
                colNum[j] = 1;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (rowNum[i] == 1 || colNum[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}
