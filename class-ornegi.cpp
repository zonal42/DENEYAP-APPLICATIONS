#include <iostream>
#include <cstring>
using namespace std;
class Araba
{
    private:
        string marka;
        string model;
        int yil;
        string renk;
        
    public:
    
    //fonksiyon prototipi tanımlaması
    void setMarka(string brand);
    void setModel(string tip);
    void setYil(int year);
    void setRenk(string color);
    void verileriGoster();
    Araba(string x_marka,string x_model,int x_yil,string x_renk);//kurucu fonksiyon belirtimi
    
};



int main()
{
    Araba volvo("volvo","xc90",2021,"siyah");
    volvo.verileriGoster();
    
    return 0;
}

void Araba::verileriGoster()
    {
       cout<<"Araç Markası: "<<marka<<endl;
        cout<<"Araç Model: "<<model<<endl;
        cout<<"Araç Üretim Yılı: "<<yil<<endl;
        cout<<"Araç Rengi: "<<renk<<endl<<endl; 
    }

void Araba::setMarka(string brand)
    {
        marka=brand;
    }

void Araba::setModel(string tip)
    {
        model=tip;
    }
    
void Araba::setYil(int year)
    {
        if(year>=0)
        yil=year;
        else{
            cout<<"Yıl Değeri Negatif Girilemez. Değerin 0 olarak tanımlandı."<<endl<<endl;
            yil=0;
            }
    }
    
void Araba::setRenk(string color)
    {
        renk=color;
    }
Araba::Araba(string x_marka,string x_model,int x_yil,string x_renk)

{
    marka=x_marka;
    model=x_model;
    yil=x_yil;
    renk=x_renk;
}