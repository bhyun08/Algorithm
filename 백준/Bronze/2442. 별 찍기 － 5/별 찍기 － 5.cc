#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout << " ";
        }
        for(int k=0; k<i; k++)
        {
            cout<<"*";
        }
        for(int h=0; h<i-1; h++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}