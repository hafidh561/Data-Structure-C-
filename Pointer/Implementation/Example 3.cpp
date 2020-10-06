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


int main()
{
    do 
    {
        system("cls");
        cout << "Aplikasi Mencari Memory Adress \n\n";
        system("pause");
        system("cls");
        unsigned short int Pilihan;
        int Batas, Input_Angka[1000], Mentok;
        void* Pointer = &Mentok;
        cout << "Masukkan Batas Input: ";
        cin >> Batas;

        for (int x = 0; x < Batas; x++) 
        {
            cout << "Masukkan Angka Ke-" << x + 1 << " : ";
            cin >> Input_Angka[x];
        }
        system("cls");
        Mentok = Input_Angka[0];
        for (int x = 1; x < Batas; x++) 
        {
            if (Mentok < Input_Angka[x]) 
            {
                Mentok = Input_Angka[x];
            }
        }
        cout << "Nilai Maksimumnya Adalah " << Mentok << endl << "Alamat Nilai Tersebut Adalah " << Pointer << endl << endl;
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