 //estructuras anidadas
 #include<iostream>
 #include<conio.h>
 using namespace std;
 struct info_direccion{
 	
 	char direccion[30];
 	char cuidad[20];
 	char provincia[20];
 };
 
 struct empleado{
 	char nombre[20];
 	struct info_direccion dir_empleados;
 	double salario;
 	
 } empleados[2];
 int main(){
 	
 	for(int i=0; i<2; i++){
 		fflush(stdin);//vacia el buffer y permite insertar valores
 		cout<<"\n digite su nombre: ";
 		cin.getline(empleados[i].nombre,20,'\n');
 		cout<<"digite su direccion: \n";
 		cin.getline(empleados[i].dir_empleados.direccion,30,'\n');
 		cout<<" cuidad: ";
 		cin.getline(empleados[i].dir_empleados.cuidad,20,'\n');
 		cout<<" provincia: ";
 		cin.getline(empleados[i].dir_empleados.provincia,20,'\n');
 		cout<<" salario: ";
 		cin>>empleados[i].salario;
 		cout<<"\n";
	 }
 	//imprimiendo datos
 	for(int i=0; i<2; i++){
 		cout<<"nombre: "<<empleados[i].nombre<<endl;
 		cout<<" direccion: "<<empleados[i].dir_empleados.direccion<<endl;
 		cout<<" cuidad: "<<empleados[i].dir_empleados.cuidad<<endl;
 		cout<<" provincia: "<<empleados[i].dir_empleados.provincia<<endl;
 		cout<<" salario: "<<empleados[i].salario<<endl;
 		cout<<"\n";
 		
 		
	 }
 	getch();
 	return 0;
 }
