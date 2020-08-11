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
void calcularPromedioSuma(Nodo *,int);
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
  calcularPromedioSuma(lista, dato);
	
	
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
void calcularPromedioSuma(Nodo *lista,int n){
	int suma=0, promedio=0;
	while(lista !=NULL){
	   
	   suma= suma + lista->dato;
	   lista=lista->siguiente;
	   promedio = suma  /n;
	   
	}
	
	cout<<"\t la suma es: "<<suma<<endl;
	cout<<"\t el promedio es: "<<promedio<<endl;
}
