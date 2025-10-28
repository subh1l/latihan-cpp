/*
Nama Program: record.cpp
Nama        : Subhil Mubarak
NPM         : 140810250032
Tanggal buat: 22 Oktober 2025
Deskripsi   : menampilkan surat sesuai data yang diberikan
Waktu buat  : 16 menit 5 detik
*/

#include <iostream>
using namespace std;

struct KopSurat
{
    string namaPenerima;
    string namaPengirim;
    string nomorPenerima;
    string nomorPengirim;
    string alamat;
};

struct Format
{
    KopSurat header;
    string isi;
    string tempat;
    string tanggal;
};

Format input();
void print(Format surat);

int main()
{
    Format surat = input();

    print(surat);

    return 0;
}

Format input()
{
    Format temp;
    getline(cin, temp.header.namaPenerima);
    getline(cin, temp.header.namaPengirim);
    cin >> temp.header.nomorPenerima;
    cin >> temp.header.nomorPengirim;
    cin.ignore();
    getline(cin, temp.header.alamat);
    getline(cin, temp.isi);
    getline(cin, temp.tempat);
    getline(cin, temp.tanggal);

    return temp;
}

void print(Format surat)
{
    cout << "Nama Penerima Surat : " << surat.header.namaPenerima << "\n";
    cout << "Nama Pengirim Surat : " << surat.header.namaPengirim << "\n";
    cout << "Nomor Telepon Penerima Surat : " << surat.header.nomorPenerima << "\n";
    cout << "Nomor Telepon Pengirim Surat : " << surat.header.nomorPengirim << "\n";
    cout << "Alamat Tujuan Surat : " << surat.header.alamat << "\n";
    cout << "Surat : \n  Isi : " << surat.isi << "\n";
    cout << "  Tempat Penulisan : " << surat.tempat << "\n";
    cout << "  Tanggal Penulisan : " << surat.tanggal << "\n";
}