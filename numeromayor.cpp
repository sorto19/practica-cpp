#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"ingrese 3 numeros";
	cin>>n1>>n2>>n3;
	

	if(n1==n2==n3){
		cout<<"ambos son iguales";
		
	}else if(n1>n2){
		cout<<"el mayor es :"<<n1;
	}else if(n2>n3){
		cout<<"el mayor es :"<<n2;
	}else if(n3>n1){
		cout<<"el mayor es :"<<n3;
	}else if(n3>n2){
		cout<<"el mayor es :"<<n2;
	}else{
		cout<<"es el menor";
	}
}
