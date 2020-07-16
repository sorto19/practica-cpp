#include<iostream>
using namespace std;
int main(){
	int h; //utilizando formato de 24 hrs
	float tem,vtem;

	for (int i=1; i<=6; i++){
		cout<<"\n digite horas"; cin>>h;
		vtem = (tem +=i)/6;
		if(h%4==0){
			cout<<"\n digite temperatura"; cin>>tem;	
		
			if(tem>=20){
				cout<<"\n temperatura es alta";
			
			}else if(tem <=15){
				cout<<"\n wwtemperatura es baja";
			
			}
			
		}
			cout<<vtem<<endl;
	}
	
	
	return 0;
}
