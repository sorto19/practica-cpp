#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
//prototipos de datos
void pedirDatos();
void al_cuadrado(float x);
float num1;
  n
int main(){
	
	//llamamos funcion
	pedirDatos();
	al_cuadrado(num1);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"digite  numeros: ";
	cin>>num1;
}
void al_cuadrado(float x){
	float cuadrado = pow(num1,2);
	cout<<"el cuadrado es: "<<cuadrado<<endl;
}
