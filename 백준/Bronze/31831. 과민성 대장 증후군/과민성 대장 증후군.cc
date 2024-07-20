#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    vector<int> vec(n);
    
    for(int i=0; i<n; i++)
    {
        if(i==0) cin >> vec[i];
        else {
            cin >> vec[i];
            if(vec[i-1] < 0) {
                vec[i] = vec[i];
            }
            else {
                vec[i] = vec[i]+vec[i-1];
            }
        }
    }
    
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(vec[i]>=m) cnt++;
    }
    
    cout << cnt;
    return 0;
}