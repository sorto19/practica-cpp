#include<iostream>
#include<conio.h>
#include<stdlib.h>
//aprendiendo listas en estructuras dee datos insertar datos en la lista
using namespace std;
   struct Nodo{
   	int dato;
   	Nodo *siguiente;
   };
   void insertarLista(Nodo *&, int);
int main(){
	Nodo *lista = NULL;
	int dato;
	cout<<"digite un dato";
	cin>>dato;
	insertarLista(lista,dato);
	getch();
	return 0;
}
 void insertarLista(Nodo *&lista, int n){
 	Nodo *nuevo_nodo = new Nodo();
 	nuevo_nodo ->dato =n;
 	 Nodo *aux1 =lista;
 	 Nodo *aux2;
 	 while((aux1 != NULL) && (aux1->dato < n)){
 	 	aux2 =aux1;
 	 	aux1 = aux1 ->siguiente;
 	 	
	  }
	  if(lista == aux1){
	  	lista = nuevo_nodo;
	  }else{
	  	aux2 ->siguiente =nuevo_nodo;
	  }
	  nuevo_nodo->siguiente =aux1;
	  cout<<"\t elemento "<<n<<" inserta a la lista correctamente";
 }
