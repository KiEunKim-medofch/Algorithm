//
//  2439.cpp
//  
//
//  Created by 김기은 on 2020/07/15.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    
   int N;
   cin >> N;
    
   for(int i = 0; i < N; i++){

     for( int j = i; j < N-1 ; j++ ){
       cout << " ";
     }
       
     for(int j = 0; j <= i; j++){
       cout << "*";
     }
       
     cout << "\n";
       
   }
}
