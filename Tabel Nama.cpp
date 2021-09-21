#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;
int main ()
{
	string nama, nim, plug;
	
	//Masukkan data
	cout<<"Masukkan : "<<endl;
	cout<<"Nama \t : ";
	getline(cin,nama);
	cout<<"NIM \t : ";
	cin>>nim;
	cout<<"Plug \t : ";
	cin>>plug;
	
	//Inilah Data Anda
	cout<<"\nInilah Data Anda :";
	cout<<"\nNama \t : "<<nama;
	cout<<"\nNIM \t : "<<nim;
	cout<<"\nPlug \t : "<<plug;
	
	//Tabel 
	cout<<"\n\nTabel:\n";
	
 	cout<<"========================================================================\n";
	 
	cout<<"| "<<setiosflags(ios::left)<<setw(15)<<"NIM"<<"|";
    cout<<" "<<setiosflags(ios::left)<<setw(35)<<"NAMA"<<"|";
    cout<<" "<<setiosflags(ios::left)<<setw(15)<<"PLUG"<<"|";
    		
    cout<<"\n========================================================================\n";
    
    cout<<"| "<<setiosflags(ios::left)<<setw(15)<<nim<<"|";
    cout<<" "<<setiosflags(ios::left)<<setw(35)<<nama<<"|";
    cout<<" "<<setiosflags(ios::left)<<setw(15)<<plug<<"|";
    
   	cout<<"\n========================================================================\n";


	return 0;
}
