#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	

	
	char nombre[100];
	char nombre2[100];
    // int longitud =0;
	

	 cout<<"ingrese nombre";
	cin.getline(nombre,20,'\n');
	
	cout<<nombre<<endl;	
	strcpy(nombre2,nombre);
	cout<<nombre2[100]<<endl;
	
	
	/*longitud = strlen(nombre);
	if((longitud && nombre) >10){
	cout<<"numero de longitud de la adena es"<<longitud<<endl;	
	}else{
		cout<<"no hay valor";
	}*/
	
	
	getch();
	return 0;
}
	

