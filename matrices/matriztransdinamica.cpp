#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void pedirDatos();
void TransformarMatriz(int **, int, int);
void mostrarMatrizTranspuesta(int **puntero_matriz1,int nfilas, int ncol);
int **puntero_matriz1,  nfilas, ncol;//variables globales

int main(){
	pedirDatos();
	TransformarMatriz(puntero_matriz1, nfilas, ncol);
	mostrarMatrizTranspuesta(puntero_matriz1, nfilas, ncol);
	
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
	cout<<"\n digite los elemntos de la matriz";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol;j++){
			cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz1+i)+j);//puntero_matriz1[i][j]
			
		}
	}

	
}
void TransformarMatriz(int **puntero_matriz1, int nfilas, int ncol){
		for(int i=0; i<nfilas; i++){
		  
	    	for(int j=0; j<ncol;j++){
	    		
		 cout<<"\n la matriz transpuesta es "<<*(*(puntero_matriz1+j)+i)<<endl;
                }
       }
}
void mostrarMatrizTranspuesta(int **puntero_matriz1,int nfilas, int ncol){
	cout<<"\n la matriz original es  es: \n";
	for(int i=0; i<nfilas;i++){
		for(int j=0; j<ncol; j++){
			cout<<*(*(puntero_matriz1+i)+j)<<" ";//puntero_matriz1[i][j]
		}
		cout<<"\n";
	}
		cout<<"\n la matriz transpuesta  es  es: \n";
	for(int i=0; i<nfilas;i++){
		for(int j=0; j<ncol; j++){
			cout<<*(*(puntero_matriz1+j)+i)<<" ";//puntero_matriz1[i][j]
		}
		cout<<"\n";
	}
	
}
