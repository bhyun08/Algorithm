#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin>>a;
    int cnt=0;
    for(int i=0; i<5; i++)
    {
        int b;
        cin>>b;
        if(a==b) cnt++;
    }
    cout<<cnt;
    return 0;
}