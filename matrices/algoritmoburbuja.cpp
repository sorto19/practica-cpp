   #include<iostream>
   #include<conio.h>
   using namespace std;
   int main(){
   	int numeros[] = {4,1,2,3,5};
   	int i,j,aux;
   	//algoritmo burbuja
   	for(i=0;i<5; i++){
   		for(j=0; j<5; j++){
   			if(numeros[j] > numeros[j+1]){
   				aux =numeros[j];
   				numeros[j] = numeros[j+1];
   				numeros[j+1] =aux;
			   }
		   }
	   }
	   cout<<"orden acendente"<<endl;
	   for(i=0; i<5; i++){
	   	cout<<numeros[i];
	   }
	   cout<<"\n";
	   cout<<"orden decendete"<<endl;
	   for(i=4; i>=0; i--){
	   	cout<<numeros[i];
	   }
   	
   	
   	
   	
   	getch();
   	return 0;
   	
   }
