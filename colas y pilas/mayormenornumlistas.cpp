#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayormenor(Nodo *);
int main(){
  Nodo *lista =NULL;
  int dato;
  char respuesta;
  do{
  	cout<<"digite un numero: ";
  	cin>>dato;
  	insertarLista(lista,dato);//agregando un nuevo elemento a ka lista
  	cout<<"desea agregar otro nodo(s/n): ";
  	cin>>respuesta;
  }while(respuesta =='s' || respuesta =='S');
  	cout<<"\n los elementos de la lista son los siguientes \n";
  	mostrarLista(lista);
  	cout<<"\n";
  	calcularMayormenor(lista);
	
	
	getch();
	return 0;
}
//agregar elementos al final de ka lista
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	nuevo_nodo ->dato =n;
	nuevo_nodo ->siguiente =NULL;
	if(lista == NULL){
		lista= nuevo_nodo;//agregamos el nodo a la lista si esta vacia
	}
	else{
		aux =lista;//aux apunta al inicio de la lista
		while(aux->siguiente != NULL){//rrecorrer la lista
		aux = aux->siguiente; //avanzamos posicion en la lista
		}
		aux->siguiente =nuevo_nodo;//agrego el nuevo nodo a la lista;
	}
	cout<<"\t elemento "<<n<<"agregado a la lista correctamenete\n";
}
void mostrarLista(Nodo *lista){
	while(lista !=NULL){
		cout<<lista->dato<<" ->";
		lista =lista->siguiente;//avanzamos posiciones en lista
	}
	
}
void calcularMayormenor(Nodo *lista){
	int may=0, men=9999;
	while(lista !=NULL){
		if((lista->dato)> may){
			may=lista->dato;
		}
		if((lista->dato)< men){
				men=lista->dato;
		}
		lista = lista->siguiente; //avanzamos una posicion en lista
	}
	cout<<"\t el mayor elemnto es: "<<may<<endl;
	cout<<"\t el menor elemnto es: "<<men<<endl;
}
