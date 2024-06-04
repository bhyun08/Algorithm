#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b,c;
    while(1)
    {
    cin >> a >> b >> c;
    if(a==0&&b==0&&c==0) break;
    int h = max({a, b, c});
    int s1, s2;
    if (h == a) 
    {
        s1 = b;
        s2 = c;
    }
    else if (h == b) 
    {
        s1 = a;
        s2 = c;
    } 
    else 
    {
        s1 = a;
        s2 = b;
    }
    if( (s1*s1) + (s2*s2) == (h*h)) cout << "right\n";
    else cout << "wrong\n";
    }
    return 0;
}