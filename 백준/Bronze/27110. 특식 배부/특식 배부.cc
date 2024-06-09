#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,a,b,c;
    
    int cnt = 0;
    
    cin >> n >> a >> b >> c;
    
    if(n<=a) cnt += n;
    else cnt += a;
    
    if(n<=b) cnt += n;
    else cnt += b;
    
    if(n<=c) cnt += n;
    else cnt += c;
    
    cout << cnt;
    
    return 0;
}