#include <iostream>
using namespace std;


int main()
{
   int num;
   int i = 1;
   cin >> num;

   while(num >= 1 && num <=100000 && i<=num)
   {
       cout << i << "\n";
       i++;
   }
    
    return 0;

}
