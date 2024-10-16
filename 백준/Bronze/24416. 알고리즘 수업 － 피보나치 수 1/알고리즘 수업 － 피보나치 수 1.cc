#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int b;
    cin >> b;
    
    long long a[1000] = {0, 1, 1,};
    
    for (int i = 3; i <= 90; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    
    cout << a[b] << " " << b-2;


    return 0;
}
