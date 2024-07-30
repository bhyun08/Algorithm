#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    int cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << cnt;
            if (j < m - 1) cout << " "; 
            cnt++;
        }
        cout << "\n"; 
    }

    return 0;
}