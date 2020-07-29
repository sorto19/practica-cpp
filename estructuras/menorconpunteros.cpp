#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[10],men=0,may=0, cantidad=0;
	int *dir_numeros,*dir_men,*dir_may,*dir_cantidad;
	dir_numeros = numeros;
      dir_men =& men;
      dir_cantidad= &cantidad;
      dir_may=&may;
    *dir_men=*dir_may;
	cout<<" Digite un numero  :";
	cin>>*dir_cantidad;
for(int i=0; i<*dir_cantidad; i++){
 cout<<i+1<<"digite numeros";
 cin>>numeros[i];
 if(numeros[i]>*dir_may){
 	*dir_may =numeros[i];
 }
  
}
//cout<<"el mayor es"<<*dir_may<<endl;
//cout<<"la posicion es"<<dir_may<<endl;
 *dir_men=*dir_may;
for(int i=0; i<*dir_cantidad; i++){
	if(*dir_men>numeros[i]){
 	*dir_men =numeros[i];
 }
}
cout<<"el menor es"<<*dir_men<<endl;
cout<<"la posicion es"<<dir_men<<endl;





	getch();
	return 0;
}
