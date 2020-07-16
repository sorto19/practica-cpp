#include<iostream> //icluimos iostream para usar cout y cin
using namespace std; //espacio de trabajo

int main(){ //funcion principal
	int n;//declaranmos  n
	do{ //hacer 
		cout<<"digite numeros"; cin>>n;
	}while(n>=1); //mientras
	 for(n=1; n<=5; n++){ //recorra
	 	cout<<n<<endl;//imprima
	 }
	 return 0;//retorne
}
