#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, l, d;
    cin >> n >> l >> d;
    
    int sec = 0;

    for (int i = 0; i < n; i++) {
        sec += l;

        for (int j = 0; j < 5; j++) {
            if (sec % d == 0) {
                cout << sec;
                return 0;
            }
            sec++;
        }
    }
    
    while (1) {
        if (sec % d == 0) {
            cout << sec;
            return 0;
        }
        sec++;
    }
}