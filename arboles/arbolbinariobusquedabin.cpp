#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	
};
//prototipo de funciones
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);

Nodo *arbol = NULL;
int main(){
	
	menu();
	
	getch(); 
	return 0;
}
//funcion de menu
void menu(){
	
	int dato ,opcion,contador=0;
do{
		cout<<" MENU"<<endl;
	cout<<"1. insertar Nodo"<<endl;
	cout<<"2. mostrar Nodos"<<endl;
	cout<<"3. busqueda de elmento"<<endl;
	cout<<"4. salir"<<endl;
	cout<<"Opcion :";
	cin>>opcion;
	switch(opcion){
		case 1: cout<<"\n Digite un numero: ";
		        cin>>dato;
		        insertarNodo(arbol,dato);
		        cout<<"\n";
		        system("pause");
		        break;
	    case 2: cout<<"\n Mostrando el arbol completo:\n\n";
	            mostrarArbol(arbol,contador);
	            cout<<"\n";
		        system("pause");
		        break;
	    case 3: cout<<"\n digite el elemento a buscar";
	                cin>>dato;
	                if(busqueda(arbol,dato) == true){
	                	cout<<"\n elemento"<<dato<<"a sido encontrado"<<endl;
					}else{
						cout<<"\t elemento no encontrado\n";
					}
					 cout<<"\n";
		            system("pause");
		            break;
	}
	system("cls");
}while(opcion !=4);
	
	
}
//funcion para crear nodo
Nodo *crearNodo(int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	return nuevo_nodo;
}
void insertarNodo(Nodo *&arbol,int n){
	if(arbol ==NULL){
		Nodo *nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq,n);
		}else{
			insertarNodo(arbol->der,n);
		}
	}
}
void mostrarArbol(Nodo *arbol,int cont){
		if(arbol ==NULL){
	     return;
        }else{
        	mostrarArbol(arbol->der,cont+1);
		      for(int i=0; i<cont; i++){
		      	cout<<"   ";
			  }
			  cout<<arbol->dato<<endl;
			  mostrarArbol(arbol->izq,cont+1);
	       }
}
bool busqueda(Nodo *arbol,int n){
	if(arbol == NULL){
		return false;
	}else if(arbol->dato == n){//si es igual devuelveme verdadero
		return true;
	}else if(n< arbol->dato){
		return busqueda (arbol->izq,n);
	}else{
		return busqueda(arbol->der,n);
	}
	
}
