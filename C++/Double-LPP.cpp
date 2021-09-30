#include <iostream>

using namespace std;

int main()
{
    double luas, panjang, lebar;
    // Head
    cout<<"====================================================\n\n";
    cout<<"\tMenghitung Luas Dari Persegi Panjang\n\n";
    cout<<"====================================================\n\n";
     
    // Panjang
    cout<<"Masukan Panjang (P): \n";
    cin>>panjang;
    
    // Lebar
    cout<<"Masukan Lebar (L): \n";
    cin>>lebar;

    // Eksekusi
    luas=panjang*lebar;
    cout<<"-------------------------------------------\n";
    cout<<"Luas Persegi Panjang: "<<luas<<"\n\n";

    return 0;
}