#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
	do 
	{
		system("cls");
		cout << "Pratikum Struktur Data Array\n\n";
		system("pause");
		system("cls");
		cout << "1. Soal 1 \n2. Soal 2 \n3. Soal 3 \n4. Soal 4 \n5. Soal 5 \n\nPilihan: ";
		unsigned short int PilihanSoal;
		cin >> PilihanSoal;
		if (PilihanSoal == 1) 
		{
			system("cls");
			int ArrayA[2][2] = { {4,8},{2,10} };
			int ArrayB[2][2] = { {-5,4},{8,-12} };
			int j, k;
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Matriks B" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Hasil Penjumlahan Matriks A dan B" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] + ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			system("pause");
		}
		else if (PilihanSoal == 2) 
		{
			system("cls");
			int ArrayA[2][2] = { {4,8},{2,10} };
			int ArrayB[2][2] = { {-5,4},{8,-12} };
			int j, k;
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Matriks B" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Hasil Pengurangan Matriks A dan B" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] - ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			system("pause");
		}
		else if (PilihanSoal == 3) 
		{
			system("cls");
			int ArrayA[2][2] = { {4,8},{2,10} }; 
			system("cls");
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Eksponen Dari Matriks A Adalah " << endl;
			for (int x = 0; x < 2; x++) 
			{
				for (int y = 0; y < 2; y++) 
				{
					int Rumus = 1;
					for (int z = 0; z < 5; z++) 
					{
						Rumus = (ArrayA[x][y] * Rumus);
					}
					cout << Rumus << " ";
				}
				cout << endl;
			}
			cout << endl;
			system("pause");
		}
		else if (PilihanSoal == 4) 
		{
			system("cls");
			int ArrayA[2][2] = { {4,8},{2,10} };
			int ArrayB[2][2] = { {-5,4},{8,-12} };
			int hasil[2][2];
			int i, j, k, jumlah = 0;
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Matriks B" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Maka Hasil Perkaliannya Adalah" << endl;
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					for (k = 0; k < 2; k++)
					{
						jumlah = jumlah + ArrayA[i][k] * ArrayB[k][j];
					}
					hasil[i][j] = jumlah;
					jumlah = 0;
				}
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					cout << hasil[i][j] << "\t";
				}
				cout << endl;
			}
			cout << endl;
			system("pause");
		}
		else if (PilihanSoal == 5) 
		{
			system("cls");
			int ArrayA[2][2] = { {4,8},{2,10} };
			int ArrayB[2][2];
			int j, k;
			cout << "Matriks A" << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					cout << ArrayA[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl << "Maka Transposenya Adalah " << endl;
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					ArrayB[i][j] = ArrayA[j][i];
					cout << ArrayB[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			system("pause");
		}

		system("cls");
		cout << "Keluar Program? \n1. Iya \n2. Tidak \n\nPilihan: ";
		cin >> PilihanSoal;
		if (PilihanSoal == 1)
			return 0;
		else if (PilihanSoal == 2)
			continue;
		else 
		{
			cout << "Anda Salah Memasukkan Pilihan \n\n";
			return 0;
		}
			
	} while (true);
}