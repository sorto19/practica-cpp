#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};
//prototipo de funcion
void menu();
void insertarCola(Nodo *&, Nodo *&, char);
bool cola_vacia(Nodo *);
void suprimiendoCola(Nodo *&,Nodo *&,char &);
int main(){
	  
	 menu();
	
	
	
	getch();
	return 0;
}
//funcion menu
void menu(){
	int opc;
	char dato;
	Nodo *frente =NULL;
	Nodo *fin =NULL;
	
	do{
		cout<<"\t.:Menu: \n";
		cout<<"1.Insertar una cola"<<endl;
		cout<<"2. Mostrar elementos de la Cola"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc){
			case 1:
			cout<<"\n ingrese el caracter para agregar a la cola";
			cin>>dato;
			insertarCola(frente,fin,dato);
			 break;
			case 2:
			cout<<"\n mostrando caractesres de cola";
			while(frente !=NULL){
				suprimiendoCola(frente, fin, dato);
				if(frente != NULL){
					cout<<dato<<" , ";
				}else{
					cout<<dato<<".";
				}
			}
			cout<<"\n";
			system("pause");
			 break;
			case 3: break;
		}
		system("cls");
		
	}while(opc != 3);
}
//funcion insertar
void insertarCola(Nodo *&frente, Nodo *&fin, char n){
	Nodo *nuevo_nodo =new Nodo();
	nuevo_nodo -> dato =n;
	nuevo_nodo ->siguiente =NULL;
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin ->siguiente=nuevo_nodo;
	}
	fin =nuevo_nodo;
}
//detrminar si la cola es vacia
bool cola_vacia(Nodo *frente){
return (frente == NULL)? true: false;

}
//funcion para eliminar caracteres
void suprimiendoCola(Nodo *&frente,Nodo *&fin,char &n){
	n =frente ->dato;
	Nodo *aux =frente;
	if(frente == fin){
		frente =NULL;
		fin =NULL;
	}else{
		frente = frente ->siguiente;
		
	}
	delete aux;
}
