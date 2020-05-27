#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main()
{
  char c;
 
  int sum = 0, i = 0, N = 1;
  cin >> N ;

  for (int i =0; i<N; i++)
  {
    cin>>c;
    sum += c-48;
  }
  cout<< sum;
}
