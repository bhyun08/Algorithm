#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;
    
    int cnt = 1;
    if(n != 1) {
        while(n > 1) {
            n -= 6*cnt;
            cnt ++;
        }
    }
    
    cout << cnt;
    return 0;
}