#include <iostream>
#include <string>
using namespace std;

void SalahMemasukkan()
{
    system("cls");
    cout << "Anda Salah Memasukkan Input\n\n";
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
        char notasi[100000];
        char sederhana[100000];
        char hasil[100000];
        system("cls");
        cout << "Program Mengubah Notasi Matematika Infix Menjadi Postfix\n\n";
        system("pause");
        system("cls");
        unsigned short int pilihan, kurung = 0;
        int count = 0, tambah = -1, countTambah = -1;
        cout << "Apakah anda ingin melanjutkan ?\n\n1. Iya \n2. Tidak \n\nPilihan: ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            for (int x = 0; x<100000; x++)
            {
                system("cls");
                cout << "1. Masukkan Character\n2. Selesai\n\nPilihan: ";
                cin >> pilihan;
                if (pilihan == 1)
                {
                    if ((x % 2 == 0)&&(kurung >= 0))
                    {
                        do
                        {
                            system("cls");
                            cout << "1. Huruf\n2. Buka Kurung (\n\nPilihan: ";
                            cin >> pilihan;
                            if (pilihan == 1)
                            {
                                system("cls");
                                cout << "Masukkan Huruf: ";
                                cin >> notasi[count];
                                if ((notasi[count] >= 65) && (notasi[count] <= 122))
                                {
                                    system("cls");
                                    cout << "Notasi Matematika: ";
                                    for (int y = 0; y <= count; y++)
                                    {
                                        cout << notasi[y];
                                    }
                                    cout << endl << endl;
                                    cout << "Apakah Benar ?\n1. Iya\n2. Tidak\n\nPilihan: ";
                                    cin >> pilihan;
                                    if (pilihan == 1)
                                    {
                                        count++;
                                        break;
                                    }
                                    else if (pilihan == 2)
                                    {

                                    }
                                    else
                                    {
                                        SalahMemasukkan();
                                        return 0;
                                    }
                                }
                                else
                                {
                                    SalahMemasukkan();
                                    return 0;
                                }
                                
                            }
                            else if (pilihan == 2)
                            {
                                kurung++;
                                notasi[count] = '(';
                                system("cls");
                                cout << "Notasi Matematika: ";
                                for (int y = 0; y <= count; y++)
                                {
                                    cout << notasi[y];
                                }
                                cout << endl << endl;
                                cout << "Apakah Benar ?\n1. Iya\n2. Tidak\n\nPilihan: ";
                                cin >> pilihan;
                                if (pilihan == 1)
                                {
                                    count++;
                                    x++;
                                    break;
                                }
                                else if (pilihan == 2)
                                {

                                }
                                else
                                {
                                    SalahMemasukkan();
                                    return 0;
                                }
                            }
                        } while (true);
                    }
                    else
                    {
                        if (kurung > 0)
                        {
                            do
                            {
                                system("cls");
                                cout << "Pilih Operasi Matematika:\n1. Buka Kurung (\n2. Pangkat ^\n3. Kali x\n4. Bagi /\n5. Tambah +\n6. Kurang - \n\nOpsi Tambahan: \n7. Tutup Kurung )\n\nPilihan: ";
                                cin >> pilihan;
                                if (pilihan == 1)
                                {
                                    kurung++;
                                    x++;
                                    notasi[count] = '(';
                                }
                                else if (pilihan == 2)
                                {
                                    notasi[count] = '^';
                                }
                                else if (pilihan == 3)
                                {
                                    notasi[count] = 'x';
                                }
                                else if (pilihan == 4)
                                {
                                    notasi[count] = '/';
                                }
                                else if (pilihan == 5)
                                {
                                    notasi[count] = '+';
                                }
                                else if (pilihan == 6)
                                {
                                    notasi[count] = '-';
                                }
                                else if (pilihan == 7)
                                {
                                    kurung--;
                                    x++;
                                    notasi[count] = ')';
                                }
                                else
                                {
                                    SalahMemasukkan();
                                    return 0;
                                }

                                system("cls");
                                cout << "Notasi Matematika: ";
                                for (int y = 0; y <= count; y++)
                                {
                                    cout << notasi[y];
                                }
                                cout << endl << endl;
                                cout << "Apakah Benar ?\n1. Iya\n2. Tidak\n\nPilihan: ";
                                cin >> pilihan;
                                if (pilihan == 1)
                                {
                                    count++;
                                    break;
                                }
                                else if (pilihan == 2)
                                {

                                }
                                else
                                {
                                    SalahMemasukkan();
                                    return 0;
                                }

                            } while (true);
                        }
                        else
                        {
                            do
                            {
                                system("cls");
                                cout << "Pilih Operasi Matematika:\n1. Buka Kurung (\n2. Pangkat ^\n3. Kali x\n4. Bagi /\n5. Tambah +\n6. Kurang - \n\nPilihan: ";
                                cin >> pilihan;
                                if (pilihan == 1)
                                {
                                    kurung++;
                                    notasi[count] = '(';
                                }
                                else if (pilihan == 2)
                                {
                                    notasi[count] = '^';
                                }
                                else if (pilihan == 3)
                                {
                                    notasi[count] = 'x';
                                }
                                else if (pilihan == 4)
                                {
                                    notasi[count] = '/';
                                }
                                else if (pilihan == 5)
                                {
                                    notasi[count] = '+';
                                }
                                else if (pilihan == 6)
                                {
                                    notasi[count] = '-';
                                }
                                else
                                {
                                    SalahMemasukkan();
                                    return 0;
                                }
                                system("cls");
                                cout << "Notasi Matematika: ";
                                for (int y = 0; y <= count; y++)
                                {
                                    cout << notasi[y];
                                }
                                cout << endl << endl;
                                cout << "Apakah Benar ?\n1. Iya\n2. Tidak\n\nPilihan: ";
                                cin >> pilihan;
                                if (pilihan == 1)
                                {
                                    count++;
                                    break;
                                }
                                else if (pilihan == 2)
                                {

                                }
                                else
                                {
                                    SalahMemasukkan();
                                    return 0;
                                }
                            } while (true);
                        }
                    }
                }
                else if (pilihan == 2)
                {
                    count--;
                    system("cls");
                    for (int x = 0; x <= count; x++)
                    {
                        if (notasi[x] == '(')
                        {
                            tambah++;
                            sederhana[tambah] = notasi[x];
                        }
                        else if (notasi[x] == ')')
                        {
                            do
                            { 
                                if (sederhana[tambah] == '(')
                                {
                                    tambah--;
                                    if (x == count)
                                    {
                                        do
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            tambah--;
                                        } while (tambah == 0);
                                    }
                                    break;
                                }
                                else
                                {
                                    countTambah++;
                                    hasil[countTambah] = sederhana[tambah];
                                    tambah--;
                                }
                            } while (true);
                        }
                        else if (notasi[x] == '^')
                        {
                            tambah++;
                            sederhana[tambah] = notasi[x];
                        }
                        else if (notasi[x] == 'x')
                        {
                            if ((sederhana[tambah] == '^') || (sederhana[tambah] == '('))
                            {
                                if (sederhana[tambah] == '(')
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    do
                                    {
                                        if ((sederhana[tambah] == '/') || (sederhana[tambah] == 'x') || (tambah == 0))
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            sederhana[tambah] = notasi[x];
                                            break;
                                        }
                                        else
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            tambah--;
                                        }
                                    } while (true);
                                }
                            }
                            else
                            {
                                if (tambah == -1)
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else if ((sederhana[tambah] == '+') || (sederhana[tambah] == '-'))
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    countTambah++;
                                    hasil[countTambah] = sederhana[tambah];
                                    sederhana[tambah] = notasi[x];
                                } 
                            }
                        }
                        else if (notasi[x] == '/')
                        {
                            if ((sederhana[tambah] == '^') || (sederhana[tambah] == '('))
                            {
                                if (sederhana[tambah] == '(')
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    do
                                    {
                                        if ((sederhana[tambah] == '/') || (sederhana[tambah] == 'x') || (tambah == 0))
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            sederhana[tambah] = notasi[x];
                                            break;
                                        }
                                        else
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            tambah--;
                                        }
                                    } while (true);
                                }
                            }
                            else
                            {
                                if (tambah == -1)
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else if ((sederhana[tambah] == '+') || (sederhana[tambah] == '-'))
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    countTambah++;
                                    hasil[countTambah] = sederhana[tambah];
                                    sederhana[tambah] = notasi[x];
                                }
                            }
                        }
                        else if (notasi[x] == '+')
                        {
                            if ((sederhana[tambah] == '^') || (sederhana[tambah] == 'x') || (sederhana[tambah] == '/') || (sederhana[tambah] == '('))
                            {
                                if (sederhana[tambah] == '(')
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    do
                                    {
                                        if ((sederhana[tambah] == '-') || (sederhana[tambah] == '+') || (tambah == 0))
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            sederhana[tambah] = notasi[x];
                                            break;
                                        }
                                        else
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            tambah--;
                                        }
                                    } while (true);
                                }
                            }
                            else
                            {
                                if (tambah == -1)
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    countTambah++;
                                    hasil[countTambah] = sederhana[tambah];
                                    sederhana[tambah] = notasi[x];
                                }
                            }
                        }
                        else if (notasi[x] == '-')
                        {
                            if ((sederhana[tambah] == '^') || (sederhana[tambah] == 'x') || (sederhana[tambah] == '/') || (sederhana[tambah] == '('))
                            {
                                if (sederhana[tambah] == '(')
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    do
                                    {
                                        if ((sederhana[tambah] == '-') || (sederhana[tambah] == '+') || (tambah == 0))
                                        {

                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            sederhana[tambah] = notasi[x];
                                            break;
                                        }
                                        else
                                        {
                                            countTambah++;
                                            hasil[countTambah] = sederhana[tambah];
                                            tambah--;
                                        }
                                    } while (true);
                                }
                            }
                            else
                            {
                                if (tambah == -1)
                                {
                                    tambah++;
                                    sederhana[tambah] = notasi[x];
                                }
                                else
                                {
                                    countTambah++;
                                    hasil[countTambah] = sederhana[tambah];
                                    sederhana[tambah] = notasi[x];
                                }
                            }
                        }
                        else
                        {
                            countTambah++;
                            hasil[countTambah] = notasi[x];
                            if (x == count)
                            {
                                do
                                {
                                    countTambah++;
                                    hasil[countTambah] = sederhana[tambah];
                                    tambah--;
                                } while (tambah == 0);
                            }
                        }
                    }

                    system("cls");
                    cout << "Infix: ";
                    for (int y = 0; y <= count; y++)
                    {
                        cout << notasi[y];
                    }
                    cout << endl;
                    cout << "Postfix: ";
                    for (int x = 0; x <= countTambah; x++)
                    {
                        cout << hasil[x];
                    }
                    cout << endl << endl;
                    system("pause");
                    system("cls");
                    break;
                }
                else
                {
                    SalahMemasukkan();
                    return 0;
                }
            }
        }
        else if (pilihan == 2)
        {
            KeluarProgram();
            return 0;
        }
        else
        {
            SalahMemasukkan();
            return 0;
        }
	} while (true);
}
