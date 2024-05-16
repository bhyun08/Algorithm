#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    int cntp=0,cntm=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a%2==0) cntp++;
        else cntm++;
    }
    if(cntp>cntm) cout<<"Happy";
    else cout<<"Sad";
    return 0;
}