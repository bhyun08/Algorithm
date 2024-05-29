#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    long long fac=1;
    
    cin >> n;
    
    for(int i=n; i>0; i--)
    {
        fac *= i;
    }
    cout << fac/(3600*7*24);
    return 0;
}