#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirDatos();
void mostrarMatriz(int **,int, int);
int **puntero_matriz, nfilas, ncol;

int main(){
	
	pedirDatos();
	mostrarMatriz(puntero_matriz, nfilas, ncol);
	
	//liberara la memoria que hemos utilizado en la matriz
	for(int i=0; i<nfilas; i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	getch();
	return 0;
	
}
void pedirDatos(){
	cout<<"digite numero de filas: ";
	cin>>nfilas;
    cout<<"digite numero de columnas: ";
	cin>>ncol;
	
	puntero_matriz = new int*[nfilas];//reservando memortia para las filas
	for(int i=0; i<nfilas; i++){
		puntero_matriz[i] =new int[ncol];//reservando memortia para las columnas
	}
	cout<<"\n digitando elementos de la matriz \n";
	
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<"digite numero ["<<i<<"] ["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);//puntero_matriz[i][j]	
			
			}
	}
	
} 
void mostrarMatriz(int **puntero_matriz,int nfilas, int ncol){
	cout<<"\n\n imprimiendo matriz\n";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
		
			cout<<*(*(puntero_matriz+i)+j );//puntero_matriz[i][j]	
			
		}
			cout<<"\n";
	}
}
