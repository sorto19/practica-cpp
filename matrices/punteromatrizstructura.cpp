 #include<iostream>
 #include<conio.h>
 using namespace std;
 struct Alumno{
 	char nombre[30];
 	int edad;
 	float promedio;
 }alumno[3], *puntero_alumno =alumno;
 void pedirDatos();
 void calcularMejorPromedio(Alumno *);
 
 int main(){
 	pedirDatos();
 	calcularMejorPromedio(puntero_alumno);
 	
 	getch();
 	return 0;
 }
 void pedirDatos(){
 	
 	for(int i=0; i<3; i++){
 		fflush(stdin);//vacia el buffer 
 		cout<<"digite su nombre: ";
 	cin.getline((puntero_alumno+i)->nombre,30,'\n');
 	cout<<"digite su edad: ";
 	cin>>(puntero_alumno+i)->edad;
 	cout<<"digite su promedio: ";
 	cin>>(puntero_alumno+i)->promedio;
 	cout<<"\n";
	 }
 }
  void calcularMejorPromedio(Alumno *puntero_alumno){
 	
 	float mayor=0.0;
 	int pos=0;
 	for(int i=0; i<3; i++){
 		if((puntero_alumno+i)->promedio > mayor){
 			mayor=(puntero_alumno+i)->promedio;//comprobar el mayor promedio
 			pos=i;//guardar la mayor posicion
		 }
	 }
	 //imprimir los datos del alumno con mayor promedio
	 cout<<"\n el alumno con mejor promedio es: \n";
	 cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	 cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	 cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
	 
 	}
