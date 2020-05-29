#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
using namespace std;


int main()
{
   char ch[100];
   
   cin >> ch;
   
   cout << ch[0];
   for(int i=1; i<strlen(ch); i++)
   {
     if(i%10==0) cout << "\n";
     cout << ch[i];
   }


}

