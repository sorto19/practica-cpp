#include<iostream>
#include<conio.h>
#include<stdlib.h>//funcion new y delete en arreglos
using namespace std;
void pedirNotas();
void mostraNotas();
int ncalif, *calif;
int main(){
	pedirNotas();
   mostraNotas();
   
   delete[] calif;//liberando espacio en bytes utilizados anteriormente
	getch();
	return 0;
}
void pedirNotas(){
	cout<<"digite  el numero de calificaciones ";
	cin>>ncalif;
	calif =new int[ncalif]; //crear arreglo dinamico por new se reserva memoria 
	for(int i=0; i<ncalif; i++){
		cout<<"ingrese nota   ";
		cin>>calif[i];
		
	}
	
}
void mostraNotas(){
	cout<<"\n mostrando notas\n";
	for(int i=0; i<ncalif; i++){
		cout<<calif[i]<<endl;
		
		
	}	
	
}
