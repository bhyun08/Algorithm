#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string str;
    cin >> n >> str;
    for(int i=0; i<n; i++)
    {
        if(n-i <= 5)
        {
            cout<<str[i];
        }
    }
    return 0;
}