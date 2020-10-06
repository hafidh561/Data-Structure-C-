#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct node
{
	string password;
	node* next;
	node* prev;
}*list;

list head;
list tail;
int batas;

void initData()
{
	head = NULL;
	tail = NULL;
}

int cekHead()
{
	return (head == NULL) ? 1 : 0;
}

void tampilList()
{
	list bantu;
	bantu = head;
	if (cekHead() == 1)
	{
		cout << "Password Masih Kosong";
	}
	else
	{
		for (int x = 1; x <= batas; x++)
		{
			cout << "Karakter Ke-" << x << " : " << bantu->password << endl;
			bantu = bantu->next;
		}
	}
}

void tampilListBaru()
{
	list bantu;
	bantu = head;
	if (cekHead() == 1)
	{
		cout << "Password Masih Kosong";
	}
	else
	{
		for (int x = 1; x <= batas; x++)
		{
			cout << bantu->password;
			bantu = bantu->next;
		}
	}
}

void hapusDepan();
void hapusBelakang();
void hapusData(int nomor)
{
	list bantu;
	if (cekHead() == 1)
	{
		system("cls");
		cout << "Password Masih Kosong\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		if (nomor == 1)
		{
			hapusDepan();
		}
		else if (nomor == batas)
		{
			hapusBelakang();
		}
		else if ((nomor > batas) || (nomor < 0))
		{
			system("cls");
			cout << "No Urutan Tidak Ditemukan\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			bantu = head;
			for (int x = 1; x < nomor; x++)
			{
				bantu = bantu->next;
			}
			bantu->prev->next = bantu->next;
			bantu->next->prev = bantu->prev;
			delete bantu;
			batas--;
			system("cls");
			cout << "Karakter Ke-" << nomor << " Telah Dihapus\n\n";
			system("pause");
			system("cls");
		}
	}
}

void hapusDepan()
{
	if (cekHead() == 1)
	{
		system("cls");
		cout << "Password Masih Kosong\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		list bantu;
		bantu = head;
		head = head->next;
		head->prev = tail;
		tail->next = head;
		delete bantu;
		batas--;
		system("cls");
		cout << "Karakter Terdepan Telah Dihapus\n\n";
		system("pause");
		system("cls");
	}
}

void hapusBelakang()
{
	list bantu;
	if (cekHead() == 1)
	{
		system("cls");
		cout << "Password Masih Kosong\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		bantu = tail;
		tail = tail->prev;
		tail->next = head;
		head->prev = tail;
		delete bantu;
		batas--;
		system("cls");
		cout << "Karakter Terbelakang Telah Dihapus\n\n";
		system("pause");
		system("cls");
	}
}

void hapusSebelumNode(int nomor)
{
	list bantu;
	if (cekHead() == 1)
	{
		system("cls");
		cout << "Password Masih Kosong\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		if (nomor == 1)
		{
			hapusBelakang();
		}
		else if (nomor == 2)
		{
			hapusDepan();
		}
		else if ((nomor > batas) || (nomor < 0))
		{
			system("cls");
			cout << "No Urutan Tidak Ditemukan\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			bantu = head;
			for (int x = 1; x < nomor - 1; x++)
			{
				bantu = bantu->next;
			}
			bantu->prev->next = bantu->next;
			bantu->next->prev = bantu->prev;
			delete bantu;
			batas--;
			system("cls");
			cout << "Karakter Sebelum Ke-" << nomor << " Telah Dihapus\n\n";
			system("pause");
			system("cls");
		}
	}
}

void hapusSetelahNode(int nomor)
{
	list bantu;
	if (cekHead() == 1)
	{
		system("cls");
		cout << "Password Masih Kosong\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		if (nomor == batas)
		{
			hapusDepan();
		}
		else if (nomor == batas - 1)
		{
			hapusBelakang();
		}
		else if ((nomor > batas) || (nomor < 0))
		{
			system("cls");
			cout << "No Urutan Tidak Ditemukan\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			bantu = head;
			for (int x = 1; x <= nomor; x++)
			{
				bantu = bantu->next;
			}
			bantu->prev->next = bantu->next;
			bantu->next->prev = bantu->prev;
			delete bantu;
			batas--;
			system("cls");
			cout << "Karakter Setelah Ke-" << nomor << " Telah Dihapus\n\n";
			system("pause");
			system("cls");
		}
	}
}

void hapusSemua()
{
	list bantu;
	list hapus;
	if (cekHead() == 1)
	{
		system("cls");
		cout << "Password Masih Kosong\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		bantu = head;
		while (bantu != tail)
		{
			hapus = bantu;
			bantu = bantu->next;
			delete hapus;
		}
		head = NULL;
		tail = NULL;
		batas = 0;
		delete bantu;
		system("cls");
		cout << "Password Telah Terhapus\n\n";
		system("pause");
		system("cls");
	}
}

void gantiData(list insert, int nomor)
{
	list bantu;
	if (cekHead() == 1)
	{
		system("cls");
		cout << "Password Masih Kosong\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		if (nomor == 1)
		{
			bantu = head;
			insert->next = bantu->next;
			bantu->next->prev = insert;
			insert->prev = tail;
			tail->next = insert;
			head = insert;
			delete bantu;
			system("cls");
			cout << "Karakter Ke-" << nomor << " Telah Diganti\n\n";
			system("pause");
			system("cls");
		}
		else if (nomor == batas)
		{
			bantu = tail;
			bantu->prev->next = insert;
			insert->prev = bantu->prev;
			insert->next = head;
			head->prev = insert;
			tail = insert;
			delete bantu;
			system("cls");
			cout << "Karakter Ke-" << nomor << " Telah Diganti\n\n";
			system("pause");
			system("cls");
		}
		else if ((nomor > batas) || (nomor < 0))
		{
			system("cls");
			cout << "No Urutan Tidak Ditemukan\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			bantu = head;
			for (int x = 1; x < nomor; x++)
			{
				bantu = bantu->next;
			}
			bantu->prev->next = insert;
			insert->prev = bantu->prev;
			insert->next = bantu->next;
			bantu->next->prev = insert;
			delete bantu;
			system("cls");
			cout << "Karakter Ke-" << nomor << " Telah Diganti\n\n";
			system("pause");
			system("cls");
		}
	}
}

void dataDepan(list insert)
{
	if (cekHead() == 1)
	{
		head = insert;
		head->next = NULL;
		head->prev = NULL;
		batas++;
	}
	else
	{
		insert->next = head;
		head->prev = insert;
		head = insert;
		head->prev = tail;
		batas++;
	}
	system("cls");
	cout << "Karakter Telah Ditambahkan Di Depan\n\n";
	system("pause");
	system("cls");
}

void dataBelakang(list insert)
{
	if (cekHead() == 1)
	{
		dataDepan(insert);
	}
	else
	{
		tail->next = insert;
		insert->prev = tail;
		tail = insert;
		tail->next = head;
		head->prev = tail;
		batas++;
	}
	system("cls");
	cout << "Karakter Telah Ditambahkan Di Belakang\n\n";
	system("pause");
	system("cls");
}

void DataSebelumNode(list insert, int nomor)
{
	list bantu;
	if (cekHead() == 1)
	{
		dataDepan(insert);
	}
	else
	{
		if (nomor == 1)
		{
			dataBelakang(insert);
		}
		else if (nomor == 2)
		{
			dataDepan(insert);
		}
		else if ((nomor > batas) || (nomor < 0))
		{
			system("cls");
			cout << "No Urutan Tidak Ditemukan\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			bantu = head;
			for (int x = 1; x < nomor; x++)
			{
				bantu = bantu->next;
			}
			bantu->prev->next = insert;
			insert->prev = bantu->prev;
			insert->next = bantu;
			bantu->prev = insert;
			batas++;
			system("cls");
			cout << "Karakter Telah Ditambahkan Sebelum Data Ke-" << nomor << "\n\n";
			system("pause");
			system("cls");
		}
	}

}

void DataSetelahNode(list insert, int nomor)
{
	list bantu;
	if (cekHead() == 1)
	{
		dataDepan(insert);
	}
	else
	{
		if (nomor == batas)
		{
			dataDepan(insert);
		}
		else if (nomor == batas - 1)
		{
			dataBelakang(insert);
		}
		else if ((nomor > batas) || (nomor < 0))
		{
			system("cls");
			cout << "No Urutan Tidak Ditemukan\n\n";
			system("pause");
			system("cls");
		}
		else
		{
			bantu = head;
			for (int x = 1; x <= nomor; x++)
			{
				bantu = bantu->next;
			}
			bantu->prev->next = insert;
			insert->prev = bantu->prev;
			insert->next = bantu;
			bantu->prev = insert;
			batas++;
			system("cls");
			cout << "Karakter Telah Ditambahkan Setelah Data Ke-" << nomor << "\n\n";
			system("pause");
			system("cls");
		}
	}
}

void Enkripsi()
{
	list bantu, tempat;
	char random;
	bantu = head;
	for (int x = 1; x <= batas; x++)
	{
		if (x == batas - 2)
		{
			bantu->prev->next = NULL;
			bantu->prev = NULL;
			head = bantu;
		}
		else
		{
			bantu = bantu->next;
		}
	}

	bantu = head;
	do
	{
		bantu = bantu->next;
	} while (bantu->next != NULL);
	tail = bantu;
	head->prev = tail;
	tail->next = head;

	int jarak, a, b, hasil;
	jarak = 33 - 47;
	a = rand();
	b = a % jarak;
	hasil = b + 33;
	random = hasil;

	tempat = new node;
	tempat->password = random;
	bantu = head;
	for (int x = 1; x <= 3; x++)
	{
		bantu = bantu->next;
	}
	bantu->prev->next = tempat;
	tempat->prev = bantu->prev;
	tempat->next = bantu;
	bantu->prev = tempat;
	batas++;
}

void Deskripsi()
{
	list bantu, hapus;
	hapus = bantu = head;
	for (int x = 1; x <= 3; x++)
	{
		hapus = hapus->next;
	}
	hapus->prev->next = hapus->next;
	hapus->next->prev = hapus->prev;
	delete hapus;
	batas--;

	for (int x = 1; x <= 3; x++)
	{
		bantu = bantu->next;
	}
	bantu->prev->next = NULL;
	bantu->prev = NULL;
	head = bantu;

	bantu = head;
	do
	{
		bantu = bantu->next;
	} while (bantu->next != NULL);
	tail = bantu;
	head->prev = tail;
	tail->next = head;
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
	initData();
	list n;
	list bantu;
	bantu = new node;
	do
	{
		unsigned short int pilihan, urutan, count = 0;
		string data;
		system("cls");
		cout << "Program Enkripsi Password\n\n";
		system("pause"); system("cls");
		cout << "Apakah anda ingin melanjutkan ? \n1. Iya\n2. Tidak\n\nPilihan: ";
		cin >> pilihan;
		switch (pilihan)
		{
		case 1:
			system("cls");
			cout << "Masukkan Panjang Password: ";
			cin >> batas;
			if (batas < 6)
			{
				system("cls");
				cout << "Panjang Password Harus Lebih Besar Sama Dengan 6!! \n\n";
				system("pause");
				system("cls");
				break;
			}
			else
			{
				system("cls");
				for (int x = 1; x <= batas; x++)
				{
					if (x == 1)
					{
						cout << "Masukkan Karakter Ke-" << x << " : ";
						cin >> data;
						n = new node;
						n->password = data;
						n->prev = tail;
						head = n;
						bantu = n;
					}
					else if (x == batas)
					{
						cout << "Masukkan Karakter Ke-" << x << " : ";
						cin >> data;
						n = new node;
						n->password = data;
						bantu->next = n;
						n->prev = bantu;
						n->next = head;
						tail = n;
						head->prev = tail;
						bantu = head;
						cout << "Password Telah Masuk Ke Data Store\n\n";
						system("pause");
						system("cls");
					}
					else
					{
						cout << "Masukkan Karakter Ke-" << x << " : ";
						cin >> data;
						n = new node;
						n->password = data;
						bantu->next = n;
						n->prev = bantu;
						bantu = bantu->next;
					}
				}
				do
				{
					system("cls");
					cout << "Pengoperasian Password \n\n1. Tampilkan Data\n2. Enkripsi Password\n3. Deskripsi Password\n4. Hapus Data Menurut Urutan\n5. Hapus Data Depan \n6. Hapus Data Belakang\n7. Hapus Data Sebelum Urutan\n8. Hapus Data Setelah Urutan\n9. Hapus Semua Data\n10. Ganti Data\n11. Input Data Depan\n12. Input Data Belakang\n13. Input Data Sebelum Urutan\n14. Input Data Setelah Urutan\n15. Keluar Program\n\nPilihan: ";
					cin >> pilihan;
					switch (pilihan)
					{
					case 1:
						system("cls");
						tampilList();
						cout << endl << endl;
						system("pause");
						system("cls");
						break;
					case 2:
						switch (count)
						{
						case 0:
							system("cls");
							cout << "Password Asli: ";
							tampilListBaru();
							Enkripsi();
							cout << "\nPassword Setelah Di Enkripsi: ";
							tampilListBaru();
							cout << endl << endl;
							system("pause");
							system("cls");
							count++;
							break;
						default:
							system("cls");
							cout << "Password Sudah Di Enkripsi\n\n";
							cout << endl << endl;
							system("pause");
							system("cls");
							break;
						}
						break;
					case 3:
						switch (count)
						{
						case 1:
							system("cls");
							cout << "Password Sebelum Di Deskripsi: ";
							tampilListBaru();
							Deskripsi();
							cout << "\nPassword Setelah Di Deskripsi: ";
							tampilListBaru();
							cout << endl << endl;
							system("pause");
							system("cls");
							count--;
							break;
						default:
							system("cls");
							cout << "Password Sudah Di Deskripsi\n\n";
							cout << endl << endl;
							system("pause");
							system("cls");
							break;
						}
						break;
					case 4:
						system("cls");
						tampilList();
						cout << endl << endl;
						cout << "Masukkan Nomor Urutan: ";
						cin >> urutan;
						hapusData(urutan);
						break;
					case 5:
						system("cls");
						hapusDepan();
						break;
					case 6:
						system("cls");
						hapusBelakang();
						break;
					case 7:
						system("cls");
						tampilList();
						cout << endl << endl;
						cout << "Masukkan Nomor Urutan: ";
						cin >> urutan;
						hapusSebelumNode(urutan);
						break;
					case 8:
						system("cls");
						tampilList();
						cout << endl << endl;
						cout << "Masukkan Nomor Urutan: ";
						cin >> urutan;
						hapusSetelahNode(urutan);
						break;
					case 9:
						system("cls");
						hapusSemua();
						break;
					case 10:
						system("cls");
						tampilList();
						cout << endl << endl;
						cout << "Masukkan Nomor Urutan: ";
						cin >> urutan;
						cout << "Masukkan Karakter Baru: ";
						cin >> data;
						n = new node;
						n->password = data;
						gantiData(n, urutan);
						break;
					case 11:
						system("cls");
						cout << "Masukkan Karakter: ";
						cin >> data;
						n = new node;
						n->password = data;
						dataDepan(n);
						break;
					case 12:
						system("cls");
						system("cls");
						cout << "Masukkan Karakter: ";
						cin >> data;
						n = new node;
						n->password = data;
						dataBelakang(n);
						break;
					case 13:
						system("cls");
						system("cls");
						tampilList();
						cout << endl << endl;
						cout << "Masukkan Nomor Urutan: ";
						cin >> urutan;
						cout << "Masukkan Karakter: ";
						cin >> data;
						n = new node;
						n->password = data;
						DataSebelumNode(n, urutan);
						break;
					case 14:
						system("cls");
						system("cls");
						tampilList();
						cout << endl << endl;
						cout << "Masukkan Nomor Urutan: ";
						cin >> urutan;
						cout << "Masukkan Karakter: ";
						cin >> data;
						n = new node;
						n->password = data;
						DataSetelahNode(n, urutan);
						break;
					case 15:
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
			
		case 2:
			KeluarProgram();
			return 0;
		default:
			SalahMemasukkan();
			return 0;
		}
	} while (true);
}
