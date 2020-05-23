#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
  int T;
  int A, B;
  cin >> T;
  for(int i=0;i<T;i++)
  {
    cin >> A >> B;
    cout << "Case #" << i+1 << ": " << A+B << endl;
  }
}
