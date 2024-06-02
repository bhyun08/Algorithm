#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    int c,d;
    cin >> a >> b >> c >> d;
    
    int Ab = a*d + b*c;
    int Cd = b*d;
    
    int s = gcd(Ab, Cd); 
    Ab = Ab / s;
    Cd = Cd / s;
    
    cout << Ab << " " << Cd;
    return 0;
}