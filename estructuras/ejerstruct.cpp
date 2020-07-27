#incluwde<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
	  
}c1;
int main(){
	char categoria[20];
	cout<<"nomre: ";
	cin.getline(c1.nombre,20,'\n');
	cout<<"edad ";
	cin>>c1.edad;
	fflush(stdin);
	cout<< "sexo :";
	cin.getline(c1.sexo,10,'\n');
	cout<<" club ";
	cin.getline(c1.club,20,'\n');
	if(c1.edad <= 18){
		strcpy(categoria, "juvenil");
	}else if (c1.edad <=40){
		strcpy(categoria,"senior");
		
	}else{
		strcpy(categoria, "veterano");
	}
	cout<<"\n\n datos de corredor";
	cout<<" nombre :"<<c1.nombre<<endl;
	cout<<" edad : "<<c1.edad<<endl;
	cout<<"sexo :"<<c1.sexo<<endl;
	cout<<" club "<<c1.club<<endl;
	cout<<" categoria: "<<categoria<<endl;
}
