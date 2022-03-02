#include <iostream>
using namespace std;

int main(){
   int mtxA [2][2]={4, 8, 2, 10};
   int mtxB [2][2]={-5, 4, 8, -12};
   
   cout<<"Matriks A"<<endl;
   for (int i=0;i<2;i++){
       for(int j=0;j<2;j++){
        cout<<mtxA[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<"Matriks B"<<endl;
   for(int k=0; k<2; k++){
       for(int l=0; l<2;l++){
    cout<<mtxB[k][l]<<" ";
       }
       cout<<endl;
   }
   
   cout<<"Hasil Penjumlahan Matrik A dan B "<<endl;
   for (int m=0; m<2; m++){
       for (int n=0; n<2; n++){
           cout<<mtxA[m][n] + mtxB[m][n]<<" ";
       }
       cout<<endl;
   }
    return 0;
}
