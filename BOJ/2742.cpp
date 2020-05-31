#include <iostream>
using namespace std;


int main()
{
   int num;
  
   cin >> num;
   int i = num;

   while(num >= 1 && num <=100000 && i>=1)
   {
       cout << i << "\n";
       i--;
   }
    
    return 0;

}
