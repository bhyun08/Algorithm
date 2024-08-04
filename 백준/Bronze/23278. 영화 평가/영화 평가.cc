#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,l,h;
    cin >> n >> l >> h;
    
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());
    
    for(int i=0; i<l; i++) {
        vec[i] = 0;
    }
    
    sort(vec.begin(),vec.end(),greater<int>());
    for(int i=0; i<h; i++) {
        vec[i] = 0;
    }
    
    double avg=0;
    for(int i=0; i<n; i++) {
        avg += vec[i];    
    }
    
    avg = avg/((n-l)-h);
    
    cout.precision(15);
    cout << avg;
    return 0;
}