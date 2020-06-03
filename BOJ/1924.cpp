#include <iostream>

using namespace std;

int main(void)
{
    int total,tmp;
    int x,y;
    int xx[] = {0,31,28,31,30,31,30,31,31,30,31,30};
    cin >> x >> y;
    
    if(x<1 || x > 12 || y<1 || y > 31)
        return -1;
    if(x==2 && y>28)
        return -1;
    if(x==4 && y==31)
        return -1;
    if(x==6 && y==31)
        return -1;
    if(x==9 && y==31)
        return -1;
    if(x==11 && y==31)
        return -1;
        
    for(int i=0;i<x;++i)
        tmp += xx[i];
        
    total = y + tmp;
    
    switch (total%7)
    {
        case 6 :
            cout << "SUN";
            break;
        case 0 :
            cout << "MON";
            break;
        case 1 :
            cout << "TUE";
            break;
        case 2 :
            cout << "WED";
            break;
        case 3 :
            cout << "THU";
            break;
        case 4 :
            cout << "FRI";
            break;
        case 5 :
            cout << "SAT";
            break;
        }
    cout << endl;
        
    return 0;
    
        
}
