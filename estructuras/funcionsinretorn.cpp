#include<iostream>
#include<conio.h>
using namespace std;
//prototipos de datos
void pedirDatos();
void mult(float x, float y);
float num1, num2;

int main(){
	
	//llamamos funcion
	pedirDatos();
	mult(num1,num2);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"digite 2 numeros: ";
	cin>>num1>>num2;
}
void mult(float x, float y){
	float multiplicacion = x*y;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
}
