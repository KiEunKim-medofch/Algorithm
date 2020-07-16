//
//  2445.cpp
//  
//
//  Created by 김기은 on 2020/07/16.
//

#include <iostream>
using namespace std;

int main(){
   int N;
   cin >> N;
   if(N <1 && N>100) return 0;
   else if(N>=1 && N<=100) {
      for(int i = 0; i < 2*N-1; i++){

     if(i < N){
       for(int j=0; j<=i; j++){
         cout<<"*";
       }

       for(int j=0; j<2*N-2-(2*i); j++){
         cout << " ";
       }

       for(int j=0; j<=i; j++){
         cout << "*";
       }

     }
          
     if(i>=N){
       for(int j=0; j<2*N-1-i; j++){
         cout<<"*";
       }

       for(int j=0; j<2*(i-(N-1)); j++){
         cout << " ";
       }

       for(int j=0; j<2*N-1-i; j++){
         cout << "*";
       }
     }

    if(i!=2*N-2) cout << "\n";
     

   }
     
   }
   
