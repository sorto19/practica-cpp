#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirDatos();
int calSuma(int vec[], int); //prototipo de funcion
int vec[100], tam; //variables globales

int main(){
	
	
	
	pedirDatos();//llamando la funcion
	cout<<"\n la suma es :"<<calSuma(vec, tam)<<endl;
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"digite el numero de elementos de vector: ";
	cin>>tam;
	
	for(int i=0; i<tam; i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

int  calSuma(int vec[], int tam){
	int suma =0 ;
	
	for(int i=0; i<tam; i++){
		suma += vec[i];
	}
	return suma;
}
