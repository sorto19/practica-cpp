 #include<iostream>
 #include<conio.h>
 using namespace std;
 struct Persona{
 	char nombre[30];
 	int edad;
 }persona, *puntero_persona =&persona;
 void pedirDatos();
 void mostrarDatos(Persona *);
 
 int main(){
 	pedirDatos();
 	mostrarDatos(puntero_persona);
 	
 	getch();
 	return 0;
 }
 void pedirDatos(){
 	cout<<"digite su nombre:";
 	cin.get(puntero_persona->nombre,30,'\n');
 	cout<<"digite su edad:";
 	cin>>puntero_persona->edad;
 }
 void mostrarDatos(Persona *puntero_persona){
 	
 	cout<<"\n su nombre: "<<puntero_persona->nombre<<endl;
 	cout<<"\n su edad: "<<puntero_persona->edad<<endl;
 }
