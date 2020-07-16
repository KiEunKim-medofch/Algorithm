//
//  2446.cpp
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

    for (int j=0; j<i; j++){
      cout<<" ";
    }

    for(int j=0; j<2*N-1-2*i; j++){
      cout<<"*";
    }


    cout<<"\n";

  }

  for(int i=0; i<N-1; i++){

    for (int j=0; j<N-2-i; j++){
      cout<<" ";
    }

    for(int j=0; j<2*i+3; j++){
      cout<<"*";
    }


    cout<<"\n";

  }
   
   
}
