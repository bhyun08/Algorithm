#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int A,B,X;
        cin>>A>>B>>X;
        cout<<A*(X-1)+B<<"\n";  
    }
    return 0;
}