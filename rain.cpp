/*
Nama Program: trap rain
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 24 November 2025
Deskripsi   : menghitung berapa banyak air hujan yang bisa ditampung
*/

#include <iostream>
using namespace std;

typedef int larik[10000];

void input(int &size, larik &height);
int findMax(int size, larik arr);
void trapRain(int size, larik height, int &rain);
void output(int result);

int main()
{
    larik terrain;
    int size;
    int rain = 0;

    input(size, terrain);
    trapRain(size, terrain, rain);
    output(rain);

    return 0;
}

void input(int &size, larik &height)
{
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> height[i];
    }
}

int findMax(int size, larik arr)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void trapRain(int size, larik height, int &rain)
{
    int max = findMax(size, height);
    for (int i = 1; i < max; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (height[j] >= i && height[j + 1] < i)
            {
                int idx = j + 1;
                int count = 0;
                while (idx < size)
                {
                    if (height[idx] >= i)
                    {
                        rain += count;
                        break;
                    }
                    count++;
                    idx++;
                }
            }
        }
    }
}

void output(int result)
{
    cout << result << endl;
}