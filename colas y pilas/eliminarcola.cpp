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
void eliminarElemntoCola( Nodo *&, Nodo *&, int &);
int main(){
	Nodo *frente =NULL;
	Nodo *fin =NULL;
	int dato;
	cout<<"digite un numero ";
	cin>>dato;
	insertarCola(frente, fin, dato);


	//eliminar elmentos de cola
	cout<<"\t quitandolos nodos de la cola";
	while(frente != NULL){
		eliminarElemntoCola(frente, fin, dato);
		if(frente != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
	
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
//funcion para eliminar elementos dela cola
void eliminarElemntoCola( Nodo *&frente, Nodo *&fin, int &n){
	n =frente->dato;
	Nodo *aux = frente;
	if(frente == fin){
		frente =NULL;
		fin =NULL;
	}else{
		frente =frente->siguiente;
	}
	delete aux;
}
