#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    int sum = a+b+c;
    
    if(sum<100) 
    {
        if(a > b && c > b) cout << "Korea";
        else if(b > a && c > a) cout << "Soongsil";
        else cout << "Hanyang";
    }
    else cout << "OK";
    
    return 0;
}