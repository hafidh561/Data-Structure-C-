#include <iostream>
#include <string>

int data[100000];
int batas;

void hapusDanReset();
void tampilData()
{
	for (int x = 0; x < batas; x++)
	{
		std::cout << "Angka Ke-" << x + 1 << ": " << data[x] << "\n";
	}
	hapusDanReset();
}


void searchData(int cari)
{
	for (int x = 0; x < batas; x++)
	{
		if (cari == data[x])
		{
			std::cout << "Data Ditemukan Pada Posisi Ke-" << x + 1;
			break;
		}
		else if (x == batas - 1 && cari != data[x])
		{
			std::cout << "Maaf Data Yang Dicari Tidak Ada";
			break;
		}
	}
	hapusDanReset();
}

void keluarProgram()
{
	system("cls");
	std::cout << "Anda Keluar Program\n\n";
	system("pause");
}

void salahMemasukkan()
{
	system("cls");
	std::cout << "Anda Salah Memasukkan\n\n";
	system("pause");
}

void hapusDanReset()
{
	std::cout << "\n\n";
	system("pause");
	system("cls");
}

int main()
{
	do
	{
		unsigned short int pilihan, cari;
		std::cout << "Program Pencarian Angka";
		hapusDanReset();
		std::cout << "Apakah Anda Ingin Melanjutkan?\n1. Iya\n2. Tidak\n\nPilihan: ";
		std::cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				system("cls");
				std::cout << "Masukkan Batas: ";
				std::cin >> batas;
				for (int x = 0; x < batas; x++)
				{
					std::cout << "Masukkan Angka Ke-" << x + 1 << ": ";
					std::cin >> data[x];
				}
				system("cls");
				do
				{
					std::cout << "Pengoperasian Program \n1. Tampil Data\n2. Cari Data\n3. Keluar Program\n\nPilihan: ";
					std::cin >> pilihan;
					switch (pilihan)
					{
						case 1:
							system("cls");
							tampilData();
							break;
						case 2:
							system("cls");
							std::cout << "Masukkan Angka Yang Akan Dicari: ";
							std::cin >> cari;
							searchData(cari);
							break;
						case 3:
							keluarProgram();
							return 0;
							break;
						default:
							salahMemasukkan();
							return 0;
							break;
					}
				}
				while (true);
				break;
			case 2:
				keluarProgram();
				return 0;
				break;
			default:
				salahMemasukkan();
				return 0;
				break;
		}

	}
	while (true);
}
