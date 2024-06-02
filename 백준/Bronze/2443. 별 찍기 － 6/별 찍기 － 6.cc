#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        for(int k=0; k<i-1; k++)
        {
            cout << " ";
        }
        for(int j=0; j<n-(i-1); j++)
        {
            cout << "*";
        }
        for(int h=0; h<n-i; h++)
        {
            cout<<"*";
        }
        cout << "\n";
    }
    return 0;
}