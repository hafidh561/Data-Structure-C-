#include <iostream>
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

struct Data_Barang
{
    string Kode_Barang;
    string Nama_Barang;
    int Harga_Barang;
    
};

struct Data_Pembeli
{
    Data_Barang Barang;
    string Kode_Pembeli;
    string Status;
    string Nama;
};

int main()
{
    do
    {
        Data_Pembeli Pembeli[1000];
        int Pilihan, Jumlah_Barang[1000], Sub_Total[1000], Total_Pembelian = 0, Diskon_Pembelian = 0, Uang, Count = 0, a = 0;
        string Input_Pembeli, Input_Barang[1000];
        system("cls");
        cout << "Aplikasi Data Pembelian dan Data Barang \n\n";
        system("pause");
        system("cls");
        cout << "Apakah anda ingin melanjutkan ?\n\n1. Iya \n2. Tidak \n\nPilihan: ";
        cin >> Pilihan;
        if (Pilihan == 1) 
        {
            system("cls");
            for (int x = 1; x <= 5; x++) 
            {
                if (x == 1) 
                {
                    Pembeli[x].Kode_Pembeli = "P001";
                    Pembeli[x].Status = "M";
                    Pembeli[x].Nama = "Diana";
                    Pembeli[x].Barang.Kode_Barang = "BRG001";
                    Pembeli[x].Barang.Nama_Barang = "Pensil";
                    Pembeli[x].Barang.Harga_Barang = 2000;
                }
                else if (x == 2) 
                {
                    Pembeli[x].Kode_Pembeli = "P002";
                    Pembeli[x].Status = "M";
                    Pembeli[x].Nama = "Rina";
                    Pembeli[x].Barang.Kode_Barang = "BRG002";
                    Pembeli[x].Barang.Nama_Barang = "Buku tulis";
                    Pembeli[x].Barang.Harga_Barang = 3500;
                }
                else if (x == 3) 
                {
                    Pembeli[x].Kode_Pembeli = "P003";
                    Pembeli[x].Status = "BM";
                    Pembeli[x].Nama = "Lina";
                    Pembeli[x].Barang.Kode_Barang = "BRG003";
                    Pembeli[x].Barang.Nama_Barang = "Penghapus";
                    Pembeli[x].Barang.Harga_Barang = 1000;
                }
                else if (x == 4) 
                {
                    Pembeli[x].Kode_Pembeli = "P004";
                    Pembeli[x].Status = "BM";
                    Pembeli[x].Nama = "Doni";
                    Pembeli[x].Barang.Kode_Barang = "BRG004";
                    Pembeli[x].Barang.Nama_Barang = "Penggaris";
                    Pembeli[x].Barang.Harga_Barang = 1500;
                }
                else if (x == 5) 
                {
                    Pembeli[x].Kode_Pembeli = "P005";
                    Pembeli[x].Status = "M";
                    Pembeli[x].Nama = "Dodi";
                    Pembeli[x].Barang.Kode_Barang = "BRG005";
                    Pembeli[x].Barang.Nama_Barang = "Bollpoint";
                    Pembeli[x].Barang.Harga_Barang = 2500;
                }
                else
                {
                    SalahMemasukkan();
                    return 0;
                }
            }
            cout << "List Kode Pembeli \n\n";
            for (int x = 1; x <= 5; x++)
            {
                cout << Pembeli[x].Kode_Pembeli << endl;
            }
            cout << "\nMasukkan Kode Pembeli: ";
            cin >> Input_Pembeli;
            if (Input_Pembeli == Pembeli[1].Kode_Pembeli) 
            {
                cout << "\nNama Pembeli: " << Pembeli[1].Nama;
                cout << "\nStatus Pembeli: " << Pembeli[1].Status << endl;
            }
            else if (Input_Pembeli == Pembeli[2].Kode_Pembeli)
            {
                cout << "\nNama Pembeli: " << Pembeli[2].Nama;
                cout << "\nStatus Pembeli: " << Pembeli[2].Status << endl;
            }
            else if (Input_Pembeli == Pembeli[3].Kode_Pembeli)
            {
                cout << "\nNama Pembeli: " << Pembeli[3].Nama;
                cout << "\nStatus Pembeli: " << Pembeli[3].Status << endl;
            }
            else if (Input_Pembeli == Pembeli[4].Kode_Pembeli)
            {
                cout << "\nNama Pembeli: " << Pembeli[4].Nama;
                cout << "\nStatus Pembeli: " << Pembeli[4].Status << endl;
            }
            else if (Input_Pembeli == Pembeli[5].Kode_Pembeli)
            {
                cout << "\nNama Pembeli: " << Pembeli[5].Nama;
                cout << "\nStatus Pembeli: " << Pembeli[5].Status << endl;
            }
            else
            {
                SalahMemasukkan();
                return 0;
            }
            cout << endl << endl;
            system("pause");
            system("cls");
            do 
            {
                cout << "Masukkan Uang Pembeli: ";
                cin >> Uang;
                cout << endl << endl;
                system("pause");
                system("cls");
                if (Uang < 1000) 
                {
                    cout << "Masukkan Uang Minimal Rp. 1000";
                    system("cls");
                }
                else
                {
                    break;
                }
            } while (true);
            for (int x = 1; x <= 1000; x++) 
            {
                system("cls");
                cout << "List Kode Barang \n\n";
                cout << "Barang Ke-" << x << endl << endl;
                for (int x = 1; x <= 5; x++)
                {
                    cout << Pembeli[x].Barang.Kode_Barang << endl;
                }
                cout << "\nMasukkan Kode Barang: ";
                cin >> Input_Barang[x];
                if ((Input_Barang[x] == Pembeli[1].Barang.Kode_Barang)&&(Uang > 1000))
                {
                     cout << "Nama Barang: " << Pembeli[1].Barang.Nama_Barang << endl;
                     cout << "Harga Barang: " << Pembeli[1].Barang.Harga_Barang << endl;
                     cout << "Jumlah Barang: ";
                     cin >> Jumlah_Barang[x];
                     Sub_Total[x] = Jumlah_Barang[x] * Pembeli[1].Barang.Harga_Barang;
                     cout << "Sub Total: " << Sub_Total[x];
                     Total_Pembelian = Sub_Total[x] + Total_Pembelian;
                     if (Jumlah_Barang[x] > 3)
                     {
                         Diskon_Pembelian = 300 + Diskon_Pembelian;
                         Total_Pembelian = Total_Pembelian - 300;
                     }
                }
                else if ((Input_Barang[x] == Pembeli[2].Barang.Kode_Barang) && (Uang > 1000))
                {
                    cout << "Nama Barang: " << Pembeli[2].Barang.Nama_Barang << endl;
                    cout << "Harga Barang: " << Pembeli[2].Barang.Harga_Barang << endl;
                    cout << "Jumlah Barang: ";
                    cin >> Jumlah_Barang[x];
                    Sub_Total[x] = Jumlah_Barang[x] * Pembeli[2].Barang.Harga_Barang;
                    cout << "Sub Total: " << Sub_Total[x];
                    Total_Pembelian = Sub_Total[x] + Total_Pembelian;
                    if (Jumlah_Barang[x] > 3)
                    {
                        Diskon_Pembelian = 300 + Diskon_Pembelian;
                        Total_Pembelian = Total_Pembelian - 300;
                    }
                }
                else if (Input_Barang[x] == Pembeli[3].Barang.Kode_Barang)
                {
                    cout << "Nama Barang: " << Pembeli[3].Barang.Nama_Barang << endl;
                    cout << "Harga Barang: " << Pembeli[3].Barang.Harga_Barang << endl;
                    cout << "Jumlah Barang: ";
                    cin >> Jumlah_Barang[x];
                    Sub_Total[x] = Jumlah_Barang[x] * Pembeli[3].Barang.Harga_Barang;
                    cout << "Sub Total: " << Sub_Total[x];
                    Total_Pembelian = Sub_Total[x] + Total_Pembelian;
                    if (Jumlah_Barang[x] > 3)
                    {
                        Diskon_Pembelian = 300 + Diskon_Pembelian;
                        Total_Pembelian = Total_Pembelian - 300;
                    }
                 }
                else if ((Input_Barang[x] == Pembeli[4].Barang.Kode_Barang) && (Uang > 1000))
                {
                    cout << "Nama Barang: " << Pembeli[4].Barang.Nama_Barang << endl;
                    cout << "Harga Barang: " << Pembeli[4].Barang.Harga_Barang << endl;
                    cout << "Jumlah Barang: ";
                    cin >> Jumlah_Barang[x];
                    Sub_Total[x] = Jumlah_Barang[x] * Pembeli[4].Barang.Harga_Barang;
                    cout << "Sub Total: " << Sub_Total[x];
                    Total_Pembelian = Sub_Total[x] + Total_Pembelian;
                    if (Jumlah_Barang[x] > 3)
                    {
                        Diskon_Pembelian = 300 + Diskon_Pembelian;
                        Total_Pembelian = Total_Pembelian - 300;
                    }
                }
                else if ((Input_Barang[x] == Pembeli[5].Barang.Kode_Barang) && (Uang > 1000))
                {
                    cout << "Nama Barang: " << Pembeli[5].Barang.Nama_Barang << endl;
                    cout << "Harga Barang: " << Pembeli[5].Barang.Harga_Barang << endl;
                    cout << "Jumlah Barang: ";
                    cin >> Jumlah_Barang[x];
                    Sub_Total[x] = Jumlah_Barang[x] * Pembeli[5].Barang.Harga_Barang;
                    cout << "Sub Total: " << Sub_Total[x];
                    Total_Pembelian = Sub_Total[x] + Total_Pembelian;
                    if (Jumlah_Barang[x] > 3)
                    {
                        Diskon_Pembelian = 300 + Diskon_Pembelian;
                        Total_Pembelian = Total_Pembelian - 300;
                    }
                }
                else
                {
                    cout << "Uang Anda Tidak Cukup" << endl << endl;
                    system("pause");
                    system("cls");
                    return 0;
                }
                cout << "\n\n";
                system("pause");
                system("cls");
                Count++;
                cout << "Tambah Barang ? \n\n1. Iya \n2. Tidak \n\nPilihan: ";
                cin >> Pilihan;
                if (Pilihan == 1) 
                {

                }
                else if (Pilihan == 2) 
                {
                    break;
                }
                else 
                {
                    SalahMemasukkan();
                    return 0;
                }
            }
            if ((Input_Pembeli == "P001")|| (Input_Pembeli == "P002")|| (Input_Pembeli == "P003"))
            {
                Diskon_Pembelian = (Total_Pembelian * 0.1) + Diskon_Pembelian;
                Total_Pembelian = (Total_Pembelian - (Total_Pembelian * 0.1));
            }
            else
            {

            }
            system("cls");
            cout << "TOKO INDO APRIL \nJl. Dl Panjaitan 128 Purwokerto \n\nKode Barang\tNama Barang\tJumlah\tHarga\tTotal\n";
            for (int x = 1; x <= Count; x++) 
            {
                cout << endl << Pembeli[x].Barang.Kode_Barang << "\t\t" << Pembeli[x].Barang.Nama_Barang;
                if (Pembeli[x].Barang.Kode_Barang == "BRG002")
                {
                    cout << "\t" << Jumlah_Barang[x];
                }
                else 
                {
                    cout << "\t\t" << Jumlah_Barang[x];
                }
                cout  << "\t" << Pembeli[x].Barang.Harga_Barang << "\t" << Sub_Total[x];
            }
            cout << endl << endl;
            cout << "Subtotal\t\t\t\t\t";
            for (int x = 1; x <= Count; x++) 
            {
                a = Sub_Total[x] + a;
            }
            cout << a;
            cout << endl;
            cout << "Diskon\t\t\t\t\t\t" << Diskon_Pembelian;
            cout << endl;
            cout << "Total\t\t\t\t\t\t" << Total_Pembelian;
            cout << endl;
            cout << "Jumlah Bayar\t\t\t\t\t" << Uang;
            cout << endl;
            cout << "Kembali\t\t\t\t\t\t" << Uang - Total_Pembelian;
            cout << "\n\n";
            cout << "Data Pembeli\n";
            if (Input_Pembeli == Pembeli[1].Kode_Pembeli)
            {
                cout << "Kode Pembeli : " << Input_Pembeli;
                cout << "\nNama Pembeli : " << Pembeli[1].Nama;
                if (Pembeli[1].Status == "M") 
                {
                    cout << "\nStatus : Member";
                }
                else 
                {
                    cout << "\nStatus : Bukan Member";
                }
            }
            else if (Input_Pembeli == Pembeli[2].Kode_Pembeli)
            {
                cout << "Kode Pembeli : " << Input_Pembeli;
                cout << "\nNama Pembeli : " << Pembeli[2].Nama;
                if (Pembeli[1].Status == "M")
                {
                    cout << "\nStatus : Member";
                }
                else
                {
                    cout << "\nStatus : Bukan Member";
                }
            }
            else if (Input_Pembeli == Pembeli[3].Kode_Pembeli)
            {
                cout << "Kode Pembeli : " << Input_Pembeli;
                cout << "\nNama Pembeli : " << Pembeli[3].Nama;
                if (Pembeli[1].Status == "M")
                {
                    cout << "\nStatus : Member";
                }
                else
                {
                    cout << "\nStatus : Bukan Member";
                }
            }
            else if (Input_Pembeli == Pembeli[4].Kode_Pembeli)
            {
                cout << "Kode Pembeli : " << Input_Pembeli;
                cout << "\nNama Pembeli : " << Pembeli[4].Nama;
                if (Pembeli[1].Status == "M")
                {
                    cout << "\nStatus : Member";
                }
                else
                {
                    cout << "\nStatus : Bukan Member";
                }
            }
            else if (Input_Pembeli == Pembeli[5].Kode_Pembeli)
            {
                cout << "Kode Pembeli : " << Input_Pembeli;
                cout << "\nNama Pembeli : " << Pembeli[5].Nama;
                if (Pembeli[1].Status == "M")
                {
                    cout << "\nStatus : Member";
                }
                else
                {
                    cout << "\nStatus : Bukan Member";
                }
            }
            cout << endl << endl;
            system("pause");
            system("cls");
            cout << "Apakah anda ingin keluar program  ? \n\n1. Iya \n2. Tidak \n\nPilihan: ";
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
        }
        else if (Pilihan == 2) 
        {
            system("cls");
            KeluarProgram();
            return 0;
        }
        else 
        {
            system("cls");
            SalahMemasukkan();
            return 0;
        }
        
    } while (true);
}
