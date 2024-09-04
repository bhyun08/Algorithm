#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    while(1) {
        int a,b;
        cin >> a >> b;
        
        if(a == 0 && b == 0) return 0;
        else if(a > b) {
            if(a % b == 0) cout << "multiple\n";
            else cout << "neither\n";
        }
        else {
            if(b % a == 0) cout << "factor\n";
            else cout << "neither\n";
        }
    }

}