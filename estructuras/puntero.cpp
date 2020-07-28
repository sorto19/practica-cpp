#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dir_num;
 num=20;
 dir_num =&num;
	
	cout<<"\n potencia de"<<*dir_num<<endl;
	cout<<"\n potencia de"<<dir_num<<endl;
	
	
	getch();
	return 0;
}
