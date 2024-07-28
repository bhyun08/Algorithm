#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    
    int sum=vec[0];
    for(int i=1; i<n; i++) {
        if(vec[i]-1 != vec[i-1]) sum += vec[i]; 
    }
    
    cout << sum;
    
    return 0;
}