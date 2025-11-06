/*
Nama Program : fileOperation
Nama         : Subhil Mubarak
NPM          : 140810250032
Tanggal Buat : 6 November 2025
Deskripsi    : melakukan operasi caesar cipher dan menyimpan hasil dalam file external
Durasi       : 10 Menit 13 Detik
*/

#include <iostream>
#include <fstream>
using namespace std;

void input(int &shift, string &nama, string &text);
void enkripsi(int shift, string &text);
void output(string text);
void save(string nama, string text);

int main()
{
    int shift;
    string text, nama;

    input(shift, nama, text);
    enkripsi(shift, text);
    save(nama, text);
    output(text);

    return 0;
}

void input(int &shift, string &nama, string &text)
{
    getline(cin, text);
    cin >> shift;
    cin.ignore();
    getline(cin, nama);
}

void enkripsi(int shift, string &text)
{
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = text[i] + shift;
            if (text[i] > 'Z')
            {
                text[i] = char((text[i] - 'A') % 26 + 'A');
            }
        }
    }
}

void save(string nama, string text)
{
    ofstream file;
    file.open(nama);
    file << text;
    file.close();
}

void output(string text)
{
    cout << text << "\n";
}