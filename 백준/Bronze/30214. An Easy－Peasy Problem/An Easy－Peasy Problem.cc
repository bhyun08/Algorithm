#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio;
    cin.tie(0);
    
    int half,end;
    cin>>half>>end;
    if((double)end/2 <= half) cout<<"E";
    else cout<<"H";
    return 0;
}