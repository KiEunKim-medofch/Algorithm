#include <iostream>
using namespace std;


int main()
{
  int N;
  cin >> N;
  int i = 1;
  while(N <= 9 && N  >= 1 && i<=9)
  {
    cout << N << " * " << i << " = " << N*i << "\n";
    i++;
  }

  return 0;

}
