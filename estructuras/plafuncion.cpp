#include<iostream>
#include<conio.h>
using namespace std;
//prototipo de funcion prefijo de plantilla de la funcion tipod
template <class TIPOD>
void mostrarAbs(TIPOD numero);//tipod engloba diferentes tipos de datos

int main(){
int num1 =-3; float num2 =-34.879; double num3 =-123.5678; 	
mostrarAbs(num1);
mostrarAbs(num2);
mostrarAbs(num3);	
	
	getch();
	return 0;
}
template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero < 0){
		numero = numero * -1;
	}
	cout<<"el valor absoluto es "<<numero<<endl;
}
