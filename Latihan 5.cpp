#include<iostream>
using namespace std;
int main()
{
	string nama,mk;
	int nilai;
	//Input data
	cout<<"\n\tMasukkan Nama Mahasiswa\t\t\t: ";
	cin>>nama;
	cout<<"\tMasukkan Matakuliah Yang Diambil\t: ";
	cin>>mk;
	cout<<"\tMasukkan Nilai Mahasiswa\t\t: ";
	cin>>nilai;
	//Menampilkan Data
	cout<<"\n\t\tTampilkan Data"<<endl;
	cout<<"\n\tNama\t\t: "<<nama<<endl;
	cout<<"\tMatakuliah\t: "<<mk<<endl;
	cout<<"\tNilai\t\t: "<<nilai<<endl;
	return 0;
}
