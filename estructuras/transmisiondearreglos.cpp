#include<iostream>
#include<conio.h>
using namespace std;
int hallarMax(int *, int);//prototipoo de funcion
int main(){
	
const int nlementos =5;
int numeros[nlementos]= {1,2,3,4,5};



cout<<"el mayor elemento es "<<hallarMax(numeros,nlementos)<<endl;

	getch();
	return 0;
}
int hallarMax(int *dirvec, int nlementos){
	int  max=0;
for(int i=0; i<nlementos; i++){
	if(*(dirvec+i)>max){
		max= *(dirvec+i);
	}
}
return max;

}
