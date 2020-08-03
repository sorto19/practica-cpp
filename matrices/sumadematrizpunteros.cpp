#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirDatos();
void sumarMatriz(int **, int **,int,int);
void mostrarMatrizResultando(int **,int nfilas, int ncol);
int **puntero_matriz1, **puntero_matriz2, nfilas, ncol;//variables globales

int main(){
	pedirDatos();
	sumarMatriz(puntero_matriz1,puntero_matriz2, nfilas, ncol);
	mostrarMatrizResultando(puntero_matriz1, nfilas, ncol);
	//liberar memoria utilizada en matriz2
	for(int i=0; i<nfilas; i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	//liberacion de memoria en matriz 1
	for(int i=0; i<nfilas; i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	getch();
	return 0;
}
void pedirDatos(){
	cout<<"digite numero de filas";
	cin>>nfilas;
	cout<<"digite numero de columnas";
	cin>>ncol;
	
	//reservando memoria para la primera matriz
	puntero_matriz1 = new int*[nfilas];//reservando memoria para las filas
	for(int i=0; i<nfilas; i++){
		puntero_matriz1[i]= new int[ncol];//reservar memoria para columnas
	}
	//pedir primera matriz
	cout<<"\n digite los elemntos de la primer matriz";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol;j++){
			cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j);//puntero_matriz1[i][j]
			
		}
	}
		//reservando memoria para la segunda matriz
	puntero_matriz2 = new int*[nfilas];//reservando memoria para las filas
	for(int i=0; i<nfilas; i++){
		puntero_matriz2[i]= new int[ncol];//reservar memoria para columnas
	}
	//pedir primera matriz
	cout<<"\n\n  digite los elemntos de la segunda matriz";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol;j++){
			cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz2+i)+j);//puntero_matriz2[i][j]
			
		}
	}
	
}
void sumarMatriz(int **puntero_matriz1, int **puntero_matriz2, int nfilas, int ncol){
		for(int i=0; i<nfilas; i++){
		  
	    	for(int j=0; j<ncol;j++){
	    		
			*(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
                }
       }
}
void mostrarMatrizResultando(int **puntero_matriz1,int nfilas, int ncol){
	cout<<"\n la suma de las dos matrices es: \n";
	for(int i=0; i<nfilas;i++){
		for(int j=0; j<ncol; j++){
			cout<<*(*(puntero_matriz1+i)+j)<<" ";//puntero_matriz1[i][j]
		}
		cout<<"\n";
	}
	
}
