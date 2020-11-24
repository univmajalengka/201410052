#include <iostream>

using namespace std;
int main()
{
	cout<<"Pilih Menu : "<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;
	int a,b,c,menu;
	float d,e,f;
	cin>>menu;
	if(menu==1){
		cout<<"Anda Memilih Menu Pertambahan"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>d;
		cout<<"+"<<endl;
		cin>>e;
		cout<<"Hasilnya adalah ="<<endl;
		f=d+e;
		cout<<f;
	}else if(menu==2){
		cout<<"Anda Memilih Menu Pengurangan"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>d;
		cout<<"-"<<endl;
		cin>>e;
		f=d-e;
		cout<<"Hasilnya adalah ="<<endl;
		cout<<f;
	}else if(menu==3){
		cout<<"Anda Memilih Menu Perkalian"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>d;
		cout<<"x"<<endl;
		cin>>e;
		f=d*e;
		cout<<"Hasilnya adalah ="<<endl;
		cout<<f;
	}else if(menu==4){
		cout<<"Anda Memilih Menu Pembagian"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>d;
		cout<<":"<<endl;
		cin>>e;
		f=d/e;
		cout<<"Hasilnya adalah ="<<endl;
		cout<<f;
	}else if(menu==5){
		cout<<"Anda Memilih Menu Sisa Hasil Bagi"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>a;
		cout<<"%"<<endl;
		cin>>b;
		c=a%b;
		cout<<"Hasilnya adalah ="<<endl;
		cout<<c;
	}else{
		cout<<"Menu Yang Anda Pilih Tidak Ada";
	}
	return false;
}
