#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        int n,m;
        int cnt=0;
        cin >> n >> m;
        
        for(int j=m; j>=n; j--)
        {
            string str = to_string(j);
            for(int k=0; k<str.size(); k++)
            {
                if(str[k]=='0') cnt++;
            }
        }
        
        cout << cnt << "\n";
    }
    return 0;
}