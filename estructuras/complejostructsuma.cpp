 #include<iostream>
 #include<conio.h>
 using namespace std;
 struct Complejo{
 	float real, imaginaria;
 }z1,z2;
 
 void pedirDatos();
 Complejo suma(Complejo,Complejo);
 void muestra(Complejo);
 
 int main(){
 	pedirDatos();
 	Complejo x = suma(z1,z2);
 	muestra(x);
 	
 	getch();
 	return 0;
 }
 
 void pedirDatos(){
 	cout<<"digite los datos para el primer numero complejo: "<<endl;
 	cout<<"parte real"; cin>>z1.real;
 	cout<<"parte imaginaria: ";cin>>z1.imaginaria;
 		cout<<"\ndigite los datos para el segundo numero complejo: "<<endl;
 	cout<<"parte real"; cin>>z2.real;
 	cout<<"parte imaginaria: ";cin>>z2.imaginaria;
 	
 }
 Complejo suma(Complejo z1, Complejo z2){
 	z1.real += z2.real;
 	z1.imaginaria += z2.imaginaria;
 	return z1;
 }
 void muestra(Complejo x){
 	cout<<"\n Resultado de la suma: "<<x.real<<", "<<x.imaginaria<<endl;
 }
