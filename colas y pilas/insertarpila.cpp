#include<iostream>
#include<conio.h>
#include<stdlib.h>
/* insertar elemntos en una pila
*/
struct Nodo{//structura nodo
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int);//prototipo de funcion
void sacarPila(Nodo *&, int &);
using namespace std;
int main(){
	
	  Nodo *pila=NULL;//declarando pila
	 int dato;//variables 
	 cout<<"digite un numero";//pidiendo datos a usuario
	 cin>>dato;
	 agregarPila(pila,dato);//llamndo la funcion aggregarpila y mandando el dato n1
	  cout<<"digite otro numero";
	 cin>>dato;
	 agregarPila(pila,dato);//llamndo la funcion aggregarpila y mandando el dato n2
	 
	cout<<"sacando elementos de la pila: ";
	while(pila != NULL){//mientras no sea el final d la pila
		sacarPila(pila,dato);//llamamos sacar pila
		if(pila != NULL){//si pila es diferente de null entonces imprimimos dato sacdo y que dan los demas
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";//si no sacmos el dato y ya n hay mas en la pila
		}
	}
	
	getch();
	return 0;
}
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo =new Nodo();//reservando memoria para nodo
	nuevo_nodo->dato=n;//igualando el dato que se recibe y almacenarlo en el nodo
	nuevo_nodo->siguiente=pila;//poner puntero y ifualarlo apila y la pila debe estar declarada null
	
	pila=nuevo_nodo;//igualando pila al nuevo nodo
	//mostrando la insercionn en la pila
	
	cout<<"\n elemento "<<n<< "agregado a la pila correctamente"<<endl;
}
void sacarPila(Nodo *&pila, int &n){
	Nodo *aux =pila;
	n = aux->dato;
	pila= aux ->siguiente;
	delete aux;
	
}
