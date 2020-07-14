#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
	float a,b,c,x1 =0,x2 =0 ;
	cout<<"digite a:"; cin>>a;
	cout<<"digite b:"; cin>>b;
	cout<<"digite c:"; cin>>c;
	
	
	x1 = (-b +sqrt(b*b-4.0 *a*c)/2.0 *a);
	x2 =(-b -sqrt(b*b -4.0 *a *c)/2.0 *a);
	
	cout<<"el primer ressultado es:"<<x1<<endl;
	cout<<"el primer resultado es:"<<x2<<endl;
	return 0;
}
