#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,sum=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int j;
        cin>>j;
        sum += j;
    }
    if(sum < 0) cout<<"Left";
    else if(sum == 0) cout<<"Stay";
    else cout<<"Right";
    return 0;
}