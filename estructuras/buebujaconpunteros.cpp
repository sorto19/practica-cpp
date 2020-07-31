#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;
void pedirDatos();
void ordenarArreglo(int *,int);
void mostrarArreglo(int *, int);
int nelementos, *elemento;


int main(){
	pedirDatos();
	ordenarArreglo(elemento, nelementos);
	mostrarArreglo(elemento, nelementos);
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
void ordenarArreglo(int *elemento, int nelementos){
	int aux;
	//ordenar por metodo burbuja con puteros
	for(int i=0; i<nelementos; i++){
		for(int j=0; j<nelementos; j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux= *(elemento+j);
				*(elemento+j) =*(elemento+j+1);
				*(elemento+j+1) = aux;
				
				
			}
		}
	}
}
void mostrarArreglo(int *elemento, int nelementos){
	cout<<"\n mostrando arreglo ordenado: ";
	for(int i=0; i<nelementos; i++){
		cout<<*(elemento+i)<<" ";//elemento[i]
		
	}
}
