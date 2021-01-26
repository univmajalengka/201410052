//program menghitung gaji bersih karyawan
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//deklarasi konstanta
const float persentunjangan = 0.2;
const float persenpajak = 0.15;

int main(){
	
	//deklarasi variable
	string namakaryawan;
	float gajibersih, gajipokok, pajak, tunjangan;
	//input nama karyawan
	cout<<"Masukan Nama Karyawan : ";
	getline(cin,namakaryawan);
	//input gaji pokok
	cout<<"Masukan Gaji Pokok : Rp . ";
	cin>>gajipokok;
	//penghitungan tunjangan
	tunjangan = persentunjangan * gajipokok;
	//penghitungan pajak
	pajak = persenpajak * gajipokok;
	//penghitungan gaji bersih
	gajibersih = gajipokok + tunjangan - pajak;
	//tampilan akhir (nama & jumlah gaji bersih karyawan)
	cout<<"Gaji Bersih "<<'"'<<namakaryawan<<'"'<<" adalah : ";
	cout<<fixed;
	cout<<setprecision(0);
	cout<<"Rp . "<<gajibersih;
}
