#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int vec1[]= {11,2,2,1,5};
	int vec2[5];
	for (int i=0; i<5; i++){
		vec2[i] = vec1[i];
	}
	for (int i=0; i<5; i++){
		vec2[i] *= vec1[i];
	}
	for (int i=0; i<5; i++){
		cout<<vec2[i]<<endl;
	}
	
}
