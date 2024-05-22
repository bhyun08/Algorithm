#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string a;
    cin>>n;
    cin.ignore();
    for(int i=1; i<=n; i++)
    {
        getline(cin,a);
        cout<<i<<". "<<a<<"\n"; 
    }
    return 0;
}