#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);
int main(){
	
cout<<factorial(3)<<endl;
	
	getch();
	return 0;
}
int factorial(int n){
	if(n==0){
		n =1;
	}
	else{
		n = n * factorial(n-1);//es una funcion recursiva por que la funcion se esta llamando dentro de ella misma;
	}
	return n;
}
