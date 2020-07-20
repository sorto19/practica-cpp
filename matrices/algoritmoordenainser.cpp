#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[] ={4,2,3,1,5};
	int i, pos,aux;
	//algoritmo de ordenamiento por insercion
	for(i=0; i<5; i++){
		
		pos =i;
		aux=numeros[i];
		while((pos>0) &&(numeros[pos-1] > aux)){
			
			numeros[pos] = numeros[pos-1];
			pos--;
			
		}
		//refresque en que numero va
		numeros[pos] =aux;
	}
	
	cout<<"orde acendente: ";
	for(i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\n";  
	
		cout<<"orde decendente: ";
	for(i=4; i>=0; i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
