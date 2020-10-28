/* PRAKTIKUM MINGGU 3 */
/* PROGRAM LOOPING ARITMATIKA */

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>


using namespace std;
main()
{
	char nama [20],pilihan;
	cout << "=====================================================================" <<endl;
	
	cout <<	"		HASIL PERHITUNGAN OPERASI ARITMATIKA			"	<<endl;
	
	cout << "=====================================================================" <<endl;
	
	cout << "Masukkan Nama :";
	cin >> nama;
	cout << " HAI " <<  nama  << ", SELAMAT BELAJAR ";
	cout << endl << endl;
	
	cout << "1. Menampilkan Jumlah 6 Suku Pertama \n2. Menampilkan Jumlah Deret \n3. Menampilkan Tabel Perkalian \n4. Menampilkan Segitiga Angka \n\n ";
	cout << endl;
	cout << "Pilih :";
	cin >> pilihan;
	cout << endl << endl;
	
	switch (pilihan)
	{
		case '1' :
		{
			int i,bil,jumsuku;
			jumsuku = 0;
			cout << "\n 6 Suku Pertama\n";
			
			for (i = 1; i <= 6; i ++)
			{
				bil = ((i*i)*i);
				if (i < 6 )
				{
					cout << i <<"^3=" << bil<<endl;
				}
				if (i ==6 )
				{
					cout << i <<"^3=" << bil << endl;
				}	
				jumsuku += bil;
			}
			cout << "Jumlah 6 Suku Pertama adalah :"<< jumsuku<<endl;
			break;
		}
				
		case '2' :
		{
			int i,jumderet = 0,totderet = 0;
			cout << "Jumlah Deret \n";
			
			for (i=3; i<=15; i+=4)
			{
				if (i < 15)
				{
					cout << i << "," ;
				}
				if (i == 15)
				{
					cout << i << endl<< endl;
				}
				jumderet += i;
			}
			totderet = jumderet;
			cout << "Jumlah Deret :"<< totderet<<endl;
			break;
		}
		
		case '3' :
		{
			int i,j;
			cout << "Tabel Perkalian \n";
			
			for (i = 1; i <= 10; i++) 
			{
				cout<<setw(5)<<i;
				for (j = 1; j <= 10; j++)
				cout<<setw (5)<<i*j;
				cout<<endl;
			}
			break;
		}
		
		case '4' :
		{
			int n,i,j;
			n = 5;
			cout << "Segitiga Angka \n";
			
			for (i = 1; i <= n; i++)
			{
				for (j = 1; j <= i; j++)
				{
					cout << j;
				}
				cout << "\n";
			}
			
			for (i = n-1; i >= 1; i--)
			{
				for (j = 1; j <= i; j++)
				{
					cout << j;
				}
				cout << "\n";
			}
			break;
		}
	}
	
	
	
	cout << "=======================================================================" <<endl;
	
	cout << "			TERIMA KASIH TELAH MENCOBA				" <<endl;
	
	cout << "=======================================================================" <<endl;
	
	getch ();
	return 0;
	
}
