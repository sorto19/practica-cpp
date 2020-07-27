#include<iostream>
#include<conio.h>

using namespace std;

void valNuevo(int&, int&);

int main(){
	int num1, num2;
	cout<<"digite 2 numeros :";
	cin>>num1>>num2;
	
	valNuevo(num1,num2);
	cout<<" el nuevo valor de el primer numero es: "<<num1<<endl;
	cout<<" el nuevo valor de el segundo numero es: "<<num2<<endl;
	getch();
	return 0;
}
void valNuevo(int& xnum, int& ynum){
	cout<<" el valor de el primer numero es: "<<xnum<<endl;
	cout<< " el valor de el segundo numero es: "<<ynum<<endl;
	xnum = 34;
	ynum = 43; 
}
