#include <iostream>
#include <string>
using namespace std;

string nama, turnamen, jk;
int usia, lari;



int main()
{
		cout << "NAMA LENGKAP ANDA : ";	cin >> nama;
		cout << "USIA : ";	cin >> usia;
		cout << "PERNAH MENGIKUTI TURNAMEN LARI MARATHON SEBELUMNYA (y/t) : ";	cin >> turnamen;
		cout << "JANGKAUAN LARI RATA-RATA DALAM WAKTU 30 MENIT : ";	cin >> lari;
		cout << "APAKAH ANDA PRIA ATAU WANITA (p/w) : ";	cin >> jk;
		cout << " "<<endl;

		if (((jk == "p") && ((usia >= 18) && (usia <= 40)) && ((turnamen == "y") || (lari >= 5))))
			cout << "DATA SEDANG DIPROSES..." << endl<<endl;   //LOLOS SELEKSI//
		else

		if (((jk == "w") && ((usia >= 18) && (usia <= 35)) && ((turnamen == "y") || (lari >= 3))))

			cout << "data sedang diproses..." << endl<<endl;  //LOLOS SELEKSI//
		else
		{
			cout << "data gagal diproses [tekan tombol enter untuk keluar]" << endl;  //GAGAL SELEKSI//
		}
      system("pause"); }
