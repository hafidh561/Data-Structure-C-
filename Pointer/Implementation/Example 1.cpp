#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


void SalahMemasukkan()
{
    system("cls");
    cout << "Anda Salah Memasukkan Input" << endl << endl;
    system("pause");
}

void KeluarProgram()
{
    system("cls");
    cout << "Anda Keluar Program \n\n";
    system("pause");
}

int Rumus(char *Panjang_String) 
{
    int Panjang = 0;
    while (*Panjang_String != '\0') 
    {
        Panjang++;
        Panjang_String++;
    }
    return Panjang;
}

int main()
{
    do 
    {
        system("cls");
        cout << "Aplikasi Penghitung Jumlah Karakater Dengan Pointer \n\n";
        system("pause");
        system("cls");
        unsigned short int Pilihan;
        char Kalimat[1000];
        cout << "Masukkan Kalimat: ";
        cin >> Kalimat;
        cout << "\n\nMaka Panjang Kalimat Tersebut Adalah " << Rumus(Kalimat) << " Huruf\n\n";
        system("pause");
        system("cls");
        cout << "Keluar Program ?\n1. Iya \n2. Tidak\n\nPilihan: ";
        cin >> Pilihan;
        if (Pilihan == 1)
        {
            KeluarProgram();
            return 0;
        }
        else if (Pilihan == 2) 
        {

        }
        else
        {
            SalahMemasukkan();
            return 0;
        }
    } while (true);
}