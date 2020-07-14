#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n1,ni,opc;
	
	cout<<"\t bienvenido a su menu"<<endl;
	cout<<"1. el cubo de un numero"<<endl;
	cout<<"2. numero par o impar"<<endl;
	cout<<"3. salir"<<endl;
	cout<<"Opcion"<<endl;
	cin>>opc;
	switch(opc){
		case 1:
			cout<<"digite numero a ingresar:";
			cin>>n1;
			ni =pow(n1,3);
			cout<<"la potencia de el numero"<<ni<<endl;
	   case 2:
	   	cout<<"digite numero a ingresar:";
			cin>>n1;
			if(n1 % 2==0){
				cout<<"es par";
			}else{
				cout<<"es impar";
			}
			 case 3: break;
	  return 0;
			
	}	
	
	}
	
