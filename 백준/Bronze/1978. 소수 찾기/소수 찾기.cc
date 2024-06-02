#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    
    int cnt=0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        bool sosu = true;
        if (a <= 1)
        {
            sosu = false;
        } 
        else 
        {
            for (int j = 2; j < a; j++) {
                if (a % j == 0) {
                    sosu = false;
                    break; 
                }
            }
        }
        if (sosu) cnt++;
    }
    cout << cnt;
    return 0;
}