/*
Nama : Anne Audistya Fernanda
NPM : 140810180059
Kelas : A
Deskripsi : Pencarian Nilai Maksimum
*/

#include<iostream>
using namespace std;

int main(){
	int x[99];
	int n,maks,i;
	
	cout<<"Masukkan Jumlah Angka : "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Bilangan ke - " <<i+1<< " : "; cin>>x[i];
	}
	
	maks = 0;
	
	for(int i=0;i<n;i++){
		if(x[i]>maks)
			maks=x[i];
	}
	cout<<"Output = "<<maks<<endl;
}
