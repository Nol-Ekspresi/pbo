#include <iostream>
using namespace std;

int main(){
	int option,mulai;

    cout<<"=========================================\n";
    cout<<"Menampilkan Angka Ganjil Genap\n\n";
    cout<<"=========================================\n";
	
	cout<<"Masukan Pilihan [1.Ganjil] [2.Genap] : ";
	cin>>option;
	cout<<"Masukan Batas : ";
	cin>>mulai;
	cout<<endl;
	
	if (option==1){
		cout<<"Deret Bilangan Ganjil"<<endl;
		for(int i=1;i<=mulai;i++){
		if (i%2!=0)
		cout<<i<<" ";
	      }
	}else {
		cout<<"Deret Bilangan Genap"<<endl;
		for(int i=1;i<=mulai;i++){
		if (i%2==0)
		cout<<i<<" ";
	      }
	}
	

}