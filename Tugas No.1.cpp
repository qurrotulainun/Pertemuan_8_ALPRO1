#include<iostream>
using namespace std;
int main()
{
	string nama[100],mk[15];
	int nilai[3],x,i;
	cout<<"\n\tMasukkan Jumlah Mahasiswa Yang Akan Didata = ";
	cin>>x;
	for(i=1;i<=x;i++)
	{
		cout<<"\n\tMasukkan Data Mahasiswa Ke - "<<i<<" \n";
		cout<<"\tMasukkan Nama Mahasiswa\t\t\t: ";cin>>nama[i];
		cout<<"\tMasukkan Matakuliah Yang Diambil\t: ";cin>>mk[i];
		cout<<"\tMasukkan Nilai Mahasiswa\t\t: ";cin>>nilai[i];
	}
	cout<<"\n\t\tTampilkan Data"<<endl;
	for(i=1;i<=x;i++)
	{
		cout<<"\n\tData Mahasiswa Ke - "<<i<<""<<endl;
		cout<<"\tNama\t\t: "<<nama[i]<<endl;
		cout<<"\tMatakuliah\t: "<<mk[i]<<endl;
		cout<<"\tNilai\t\t: "<<nilai[i]<<endl;
	}
	return 0;
}
