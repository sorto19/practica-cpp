#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void comprobarSimetrica(int m[][100], int, int);
int m[100][100], nfilas, ncol;
int main(){
	
	pedirDatos();
	comprobarSimetrica(m, nfilas, ncol);
	getch();
	return 0;
	
}
void pedirDatos(){
	cout<<" digite el numero de filas";
	cin>>nfilas;
	cout<<" digite el numero de columnas";
	cin>>ncol;
	
	for (int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<" digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
	
}
void comprobarSimetrica(int m[][100], int nfilas, int ncol){
	int cont =0;
	if(nfilas == ncol){
		for(int i=0; i<nfilas; i++){
			for(int j=0; j<ncol; j++){
				if(m[i][j] == m[j][i]){
				 cont++;	
				}
			}
		}
	}
	if(cont == nfilas*ncol){
		cout<<" \n la matriz es simetrica";
	}else{
		cout<<" \n la matriz no es simetrica";
	}
}
