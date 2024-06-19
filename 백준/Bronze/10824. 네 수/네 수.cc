#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<string> vec(4);
    
    for(int i=0; i<4; i++)
    {
        cin >> vec[i];
    }
    
    string ab = vec[0]+vec[1];
    string cd = vec[2]+vec[3];
    
    long long a = stoll(ab) + stoll(cd);
    
    cout << a;
    
    return 0;
}