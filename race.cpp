/*
Nama Program : race
Nama         : Subhil Mubarak
NPM          : 140810250032
Tanggal Buat : 13 November 2025
Deskripsi    : perbaikan dari jawaban quiz 2
*/

#include <iostream>
#include <fstream>
using namespace std;

struct Pembalap
{
    string nama;
    int nomor;
    int waktu;
};

void start();
void option(bool &status, string path, Pembalap *list, int &count);
void add(string path, Pembalap *list, int &count);
void read(Pembalap *list, string path, int &count);
void print(Pembalap *list, int count);
void save(Pembalap *list, string path, int count);

int main()
{
    Pembalap *listPembalap = new Pembalap[20];
    bool run = true;
    string path = "pembalap.txt";
    int jumlah = 0;

    read(listPembalap, path, jumlah);

    while (run)
    {
        start();
        option(run, path, listPembalap, jumlah);
    }

    save(listPembalap, path, jumlah);

    delete[] listPembalap;
};

void option(bool &status, string path, Pembalap *list, int &count)
{
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        add(path, list, count);
        break;
    case 2:
        print(list, count);
        break;
    case 3:
        status = false;
        break;

    default:
        cout << "Opsi tidak Valid!";
        break;
    }
}

void start()
{
    cout << "-----------------------------\n";
    cout << "1. Tambah Peserta Balapan\n";
    cout << "2. Tampilkan Semua Peserta\n";
    cout << "3. Keluar\n";
    cout << "-----------------------------\n";
}
void read(Pembalap *list, string path, int &count)
{
    ifstream load(path);
    count = 0;
    if (!load.is_open())
    {
        return;
    }
    while (load >> list[count].nomor >> list[count].waktu)
    {
        load.ignore();
        getline(load, list[count].nama);
        count++;
    }
    load.close();
}

void print(Pembalap *list, int count)
{
    cout << "-----------------------------\n";
    for (int i = 0; i < count; i++)
    {
        cout << "Nama Pembalap: " << list[i].nama << "\n";
        cout << "Nomor Mobil: " << list[i].nomor << "\n";
        cout << "Waktu: " << list[i].waktu << "\n";
        cout << "-----------------------------\n";
    }
}

void save(Pembalap *list, string path, int count)
{
    ofstream save(path);
    for (int i = 0; i < count; i++)
    {
        save << list[i].nomor << "\n"
             << list[i].waktu << "\n"
             << list[i].nama << "\n";
    }
}

void add(string path, Pembalap *list, int &count)
{
    cin.ignore();
    cout << "Nama Peserta: ";
    getline(cin, list[count].nama);
    cout << "Nomor Mobil: ";
    cin.ignore();
    cin >> list[count].nomor;
    cout << "Waktu: ";
    cin >> list[count].waktu;
    count++;
}