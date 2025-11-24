/*
Nama Program: spiral
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 19 November 2025
Deskripsi   : menampilkan nilai array secara spiral
*/

#include <iostream>
using namespace std;

typedef int larik[10][10];

void input(larik &arr, int &row, int &column);
void spiral(larik arr, int row, int column);
void output(int num);

int main()
{
    larik nums;
    int length, width;

    input(nums, length, width);
    spiral(nums, length, width);
    cout << endl;

    return 0;
}

void input(larik &arr, int &row, int &column)
{
    cin >> row >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void output(int num)
{
    cout << num << " ";
}

void spiral(larik arr, int row, int column)
{
    int up = 0;
    int down = row -1;
    int right = column -1;
    int left = 0;

    do
    {
        for (int i = left; i <= right; i++){
            output(arr[up][i]);
        }up++;
        for (int i = up; i <= down; i++){
            output(arr[i][right]);
        }right--;
        if (up > down || left > right) break;
        for (int i = right; i >= left; i--){
            output(arr[down][i]);
        }down--;
        for (int i = down; i >= up; i--){
            output(arr[i][left]);
        }left++;
    } while (up <= down && left <= right);
}