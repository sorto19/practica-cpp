#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dir_numero;
	cout<<"digite numero";cin>>numero;
 dir_numero =&numero; //guardando la posicion de memoria
  if(*dir_numero %2 ==0){
  	cout<<" el numero"<<*dir_numero<<"es par"<<endl;
  	cout<<"la posicion es:"<<dir_numero<<endl;
  }else{
  		cout<<" el numero"<<*dir_numero<<"es impar"<<endl;
  	cout<<"la posicion es:"<<dir_numero<<endl;
  	
  }
  
	
	
	getch();
	return 0;
}
