#include <iostream>

int data[100000];
int batas;

void hapusDanReset();
void tampilData()
{
	for (int x = 0; x < batas; x++)
	{
		std::cout << "Data Index Ke-" << x << ": " << data[x] << "\n";
	}
	hapusDanReset();
}

void ascending()
{
	for (int x = 0; x < batas; x++)
	{
		for (int y = x + 1; y < batas; y++)
		{
			if (data[y] < data[x])
			{
				int simpan = data[x];
				data[x] = data[y];
				data[y] = simpan;
			}
		}
	}

}


void searchData(int cari)
{
	int tengah = batas / 2;
	int trigger = 0;
	while (tengah != batas)
	{
		if (cari >= data[tengah])
		{
			if (cari == data[tengah])
			{
				trigger = 1;
				break;
			}
			else
			{
				trigger = 0;
				tengah++;
			}

		}
		else if (cari <= data[tengah])
		{
			if (cari == data[tengah])
			{
				trigger = 1;
				break;
			}
			else
			{
				trigger = 0;
				tengah--;
			}

		}
	}

	if (trigger == 1)
	{
		std::cout << "Data Ditemukan Di Index Ke-" << tengah;
	}
	else if (trigger == 0)
	{
		std::cout << "Data Tidak Ditemukan";
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
		std::cout << "Program Ascending Binary Search";
		hapusDanReset();
		std::cout << "Apakah Anda Ingin Melanjutkan?\n1. Iya\n2. Tidak\n\nPilihan: ";
		std::cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				system("cls");
				std::cout << "Masukkan Batas Data: ";
				std::cin >> batas;
				system("cls");
				for (int x = 0; x < batas; x++)
				{
					std::cout << "Masukkan Data Index Ke-" << x << " : ";
					std::cin >> data[x];
				}
				system("cls");
				ascending();
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
							std::cout << "Masukkan Data Yang Akan Dicari: ";
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
