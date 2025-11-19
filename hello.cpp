#include <iostream>
using namespace std;

   int main() {
   int A[3][3],x,y,B[3][3],C[3][3]={0}; 
   //user input in 2 arrays
   for(x=0; x<3; x++){
    for(y=0;y<3;y++){
      cin >> A[x][y];
    }
   }
   for(x=0; x<3; x++){
    for(y=0;y<3;y++){
      cin >> B[x][y];
    }
   }
   //sum of matrices
   for(x=0; x<3;x++){
    for(y=0;y<3;y++){
    C[x][y]=A[x][y]+B[x][y];
      }
    }  
   // display of sum 
      for(x=0; x<3;x++){
    for(y=0;y<3;y++){
        cout<<C[x][y]<<" ";
        
    }  
    cout<<endl;
  }
    return 0;

}