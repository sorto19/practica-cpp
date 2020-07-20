#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	 
	 int numeros[2][2] = {{1,2}, {3,4}};
	 int matriz[2][2];
	 //pasando contenido a matriz
	 for(int i=0; i<2; i++){
	 	for(int j=0; j<2; j++){
	 		matriz[i][j] = numeros[i][j];
		 }
	 }
	//imprimiendo matriz
	 for(int i=0; i<2; i++){
	 	for(int j=0; j<2; j++){
	 	   cout<<matriz[i][j];
		 }
		 cout<<"\n";
	 }
	getch();
	return 0;
}
