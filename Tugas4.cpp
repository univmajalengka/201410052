#include<iostream>
using namespace std;
int main()
{
	cout<<"\tKALKULATOR SEDERHANA"<<endl;
	cout<<"silahkan pakai dengan baik dan benar"<<endl;
	cout<<"1. pertambahan \t\t\t 3. perkalian"<<endl;
	cout<<"2. pengurangan \t\t\t 4. pembagian"<<endl;
	cout<<"_____________________________________________"<<endl;
	int a,b,c,menu;
	float d,e,f;
	cin>>menu;
	if(menu==1){
		cin>>a;
		cin>>b;
		c=a+b;
		cout<<c;
	}else if(menu==2){
		cin>>a;
		cin>>b;
		c=a-b;
		cout<<c;
	}else if(menu==3){
		cin>>a;
		cin>>b;
		c=a*b;
		cout<<c;
	}else if(menu==4){
		cin>>d;
		cin>>e;
		f=d/e;
		cout<<f;
	}else{
		cout<<"sayang sekali menu tidak ada :(";
	}
	
	return false;
}
