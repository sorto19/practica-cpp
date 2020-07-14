
#include<iostream>

using namespace std;
int main(){
	float a,b,c,d, result =0;
	cout<<"digite a:"; cin>>a;
	cout<<"digite b:"; cin>>b;
	cout<<"digite c:"; cin>>c;
	cout <<"digite d"; cin>>d;
	
	result= (a+(b/(c-d)));
	cout.precision(2);
	cout<<"\n el resultado es :"<<result<<endl;
	
	return 0;
	
	
}
