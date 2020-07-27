#include<iostream>
#include<conio.h>
using namespace std;
//prototipo de funcion

int encontrarMax(int x, int y);
int main(){
	int n1, n2;
	cout<<"digite dos numeros";
	cin>>n1>>n2;
 
	cout<<"el mayor es "<<encontrarMax(n1,n2)<<endl; 
	
	getch();
	return 0;
}
//definicion de funcion
int encontrarMax(int x, int y){
	int numMax;
	if( x> y){
		numMax =x;
	}else{
		numMax =y;
	}
	return numMax;
}
