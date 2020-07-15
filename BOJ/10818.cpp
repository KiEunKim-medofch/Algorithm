//
//  10818.cpp
//  
//
//  Created by 김기은 on 2020/07/15.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    int min, max;

    cin>> N;

    int *p = new int[N];

    for(int i = 0; i< N; i++)
    {
      cin >> (p[i]);

    }


    min = p[0];
    max = p[0];

    for(int i = 1; i < N; i++){
      if( p[i] < min ) {
        min = p[i];
      }
      if ( p[i] > max ){
        max = p[i];
      }
    }

    delete [] p;

    cout << min << " " << max;

    return 0;
}
