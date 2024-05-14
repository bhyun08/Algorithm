#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    long long fac=1;
    cin>>n;
    if(n==0) 
    {
        cout<<"1";
        return 0;
    }
    else
    {
        for(int i=n; i>0; i--)
        {
            fac *= i; 
        }
    }
    cout<<fac;
    return 0;
}