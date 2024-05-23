#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int s,a;
    cin >> s >> a;
    
    s = s/2;
    a = a/2;
    
    if(s > a) cout << a;
    else if (s == a) cout << a;
    else cout << s;
    
    return 0;
}