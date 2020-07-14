#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4;
	cout<<"ingrese cuatro numeros";
	cin>>n1>>n2>>n3>>n4;
	if((n1==n2)&&(n3==n4)){
		cout<<"el cuarto numero coincide con los anteriores";
	}else{
		cout<<"el cuarto numero no coincide";
	}
	return 0;
}
