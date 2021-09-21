#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float c, k, f, r;
    cout<<"\nKONVERSI SUHU CELSIUS"
        <<"\n_______________________"
        <<"\n\nMasukkan Suhu (Celcius) \t: ";
    cin>>c;

    k=c+273;
	f=(c*9/5)+32;
	r=(c*4/5);

    cout<<"\nHasil Konversi Suhu :"
        <<"\nCelcius \t: "<<c<<" C"
        <<"\nKelvin \t\t: "<<k<<" K"
        <<"\nFahrenheit \t: "<<f<<" F"
	    <<"\nReamur \t\t: "<<r<<" R"
        <<"\n_______________________";

    return 0;

}
