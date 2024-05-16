#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int start,end;
    cin>>start>>end;
    if(start==23) start=-1;
    if(start==22) start=-2;
    if(start==21) start=-3;
    if(start==20) start=-4;
    cout<<end-start;
    return 0;
}