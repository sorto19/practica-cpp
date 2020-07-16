#include<iostream>
using namespace std;

int main(){
	
	int nume, sum =0;
	do{
		cout<<"digite numero"; cin>>nume;
		if (nume>0){
			sum += nume;
		}
	}while((nume>20) || (nume>30) && (nume !=0));
	
	cout<<"\n la suma es"<<sum<<endl;
	return 0;
}
