#include<iostream>
#include<conio.h>
using namespace std;

void mostrarMatriz(int m[][3], int, int);
void cuadrado(int m[][3], int, int);
void mostrarMatrizelevada(int m[][3], int, int);

int main(){
	const int Nfilas =2;
	const int Ncol =3;
	int m [Nfilas][Ncol] = {{1,2,3}, {4,5,6}};
	
	mostrarMatriz(m,Nfilas,Ncol);
	cuadrado(m, Nfilas, Ncol);
	mostr arMatrizelevada(m, Nfilas, Ncol);
	getch();
	return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
	cout<<" mostrando matriz original: \n";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<" \n";
	}
}
void cuadrado(int m[][3], int nfilas, int ncol){
		for(int i=0; i<nfilas; i++){
		 for(int j=0; j<ncol; j++){
			m[i][j] *= m[i][j];
		}
		}
}

void mostrarMatrizelevada(int m[][3], int nfilas, int ncol){
		cout<<" mostrando matriz elevada al cuadrado: \n";
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<" \n";
	}
}
