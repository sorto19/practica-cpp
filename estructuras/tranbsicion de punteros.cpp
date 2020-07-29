#include<iostream>
#include<conio.h>
using namespace std;
void intercambio(float *, float *);//prototipoo de funcion
int main(){
	
float n1=32.45,n2=45.7;


cout<<"primer numero"<<n1<<endl;
cout<<"segundo numero"<<n2<<endl;
intercambio(&n1,&n2);
cout<<"\n despues de el intercambio es ";
cout<<"\n el nuevo valor del primer numero"<<n1<<endl;
cout<<"\n el nuevo valor del segundo numero"<<n2<<endl;
	getch();
	return 0;
}
void intercambio(float *dirnm1, float *dirnm2){
	float aux;
	//intercambiando valores con punteros
	aux=*dirnm1;
	*dirnm1=*dirnm2;
	*dirnm2=aux;
}
