#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main()
{
  char p[100];
  int i=0;
  while(i!=100)
  {
    cin.getline(p,101);
    if(strcmp(p,"")==0) break;
    cout << p << endl;
    i++;

  }
  return 0;
}
