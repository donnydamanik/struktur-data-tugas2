#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

main(){
	int matA[2][2]={4,2,8,10};
	int tsp[2][2];
	cout<<"Matriks A"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Press Any Key to Continue..."; getch();
	system("cls");
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			tsp[j][i]=matA[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Hasil Transpose Matriks A"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<" "<<tsp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Press Any Key to Continue";
	getch();
}
