#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a[] = {3,4,2,1,5};
	int i, dato;
	char band = 'f';
	dato =4;
	//busqueda secuencial
	
	i=0;
	while((band =='f')&& (i<5)){
		if(a[i] == dato){
			band ='v';
		}
		i++;
	}
	if(band =='f'){
		cout<<"el numero no existe";
	}
	else if(band =='v'){
		cout<<"el numero esta en la pos"<<i-1<<endl;
	}
	
	
	getch();
	return 0;
}
