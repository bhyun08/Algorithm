#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int sum=1;
    for(int i=n; i>0; i--)
    {
        sum *= i;
    }
    cout<<sum;
    return 0;
}