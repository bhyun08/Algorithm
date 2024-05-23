#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int k,d,a;
    char clr;
    cin >> k >> clr >> d >> clr >> a;
    
    if(k+a < d || d==0) cout << "hasu";
    else cout << "gosu";
    
    return 0;
}