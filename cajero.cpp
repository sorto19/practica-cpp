#include<iostream>
using namespace std;
int main(){
	int saldi=1000,opc;
	float extra,saldo =0, retiro;
	cout<<"\t bienvenido a su cajero virtual"<<endl;
	cout<<"1. ingresar dinero en cuenta"<<endl;
	cout<<"2. retirar dinero en cuenta"<<endl;
	cout<<"3. salir"<<endl;
	cout<<"Opcion"<<endl;
	cin>>opc;
	switch(opc){
		case 1:
			cout<<"digite la cantidad de dinero a ingresar:";
			cin>>extra;
			saldo = saldi +extra;
			cout<<"Dinero en cuenta:"<<saldo;break;
			
	    case 2:
	    cout<<"digite la cantidad de dinero a retirar:";
			cin>>retiro;
	  if(retiro > saldi){
	  	cout<<"no tiene dinero";
	  }	else{
	  	saldo =saldi-retiro;
	  	cout<<"dinero en cuenta"<<saldo<<endl;
	  
	  }
	  case 3: break;
	  return 0;
	}
	
}
