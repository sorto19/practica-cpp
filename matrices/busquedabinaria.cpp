#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numeros[] ={1,2,3,4,5};
	int inf, sup, mitad,dato;
	char band ='f';
	dato =4;
	
	//algoritmo de busqueda binaria
	
	inf=0;
	sup=5;
	while(inf <= sup){
		mitad = (inf+sup)/2;
		
		if(numeros[mitad] ==dato){
			band = 'v';
			break;
		}
		if(numeros[mitad] > dato){
			sup=mitad;
			mitad =(inf+sup)/2;
			
		}
			if(numeros[mitad] <dato){
			inf=mitad;
			mitad =(inf+sup)/2;
			
		}
	}
	 if(band =='v'){
		cout<<"el numero esta en la pos"<<mitad<<endl;
	}else{
		cout<<"numero no ha sido encontrado";
	}
	

	
	getch();
	return 0;
}
