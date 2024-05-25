#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int L, P;
    cin >> L >> P;
    
    int a = L * P;
    int b[5];
    
    for(int i = 0; i < 5; i++){
        cin >> b[i];
    }
    
    for(int i = 0; i < 5; i++){
        cout << b[i] - a << " ";
    }
    
    return 0;
}
