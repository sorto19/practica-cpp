#include<iostream>
#include<conio.h>
#include<string.h>
//utilizando la fun strcmp

using namespace std;
int main(){
	
	char nombre[] ="karina"; 
	char nombre2[]="karina";
	
	if(strcmp(nombre,nombre2)!=0){
		cout<<"los nombres son iguales";  
	}
	getch();
	return 0;
}
