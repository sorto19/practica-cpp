#include<iostream>
 #include<conio.h>
 using namespace std;
 int main(){
 	int ma[3][3],dp;
 	for(int i=1; i<3; i++){
 		for(int j=0; j<3; j++){
 			cout<<"digite un numero ["<<i<<"]["<<j<<"]";
 			cin>>ma[i][j];
		 }
	 }
	 for( int i=1; i<=3; i++){
	 	cout<<"\n";
	 	for(int j=1; j<=3; j++){
	 		cout<<ma[i][j];
		 }
	 }
	 	 for( int i=1; i<=3; i++){
	 
	 	for(int j=1; j<=3; j++){
	 		if(i==j){
	 			dp=ma[i][j];
	 			cout<<"\n la diagonal es"<<dp<<endl;
			 }
		 }
	 }
	 
	 getch();
	 return 0;
 }
