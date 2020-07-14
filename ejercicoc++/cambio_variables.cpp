#include<iostream>
using namespace std;
int main(){
	int x,y, aux;
	
	cout<<"digite x :"; cin>>x;
	cout<<"digite y: "; cin >>y;
	
	aux=x;
	x=y;
	y=aux;
	cout<<" \n el nuevo valor de x es:"<<x<<endl;
	cout<<"\n el nuevo valor de y es :"<<y<<endl;
	
	
	
	return 0;
}
