#include <iostream>
using namespace std;
int main(){
	int j1,m1,d1,td1;
	int j2,m2,d2,td2;
	int j3,m3,d3,td3,sm;
	
	cout<<"MENCARI PERBEDAAN DARI DUA BUAH JAM (PROGRAM BILLING)"<<endl;
	cout<<"Masukan Jam Awal : ";
	cin>>j1;
	cout<<"Masukan Menit Awal : ";
	cin>>m1;
	cout<<"Masukan Detik Awal : ";
	cin>>d1;
	td1=(j1*3600)+(m1*60)+d1;
	
	cout<<"Masukan Jam Akhir : ";
	cin>>j2;
	cout<<"Masukan Menit Akhir : ";
	cin>>m2;
	cout<<"Masukan Detik Akhir : ";
	cin>>d2;
	td2=(j2*3600)+(m2*60)+d2;	
	
	td3=td2-td1;
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	cout<<"HASIL PERBEDAAN ANTARA JAM AWAL & JAM AKHIR : "<<j3<<":"<<m3<<":"<<d3;
	
	return 0;
	
	
}
