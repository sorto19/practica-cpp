#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[100],n, sumv=0;
	 cout<<"digite elemento";
	 cin>>n;
	 	 for(int i=0; i<n; i++){
	 	cout<<i<<"digite numero"; cin>>numeros[i];
	 	if(numeros[i] > sumv){
	 		sumv = numeros[i];
		 }
	 }
	  cout<<"\n el elemento igual ala suma es es"<<sumv<<endl;  
	
	getch();
	return 0;
}
