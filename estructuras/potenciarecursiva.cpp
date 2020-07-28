#include<iostream>
#include<conio.h>
using namespace std;
int potencia(int , int);
int main(){
	int base,expo;
	//pedir datos
	cout<<"digite base"; cin>>base;
	cout<<"digite exponenete"; cin>>expo;
	
	cout<<"\n potencia de"<<base<<"elevado a"<<expo<<"es :"<<potencia(base,expo)<<endl;
	
	
	getch();
	return 0;
}
int potencia(int x, int y){
	int pot;
	if(y==1){//caso base
		pot =x;
	}else{//caso general
		pot =x *potencia(x,y-1);
	}
	return pot;
}
