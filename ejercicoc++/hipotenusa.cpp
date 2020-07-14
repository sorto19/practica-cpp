#include<iostream>
#include<math.h>
using namespace std;
int main(){
/*	int catetoad, catetoop, hipote =0;
	
	cout<<"digite cateto adyacente:"; cin >>catetoad;
	cout<<"digite cteto opuesto:"; cin>>catetoop;
	
	hipote = catetoad +catetoop;
	
	cout<<"\n la hipotenusa es :"<<hipote<<endl;*/
	float x,y, res =0;
	cout<<"digite x:"; cin >>x;
	cout<<"digite y:"; cin >>y;
	
	res = (sqrt(x))/(pow(y,2)-1);
	cout<<"\n el resultado es:"<<res<<endl;
	
	return 0;
}
