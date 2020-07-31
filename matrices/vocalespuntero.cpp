#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void pedirDatos();
int contandoVocales(char *);
char nombreUsuario[30];
int main(){
	
	
	pedirDatos();
	cout<<"\n el numero de vocales es "<<contandoVocales(nombreUsuario)<<endl;
	
	
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"digite su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario); //tranformando a mayuscula
	
}
int contandoVocales(char *nombre){
	int cont=0,a=0,e=0,i=0,o=0,u=0;
	while(*nombre){
		switch(*nombre){
			case'A':a++;
		
			case'E':e++;
			
			case'I':i++;
			
			case'O':o++;
		
		
			case'U':u++;
		
			 cont++;
		}
		nombre++;
	}
	cout<<"el numero de vocal a es "<<a<<endl;
	cout<<"el numero de vocal e es "<<e<<endl;
	cout<<"el numero de vocal i es "<<i<<endl;
	cout<<"el numero de vocal o es "<<o<<endl;
	cout<<"el numero de vocal u es "<<u<<endl;
	
	return cont; 
	
	
	}
