#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    cin >> a >> b;
    
    double newA;
    double newB;
    
    newB = b*0.01;
    newA = a - (a*newB);
    
    if(newA < 100) cout << "1";
    else cout <<"0";
    return 0;
}