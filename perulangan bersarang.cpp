#include <iostream>
using namespace std;

int main ()
{
	//Tugas Perulangan Bersarang
	
	int baris, baris1, kolom, kolom1;
	cout << "Masukkan angka agar baris dan kolom membentuk piramid" << endl;
	cout << "Angka yang diinginkan ";
	cin >> kolom1;
	
	for (baris = kolom1 ; baris >= 0 ; baris--)
	{
		for (baris1 = baris ; baris1 >= 0 ; baris1--)
		{
			cout << " ";
		}
	
	for (kolom = 1 ; kolom <= kolom1 - baris ; kolom++)
	{
		cout << "*";
	}
	for (kolom = 1 ; kolom < kolom1 - baris ; kolom++)
	{
		cout << "*";
	}
		cout << endl;
	}
	
	return 0;
}
