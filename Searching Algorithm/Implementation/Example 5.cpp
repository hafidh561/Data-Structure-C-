#include <iostream>
#include <string>

char kalimat[1000000];

void hapusDanReset();
void tampilData()
{
	std::cout << kalimat;
	hapusDanReset();
}


void searchData(char cari, char timpa)
{
	for (int x = 0; x < strlen(kalimat); x++)
	{
		if (kalimat[x] == cari)
		{
			kalimat[x] = timpa;
		}
	}
	std::cout << "Hasil Replace Sebagai Berikut: " << kalimat;
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
		unsigned short int pilihan;
		char cari, timpa;
		std::cout << "Program Pengganti Huruf";
		hapusDanReset();
		std::cout << "Apakah Anda Ingin Melanjutkan?\n1. Iya\n2. Tidak\n\nPilihan: ";
		std::cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				system("cls");
				std::cout << "Masukkan Kalimat: ";
				std::cin.ignore();
				std::cin.getline(kalimat, 100000);
				system("cls");
				do
				{
					std::cout << "Pengoperasian Program \n1. Tampil Kalimat\n2. Ganti Kalimat\n3. Keluar Program\n\nPilihan: ";
					std::cin >> pilihan;
					switch (pilihan)
					{
						case 1:
							system("cls");
							tampilData();
							break;
						case 2:
							system("cls");
							std::cout << "Masukkan Huruf Yang Akan Dicari: ";
							std::cin >> cari;
							std::cout << "Masukkan Huruf Yang Akan Ditimpa: ";
							std::cin >> timpa;
							searchData(cari, timpa);
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
