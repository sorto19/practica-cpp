#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
		int numeros[100][100],filas, columnas,d;
		 int matriz[100][100];
 	cout<<"digite filas";
 	cin>>filas;
 	cout<<"digite columnas";
 	cin>>columnas;
 	//almacenando elemnto en la matrix
 	for(int i=0; i<filas; i++){
 		
 		for(int j=0; j<columnas; j++){
 			cout<<"digite un numero ["<<i<<"]["<<j<<"]";
 			cin>>numeros[i][j];
		 }
	 }
	 //copiando elementos
	 	 for(int i=0; i<filas; i++){
	 	for(int j=0; j<columnas; j++){
	 		matriz[i][j] = numeros[i][j];
		 }
	 }
	 //imprimiendo
	 	 for(int i=0; i<filas; i++){
	 	for(int j=0; j<columnas; j++){
	 	cout<<matriz[i][j] ;
		 }
		 cout<<"\n";
	 }
	 
	
	
		getch();
	return 0;
}
