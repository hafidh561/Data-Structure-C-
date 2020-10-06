#include <iostream>
using namespace std;

typedef struct
{
	int data[100000], head, tail;
}queue;

int batas;
queue antrian;

void MembuatAntrian()
{
	antrian.head = antrian.tail = -1;
}

int Kosong()
{
	if (antrian.tail == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Penuh()
{
	if (antrian.tail == batas - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Tambah(int data)
{
	system("cls");
	if (Kosong() == 1)
	{
		if (antrian.tail == -1)
		{
			antrian.head = antrian.tail = 0;
			antrian.data[antrian.tail] = data;
			cout << "Data: " << data << " Telah Masuk Ke Data Store\n\n";
			system("pause"); system("cls");
		}
		else
		{
			cout << "Data Store Kosong\n\n";
			system("pause"); system("cls");
		}
	}
	else if (Kosong() == 0)
	{
		if (antrian.tail != batas - 1)
		{
			for (int x = antrian.tail; x >= 0; x--)
			{
				antrian.data[x + 1] = antrian.data[x];
			}
			antrian.tail++;
			antrian.data[antrian.head] = data;
			cout << "Data: " << data << " Telah Masuk Ke Data Store\n\n";
			system("pause"); system("cls");
		}
		else
		{
			cout << "Data Store Sudah Penuh\n\n";
			system("pause"); system("cls");
		}
		
	}
	else
	{
		cout << "Data Store Sudah Penuh\n\n";
		system("pause"); system("cls");
	}
}

void Keluar()
{
	cout << "Data: " << antrian.data[antrian.tail] << " Telah Keluar";
	antrian.tail--;
	cout << endl << endl;
	system("pause");
	system("cls");
}

void HapusAntrian()
{
	antrian.head = antrian.tail = -1;
	cout << "Semua Data Telah Terhapus\n\n";
	system("pause"); system("cls");
}

void TampilkanAntrian()
{
	for (int x = antrian.head; x <= antrian.tail; x++)
	{
		cout << "Data Ke-" << x + 1 << ": " << antrian.data[x] << endl;
	}
}


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
	MembuatAntrian();
	do
	{
		unsigned short int pil;
		int data, count = -1;
		float total = 0;
		system("cls");
		cout << "Program Stack\n\n";
		system("pause"); system("cls");
		cout << "Apakah anda ingin melanjutkan ?\n1. Iya\n2. Tidak\n\nPilihan: ";
		cin >> pil;
		switch (pil)
		{
		case 1:
			system("cls");
			cout << "Masukkan Batas Data: ";
			cin >> batas;
			do
			{
				system("cls");
				cout << "1. Enqueue\n2. Dequeue\n3. Tampil\n4. Clear\n5. Banyak Data\n6. Jumlah Data\n7. Rata-Rata\n8. Exit\nPilihan: ";
				cin >> pil;
				switch (pil)
				{
				case 1:
					system("cls");
					cout << "Masukkan Angka: ";
					cin >> data;
					Tambah(data);
					break;
				case 2:
					system("cls");
					Keluar();
					break;
				case 3:
					system("cls");
					TampilkanAntrian();
					system("pause");
					break;
				case 4:
					system("cls");
					HapusAntrian();
					break;
				case 5:
					system("cls");
					do
					{
						count++;
					} while (antrian.data[count] != NULL);

					for (int x = antrian.head; x < count; x++)
					{
						total = total + antrian.data[x];
					}
					cout << "Banyak Data: " << total << endl << endl;
					total = 0;
					system("pause"); system("cls");
					break;
				case 6:
					system("cls");
					cout << "Jumlah Data: " << antrian.tail + 1;
					cout << endl << endl;
					system("pause");
					system("cls");
					break;
				case 7:
					system("cls");
					do
					{
						count++;
					} while (antrian.data[count] != NULL);

					for (int x = antrian.head; x < count; x++)
					{
						total = total + antrian.data[x];
					}
					cout << "Rata-Rata: " << (total / (antrian.tail + 1));
					total = 0;
					cout << endl << endl;
					system("pause");
					system("cls");
					break;
				case 8:
					KeluarProgram();
					return 0;
					break;
				default:
					SalahMemasukkan();
					return 0;
					break;
				}
			} while (true);
		case 2:
			KeluarProgram();
			return 0;
			break;
		default:
			SalahMemasukkan();
			return 0;
			break;
		}
	} while (true);
}
