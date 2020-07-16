#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[100],n;
	cout<<"digite el numero que tendra el arreglo";
	cin>>n;
	for(int i=n; i>=0; i--){
		cout<<"digite un numero";
		cin >>numeros[i];//guardando datos de vector
	}
	//ahora mostramos elementos con indices
	for(int i=0; i<n; i++){
		cout<<i<<"->"<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
