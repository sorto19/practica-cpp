#include<iostream>
#include<conio.h>
using namespace std;
int fibonacci(int n);
int mostrarfibo(int n);
int main(){
	int nElementos;
	do{
		cout<<"digite elementos";
		cin>>nElementos;
	}while(nElementos<0);
	cout<<"\n la suma es "<<fibonacci(nElementos
	)<<endl;
	fibonacci(nElementos);
	cout<<"\n la serie fibonacci es "<<mostrarfibo(nElementos)<<endl;
	
	
	getch();
	return 0;
}
int fibonacci(int n){

	if(n==0 || n==1){
	
		return n;
	}else{
		return fibonacci(n-2) + fibonacci(n-1);
		
	}
	
}

int mostrarfibo( int nelementos){
	for(int i=0; i<nelementos; i++){
		if(fibonacci(i) !=0){
			cout<<" ,";
			cout<<fibonacci(i);
		}
	}
}
