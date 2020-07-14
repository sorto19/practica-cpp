#include<iostream>
using namespace std;
int main(){
	float practica,teorica,participacion, notaf =0;
	cout<<"digite nota practica:"; cin>>practica;
	cout<<"digite nota teorica:"; cin>>teorica;
	cout<<"digite nota de participacion:"; cin>>participacion;

	practica *= 0.30;//practica =practica*0.30
	teorica  *= 0.60;
	participacion *= 0.10;
	notaf = practica + teorica + participacion;
	
	cout<<"\n el promedio es:"<<notaf <<endl;
	
	return 0;
	
}
