#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    if(a==0) {
        c = c*c;
        a = c-b;
        cout << a;
        return 0;
    }
    
    if(b==0) {
        c = c*c;
        b = c-a;
        cout << b;
        return 0;
    }
    
    if(c==0) {
        int f = a+b;
        f = sqrt(f);
        cout << f;
        return 0;
    }

    return 0;
}