
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
void pedirDatos();
void busquedaSecuencialArreglo(int *,int);

int nelementos, *elemento;


int main(){
	pedirDatos();
	busquedaSecuencialArreglo(elemento, nelementos);
	
	delete[] elemento; //libera la memoria utilizada para el arreglo dinamico utilizado
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"digite el numero de elementos";cin>>nelementos;
	elemento = new int[nelementos];
	for(int i=0; i<nelementos; i++){
		cout<<"digite un numero ["<<i<<"]";
		cin>>(*(elemento+i)); //elemento[i]
		
	}
	
}
void busquedaSecuencialArreglo(int *elemento, int nelementos){
	int i=0, dato;
	dato = *(elemento+i);
	char band = 'f';
		while((band =='f')&& (i<*(elemento+i))){
		if(i<*(elemento+i) == dato){
			band ='v';
		}
		i++;
	}
	if(band =='f'){
		cout<<"el numero no existe";
	}
	else if(band =='v'){
		cout<<"el numero esta en la pos"<<i-1<<endl;
	}
	

}

