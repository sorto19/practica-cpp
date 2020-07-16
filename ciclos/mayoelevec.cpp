#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	 int numeros[100],n, mayor=0;
	 cout<<"digite elemento";
	 cin>>n;
	 
	 for(int i=0; i<n; i++){
	 	cout<<i+1<<"digite numero"; cin>>numeros[i];
	 	if(numeros[i] > mayor){
	 		mayor = numeros[i];
		 }
	 }
	 cout<<"\n el mayor es"<<mayor<<endl;  
	
	getch();
	return 0;
}
