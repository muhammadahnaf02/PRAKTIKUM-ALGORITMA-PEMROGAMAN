#include<iostream>
using namespace std;
int main ()
{
	char jawaban1, jawaban2, jawaban3;
	
    cout<<"---PROGRAM UNTUK MENENTUKAN ZONASI SUATU DAERAH AKIBAT COVID - 19---";
    cout<<"\n--------------------------------------------------------------------";
	cout<<"\nJawablah pertanyaan dibawah ini menggunakan ketentuan berikut :";
	cout<<"\n\tA jika ADA"<<"\n\tT jika TIDAK ADA"<<endl;

	cout<<"\n1. Apakah terdapat peningkatan kasus COVID-19 pada survei kedua? = ";
	cin>>jawaban1;
	cout<<"2. Apakah terdapat ODP? = ";
	cin>>jawaban2;
	cout<<"3. Apakah terdapat kasus kematian? = ";
	cin>>jawaban3;
	
	if (jawaban1 == 'A' && jawaban2 == 'A' && jawaban3 == 'A'){
		cout<<"\nDaerah Anda Termasuk Zona HITAM";
	}
	else if (jawaban1 == 'A' && jawaban2 == 'A' && jawaban3 == 'T'){
		cout<<"\nDaerah Anda Termasuk Zona MERAH";
	}
	else if (jawaban1 == 'T' && jawaban2 == 'A' && jawaban3 == 'T'){
		cout<<"\nDaerah Anda Termasuk Zona ORANYE";
	}
	else if (jawaban1 == 'T' && jawaban2 == 'T' && jawaban3 == 'T'){
		cout<<"\nDaerah Anda Termasuk Zona HIJAU";
	}
	else {
		cout<<"\nInput Salah";
	}
	
	
	return 0;
}

