//
//  10992.cpp
//  
//
//  Created by 김기은 on 2020/07/16.
//
#include <iostream>
using namespace std;

int main(){
   int N;
   cin >> N;

    for(int i=0; i<N; i++){
        
        if(i!=N-1){
          for(int j=0; j<N-1-i; j++){
            cout<<" ";
          }
          for(int j=0; j<2*i+1; j++){

            if(j==0 || j==2*i) {
              cout<<"*";
            }

            else {
              cout<<" ";
            }
          }
          cout<<"\n";
      }

      else if(i==N-1){
        for(int j=0; j<2*N-1; j++){
          cout<<"*";
        }
      }
  }

   
}
