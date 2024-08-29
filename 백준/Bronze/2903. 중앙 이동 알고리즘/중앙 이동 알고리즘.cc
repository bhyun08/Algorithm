#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> vec(15);
    vec[0] = 4;
    
    for(int i=1; i<=15; i++) {
        int a = sqrt(vec[i-1])-1 + sqrt(vec[i-1]);
        vec[i] = a*a;
    }
    
    int n;
    cin >> n;
    cout << vec[n];

    return 0;
}