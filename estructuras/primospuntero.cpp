 #include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dir_numero,n,*dir_n,d,*dir_d,primo,*dir_primo;
		cout<<"digite numero";cin>>numero;
 dir_numero =&numero; //guardando la posicion de memoria
 dir_n=&n;
 dir_d=&d;
  dir_primo=&primo;
  	
*dir_n=2;
while(*dir_numero >0){
*dir_primo=1;
for(*dir_d=2;*dir_d< *dir_n;  ++ *dir_d){
	if(*dir_n%*dir_d){
		*dir_primo=0;
		break;
	}
}	
if(*dir_primo){
	
		cout<<" el numero"<<*dir_numero--<<"es primo"<<endl;
  	cout<<"la posicion es:"<<dir_numero<<endl;
}else{
		cout<<" el numero"<<*dir_numero<<"no es primo"<<endl;
  	cout<<"la posicion es:"<<dir_numero<<endl;
}
*dir_n++;
}
  
	
	
	getch();
	return 0;
}
