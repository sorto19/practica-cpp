#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	
	char nombre[20];
     int longitud =0;
	cout<<"ingrese nombre";
	cin.getline(nombre,20,'\n');
	cout<<nombre<<endl;

	
	longitud = strlen(nombre);
	if((longitud && nombre) >10){
	cout<<"numero de longitud de la adena es"<<longitud<<endl;	
	}else{
		cout<<"no hay valor";
	}
	
	
	getch();
	return 0;
}
