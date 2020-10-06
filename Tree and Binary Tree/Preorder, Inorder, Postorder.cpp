#include <iostream>

typedef struct node
{
	int data;
	node* left;
	node* right;
}*tree;

tree root;

void buatTree()
{
	root = NULL;
}

int cekRoot()
{
	return (root == NULL) ? 1 : 0;
}

void insertTree(tree insert)
{
	unsigned short int tes;
	if (cekRoot() == 1)
	{
		root = insert;
		root->left = root->right = NULL;
	}
	else
	{
		tree bantu1 = insert, bantu2 = root;
		while ((bantu2->left != NULL) && (bantu2->right != NULL))
		{
			if (bantu1->data > bantu2->data)
			{
				bantu2 = bantu2->right;
			}
			else
			{
				bantu2 = bantu2->left;
			}
		}

		if (bantu1->data > bantu2->data)
		{
			bantu2->right = bantu1;
			bantu2 = bantu2->right;
			bantu2->right = bantu1->left = NULL;
		}
		else
		{
			bantu2->left = bantu1;
			bantu2 = bantu2->left;
			bantu2->left = bantu2->right = NULL;
		}
	}
}

void removeTree(int data)
{
	tree bantu, hapus = root;
	do
	{
		bantu = hapus;
		if (hapus->data > data)
		{
			hapus = hapus->right;
		}
		else
		{
			hapus = hapus->left;
		}
	}
	while (hapus->data != data);
	if (data > hapus->right->data)
	{
		bantu->right = hapus->right;
		delete hapus;
	}
	else if (data < hapus->right->data)
	{
		bantu->right = hapus->right;
		delete hapus;
	}
	else if (data > hapus->left->data)
	{

	}
	else if (data < hapus->left->data)
	{

	}
	else if (hapus->right == NULL)
	{

	}
	else if (hapus->left == NULL)
	{

	}

}


void tampilPreorder(tree n)
{
	if (n != NULL)
	{
		std::cout << n->data << " ";
		tampilPreorder(n->left);
		tampilPreorder(n->right);
	}
}

void tampilInorder(tree n)
{
	if (n != NULL)
	{
		tampilPreorder(n->left);
		tampilPreorder(n->right);
		std::cout << n->data << " ";
	}
}

void tampilPostorder(tree n)
{
	if (n != NULL)
	{
		std::cout << n->data << " ";
		tampilPreorder(n->left);
		tampilPreorder(n->right);
	}
}

void searchTree(int data)
{
	tree bantu;
	unsigned short int tes;
	bantu = root;
	if (cekRoot() == 1)
	{
		std::cout << "Tree Masih Kosong";
	}
	else
	{
		do
		{
			if (bantu->data = data)
			{
				std::cout << "Data Ditemukan";
				break;
			}
			else
			{
				if (bantu->data > data)
				{
					bantu = bantu->right;
				}
				else
				{
					bantu = bantu->left;
				}
			}
		}
		while (true);
	}
}

void salahMemasukkan()
{
	system("cls");
	std::cout << "Anda salah memasukkan input\n\n";
	system("pause");
}

void keluarProgram()
{
	system("cls");
	std::cout << "Anda keluar program\n\n";
	system("pause");
}

void PauseDanHapus()
{
	std::cout << "\n\n";
	system("pause");
	system("cls");
}

int main()
{
	buatTree();
	tree n;
	do
	{
		unsigned short int pilihan;
		system("cls");
		std::cout << "Program Binary Tree";
		PauseDanHapus();
		std::cout << "Apakah anda ingin melanjutkan \n1. Iya\n2. Tidak\n\nPilihan: ";
		std::cin >> pilihan;
		switch (pilihan)
		{
			case 1:
				system("cls");
				int batas, data;
				std::cout << "Masukkan Jumlah Data: ";
				std::cin >> batas;
				system("cls");
				for (int x = 0; x < batas; x++)
				{
					std::cout << "Masukkan Data: ";
					std::cin >> data;
					if (data == 1)
					{
						std::cout << "Data Tidak Boleh 1";
						PauseDanHapus();
						return 0;
					}
					else
					{
						n = new node;
						n->data = data;
						n->right = n->left = NULL;
						insertTree(n);
						std::cout << "Data telah masuk ke data store";
						PauseDanHapus();
					}
				}

				do
				{
					system("cls");
					std::cout << "Pengoperasian Tree\n\n1. Masukkan Data\n2. Cari Data\n3. Tampil Preorder\n4. Tampil Inorder\n5. Tampil Postorder\n6. Hapus Data\n7. Keluar Program\n\nPilihan: ";
					std::cin >> pilihan;
					switch (pilihan)
					{
						case 1:
							system("cls");
							std::cout << "Masukkan Data: ";
							std::cin >> data;
							n = new node;
							n->data = data;
							n->right = n->left = NULL;
							insertTree(n);
							std::cout << "Data telah masuk ke data store";
							PauseDanHapus();
							break;

						case 2:
							system("cls");
							std::cout << "Masukkan Data: ";
							std::cin >> data;
							searchTree(data);
							PauseDanHapus();
							break;

						case 3:
							system("cls");
							std::cout << "Preorder Traversal: ";
							tampilPreorder(root);
							PauseDanHapus();
							break;

						case 4:
							system("cls");
							std::cout << "Inorder Traversal: ";
							tampilInorder(root);
							PauseDanHapus();
							break;

						case 5:
							system("cls");
							std::cout << "Postorder Traversal: ";
							tampilPostorder(root);
							PauseDanHapus();
							break;

						case 6:
							system("cls");
							std::cout << "Masukkan Data: ";
							std::cin >> data;
							removeTree(data);
							PauseDanHapus();
							break;

						case 7:
							keluarProgram();
							return 0;
							break;

						case 8:
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
			default:
				salahMemasukkan();
				return 0;
		}

	}
	while (true);
}
