#include <iostream>

int data[100000];
int batas;
int triggerAscending = 0;
int triggerDescending = 0;

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

void descending()
{
	for (int x = 0; x < batas; x++)
	{
		for (int y = x + 1; y < batas; y++)
		{
			if (data[y] > data[x])
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
	if (triggerAscending == 1)
	{
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

	}
	else if (triggerDescending == 1)
	{
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
					tengah--;
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
					tengah++;
				}

			}
		}
	}
	else
	{
		std::cout << "Data Belum Diurutkan";
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
		std::cout << "Program Binary Search";
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
				do
				{
					std::cout << "Pengoperasian Program \n1. Tampil Data\n2. Urut Secara Ascending\n3. Urut Secara Descending\n4. Cari Data\n5. Keluar Program\n\nPilihan: ";
					std::cin >> pilihan;
					switch (pilihan)
					{
						case 1:
							system("cls");
							tampilData();
							break;
						case 2:
							system("cls");
							ascending();
							triggerAscending = 1;
							triggerDescending = 0;
							std::cout << "Data Selesai Diurutkan Secara Ascending";
							hapusDanReset();
							break;
						case 3:
							system("cls");
							descending();
							triggerAscending = 0;
							triggerDescending = 1;
							std::cout << "Data Selesai Diurutkan Secara Descending";
							hapusDanReset();
							break;
						case 4:
							system("cls");
							std::cout << "Masukkan Data Yang Akan Dicari: ";
							std::cin >> cari;
							searchData(cari);
							break;
						case 5:
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
