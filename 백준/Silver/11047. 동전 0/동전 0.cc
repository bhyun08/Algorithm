#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k, cnt = 0;
    cin >> n >> k;
    
    vector<int> vec1(n);
    
    for(int i=0; i < n; i++) {
        cin >> vec1[i];
    }
    
    for(int i=n-1; i>=0; i--)
    {
        if(k > 0 && k >= vec1[i])
        {
            cnt += k / vec1[i];
            k = k%vec1[i];
        }
    }
    
    cout << cnt;
    return 0;
}
