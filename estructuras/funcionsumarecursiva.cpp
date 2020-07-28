#include<iostream>
#include<conio.h>
using namespace std;
int sumar(int);
int main(){
	int nElementos;
	do{
		cout<<"diigite elementos";
		cin>>nElementos;
	}while(nElementos<=0);
	cout<<"\n la suma es "<<sumar(nElementos
	)<<endl;
	
	
	
	getch();
	return 0;
}
int sumar(int n){
	int	suma =0;
	if(n==1){
	
		suma =1;
	}else{
		suma = n + sumar(n-1);
		
	}
	return suma;
}
