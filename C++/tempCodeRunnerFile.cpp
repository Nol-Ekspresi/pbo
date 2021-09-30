#include <iostream>

using namespace std;

int main()
{
    int option, mulai;

    // head
    cout<<"===================================\n\n";
    cout<<"Menampilkan Bilangan Genap & Ganjil\n\n";
    cout<<"===================================\n\n";

    // body 1
    cout<<"Tentukan Pilihan Anda\n(1/2 = Ganjil/Genap): ";
    cin>> option;
    cout<<"dari mana anda ingin memulai ini: \n";
    cin>>mulai;
    cout<<"\n\n";

    if  (option==1)
    {
        cout<<"Deretan Bilangan Ganjil\n";
        for(int i = 1; i<= mulai; i++)
        {
            if (i%2!=0) 
            cout<<i<<" ";
        }
    }else
    {
        cout<<"Deret Bilangan Genap\n";
        for (int i = 1; i <= mulai; i++)
        {
            if(i%2==0) 
            cout<<i<<" ";
        }
        

    }
    return 0;
}   
