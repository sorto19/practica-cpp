#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
	
};
//prototipo de funciones
void menu();
Nodo *crearNodo(int, Nodo);
void insertarNodo(Nodo *&,int, Nodo *);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void posOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

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
	cout<<"4. recorrer en Preorden"<<endl;
	cout<<"5. recorrer en inOrden"<<endl;
	cout<<"6. recorrer en posOrden"<<endl;
	cout<<"7. eliminar nodo"<<endl;
	cout<<"8. salir"<<endl;
	cout<<"Opcion :";
	cin>>opcion;
	switch(opcion){
		case 1: cout<<"\n Digite un numero: ";
		        cin>>dato;
		        insertarNodo(arbol,dato,NULL);
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
		            
		case 4: cout<<" \n Recorrido en preorden: ";
		        preOrden(arbol);
		        cout<<"\n\n";
		        system("pause");
		        break;
	    case 5: cout<<" \n Recorrido en Inorden: ";
		        inOrden(arbol);
		        cout<<"\n\n";
		        system("pause");
		        break;
		case 6: cout<<" \n Recorrido en PosOrden: ";
		        posOrden(arbol);
		        cout<<"\n\n";
		        system("pause");
		        break; 
		case 7: cout<<"\n Digite un numero: ";
		        cin>>dato;
		        eliminar(arbol,dato);
		        cout<<"\n";
		        system("pause");
		        break;      
		        
	}
	system("cls");
}while(opcion !=8) ;
	
	
}
//funcion para crear nodo
Nodo *crearNodo(int n, Nodo *padre){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	nuevo_nodo->padre = padre;
	return nuevo_nodo;
}
void insertarNodo(Nodo *&arbol,int n,Nodo *padre){
	if(arbol ==NULL){
		Nodo *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
	}else{
		int valorRaiz = arbol->dato;
		if(n<valorRaiz){
			insertarNodo(arbol->izq,n,arbol);
		}else{
			insertarNodo(arbol->der,n,arbol);
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
//funcion para recorrido preorden
void preOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
	
	
}
void inOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}	
}
void posOrden(Nodo *arbol){
	
	if(arbol == NULL){
		return;
	}else{
		posOrden(arbol->izq);
		posOrden(arbol->der);
	}	cout<<arbol->dato<<" - ";
	
}
//eliminar un nodo de el arbol
void eliminar(Nodo *arbol, int n){
	if(arbol == NULL){
		return; //no hace nada
	}
	else if(n < arbol->dato){
		eliminar(arbol->izq,n);
	}
	else if(n > arbol->dato){
		eliminar(arbol->der,n);
	}
	else{
		eliminarNodo(arbol);
	}
}
//funcion para determinar el nodo mas izquierdo posible
Nodo *minimo(Nodo *arbol){
		if(arbol == NULL){
	     	return NULL; //no hace nada
	    }
	    if(arbol->izq){
	    	return minimo(arbol->izq);
		}
		else{
			return arbol;
		}
}
//funcion reemplazar dos nodos
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		//hay que asignarle su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq= nuevoNodo;
		}
		else if(arbol->dato== arbol->padre->der->dato){
			arbol->padre->der= nuevoNodo;
		}
	}
	if(nuevoNodo){
		nuevoNodo->padre = arbol->padre;
	}
	
}
//funcion destruir nodo
void destruirNodo(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;
	delete nodo;
}
//funcion para eliminar nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
	 if(nodoEliminar->izq && nodoEliminar->der){
	 	Nodo *menor = minimo(nodoEliminar->der);
	 	nodoEliminar->dato = menor->dato;
	 	eliminarNodo(menor);
	 }
	 else if(nodoEliminar->izq){//hijo izq
	 	reemplazar(nodoEliminar,nodoEliminar->izq);
	 	destruirNodo(nodoEliminar);	
	 }
	  else if(nodoEliminar->der){//hijo der
	 	reemplazar(nodoEliminar,nodoEliminar->der);
	 	destruirNodo(nodoEliminar);	
	 }
	 else{
	 	reemplazar(nodoEliminar,NULL);
	 	destruirNodo(nodoEliminar);
	 }
	
}

