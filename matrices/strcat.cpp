#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char ca1[] ="mi amor es";
	char ca2[] = "karina";
	char cad[30];
	strcpy(cad,ca1); 
	strcat (cad,ca2);
	cout<<cad<<endl;
	getch();
	return 0;
}
