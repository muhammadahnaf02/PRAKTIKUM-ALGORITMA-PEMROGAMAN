#include<iostream>
using namespace std;
int main()
{
	int jenisbantuan, golongan, totalbantuan;
	
	cout<<"Bantuan untuk program Pembelajaran Jarak Jauh (PJJ)."<<endl
		<<"1. Pengajar"<<endl
		<<"2. Siswa"<<endl
		<<"Input Jenis Bantuan (1/2) : ";
	cin>>jenisbantuan;
	
	if (jenisbantuan == 1 ) {
    	cout<<"\n1. PAUD"
    		<<"\n2. SD"
    		<<"\n3. SMP"
    		<<"\n4. SMA"
    		<<"\n5. Perguruan Tinggi"
			<< "\nInput Golongan Pengajar (Masukkan angka) : ";
		cin>>golongan;
	
    	if(golongan == 2){
    		totalbantuan = 42*6000;
		}
		else if(golongan == 3){
    		totalbantuan = 42*6000;
		}
		else if(golongan == 4){
    		totalbantuan = 42*6000;
		}
		else if(golongan == 5){
			totalbantuan = 50*6000;
		}
		else{ 
            cout<<"Tidak mendapat bantuan";
		}
    	cout<<"\n\nMendapat Bantuan Sebesar : Rp. "<<totalbantuan<<endl;
  	}
  	else if (jenisbantuan == 2 ) {
    	cout<<"\n1. PAUD"
    		<<"\n2. SD"
    		<<"\n3. SMP"
    		<<"\n4. SMA"
    		<<"\n5. Perguruan Tinggi"
			<< "\nInput Golongan Siswa (Masukkan angka) : ";
		cin>>golongan;
    
    	if(golongan == 1){
    		totalbantuan = 20*6000;
		}
		else if(golongan == 2){
			totalbantuan = 35*6000;
		}
		else if(golongan == 3){
			totalbantuan = 35*6000;
		}
		else if(golongan == 4){
			totalbantuan = 35*6000;
		}
		else if(golongan == 5){
			totalbantuan = 50*6000;
		}
		else{ 
            cout<<"Tidak mendapat bantuan";
		}
    	cout<<"\nMendapat Bantuan Sebesar : Rp. "<<totalbantuan<<endl;
  	}
  	else{
  		cout<<"Maaf Input Salah";
	  } 
  return 0;
}
