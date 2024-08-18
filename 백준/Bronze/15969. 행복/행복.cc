#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(),vec.end());
    int dif = vec[n-1]-vec[0];
    
    cout << dif;
    return 0;
}