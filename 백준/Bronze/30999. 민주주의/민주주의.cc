#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int m;
    cin >> m;
    
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        string a;
        cin >> a;
        int x=0;
        int o=0;
        for(int j=0; j<m; j++)
        {
            if(a[j]=='X') x++;
            else if(a[j]=='O') o++;
        }
        if(x < o) cnt++;
    }
    
    cout << cnt;
    return 0;
}