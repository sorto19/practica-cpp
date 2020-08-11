#include<iostream>
#include<conio.h>
#include<stdlib.h>
//aprendiendo listas en estructuras dee datos insertar datos en la lista
using namespace std;
   struct Nodo{
   	int dato;
   	Nodo *siguiente;
   };
   void menu();
   void insertarLista(Nodo *&, int);
   void mostrarLista(Nodo *);
   void buscarLista(Nodo *,int);
   void eliminarNodo(Nodo *&, int);
   void eliminarLista(Nodo *&,int &);
   Nodo *lista = NULL;
int main(){
	
	menu();
	 
	getch();
	return 0;
}
void menu(){
	int op,dato;
	do{
		cout<<"\t Menu \n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar elementos a la lista\n";
		cout<<"3. Buscar elementos a la lista\n";
	    cout<<"4. Eliminar Nodo  en la lista\n";
		cout<<"5. Djar vacia la lista \n";
		cout<<"6. salir \n";
		cout<<"opcion: ";
		cin>>op;
		switch(op){
			
			case 1:cout<<"digite un dato";
	               cin>>dato;
	               insertarLista(lista,dato);
	               cout<<"\n";
	               system("pause");
		          break;
		    case 2:   mostrarLista(lista);
		            cout<<"\n";
	               system("pause");
			         break;	
			case 3: cout<<"digite un numero a buscar: ";
			       cin>>dato;
			       buscarLista(lista,dato);
			        cout<<"\n";
	               system("pause");
			         break;
		    case 4: cout<<"digite un numero a eliminar: ";
			       cin>>dato;
			       eliminarNodo(lista,dato);
			        cout<<"\n";
	               system("pause");
	               break;
			 case 5:
			 	while(lista !=NULL){
			 	eliminarLista(lista,dato);
				 cout<<dato<<" ->";	
				 }
			       cout<<"\n";
	               system("pause");
			         break;         
		}
		system("cls");
	}while(op != 6);
	
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
	  cout<<"\t elemento "<<n<<" se inserta a la lista correctamente";
 }
  void mostrarLista(Nodo *lista){
  	
  	Nodo *actual = new Nodo();
  	actual =lista;
  	while(actual!= NULL){
  		cout<<actual->dato<<" ->";
  		actual = actual ->siguiente;
	  }
  	
  }
  void buscarLista(Nodo *lista, int n){
  	bool band =false;
  	Nodo *actual =new Nodo();
  	actual = lista;
  	while((actual !=NULL) &&(actual ->dato =n)){
  		if(actual ->dato == n){
  			band =true;
		  }
		  actual = actual ->siguiente;
	  }
  
  if(band == true){
  	cout<<"Elemento "<<n<<" si a sido encontrado en lista\n";
  }
  else{
  	cout<<"Elemento "<<n<					<" No a sido encontrado en lista\n";
}
} 

void eliminarNodo(Nodo *&lista, int n){
	//preguntar si no esta vacia
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		aux_borrar =lista;
		
		//recoriendo lista
		while((aux_borrar != NULL) && (aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar ->siguiente;
			
		}
		//el eloemnto no a sido encontrado
		if(aux_borrar == NULL){
			cout<<"el elmento no ha sido encontrado";
		}
		//primer elemnto es el que vamos a eliminar
		else if(anterior == NULL){
			lista = lista->siguiente;
			delete aux_borrar;
			
		}
		//el elemnto esta en la lista pero no es el primer nodo
		else{
			anterior ->siguiente = aux_borrar ->siguiente;
			delete aux_borrar;
		}
	}
}
//dejar vcacia la lista
void eliminarLista(Nodo *&lista,int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux ->siguiente;
	delete aux;
	
}  
