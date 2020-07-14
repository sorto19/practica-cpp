#include<iostream>
using namespace std;
int main(){
	char letra;
	
	cout<<"digite caracter";cin>>letra;
	
	switch(letra){
		case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':cout<<"\n  es una vocal minuscula";break;
	    	default :cout<<"\n no es una vocal minuscula";break;  
	}
	return 0;
}
