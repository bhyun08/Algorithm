#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> hiarc;
    
    for(int i=0; i<5; i++)
    {
       int a;
       cin>>a;
       hiarc.push_back(a);
    }
    cout<<(hiarc[0]*hiarc[1])-(hiarc[2]*hiarc[3]*hiarc[4]);
    return 0;
}