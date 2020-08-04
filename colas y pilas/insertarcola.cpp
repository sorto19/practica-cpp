#include<iostream>
#include<conio.h>
using namespace std;
struct Nodo{//structura nodo
	int dato;
	Nodo *siguiente;
};
//prototipo de funcion
void insertarCola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
int main(){
	Nodo *frente =NULL;
	Nodo *fin =NULL;
	int dato;
	cout<<"digite un numero ";
	cin>>dato;
	insertarCola(frente, fin, dato);

	
	getch();
	return 0;
}
void insertarCola(Nodo *&frente,Nodo *&fin,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo ->dato =n;
	nuevo_nodo->siguiente =NULL;
	
	if(cola_vacia(frente)){
	 frente = nuevo_nodo;	
	}else{
		fin->siguiente = nuevo_nodo;
	}
	cout<<"elemento "<<n<<"insertado en la cola correctamente"<<endl;
}
//funcion para determinar si esta vacia o no
bool cola_vacia(Nodo *frente){
	return (frente ==NULL)? true : false;
}
