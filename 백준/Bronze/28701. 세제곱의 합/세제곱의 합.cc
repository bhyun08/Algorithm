#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans+=i;
    }
    cout<<ans<<"\n";
    cout<<ans*ans<<"\n";
    cout<<ans*ans;
    return 0;
}