#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,sum=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        sum += b;
    }
    cout<<sum;
    return 0;
}