#include<iostream>
using namespace std;
int main(){
	int nume[] = {1,2,3,4,5};
	int muml=0;
	for(int i=0; i<5 ; i++){
		muml = nume[i] *nume[i];
		
	}
	
	cout<<"\n los elementos de el vector son:"<<muml<<endl;
	
	return 0;
}
