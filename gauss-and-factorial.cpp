#include <iostream>
using namespace std;

int faktoriyel(int s);  // faktoriyel fonksiyon tanımlaması 
int gauss(int s);       // gauss fonksiyon tanımlaması
int sayi=0;             //input değişken tanımlaması

int main()
{
    cout<<"Merhaba! Bir Sayı Girsene: ";
    cin>>sayi;
    cout<<endl;
    cout<<sayi<<"! = "<<faktoriyel(sayi)<<endl;
    cout<<sayi<<"'e kadar olan sayıların toplamı: "<<gauss(sayi)<<endl;
    return 0;
}

int faktoriyel(int s) //rekürsif olarak faktoriyel hesabı yapan fonksiyon
{
    if(s>0)
    {
        return s*faktoriyel(s-1);
    }
    else return 1;
    
}
int gauss(int s) //rekürsif olarak gauss toplam hesabı yapan fonksiyon
{
    if(s>0) return s+gauss(s-1);
    else return 0;
}
