#include<iostream>
using namespace std;
int main()
{
	int data[10],x;
	float jml;
	jml=0;
	cout<<"\n";
	for(x=1;x<=5;x++)
	{
		cout<<"\tMasukkan Data Ke - "<<x<<"\t: ";cin>>data[x];
		jml=jml+data[x];
	}
	cout<<"\n\t\tTampilkan Data Yang Dimasukkan"<<endl;
	for(x=1;x<=5;x++)
	{
		cout<<"\tData Ke - "<<x<<"\t: "<<data[x]<<endl;
	}
	cout<<"\tJumlah Data\t= "<<jml<<endl;
	return 0;
}
