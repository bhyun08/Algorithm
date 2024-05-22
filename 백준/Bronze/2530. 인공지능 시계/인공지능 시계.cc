#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int h,m,s,remain_t;
    cin>>h>>m>>s>>remain_t;
    int sum=h*3600+m*60+s+remain_t;
    h=(sum/3600)%24;
    m=(sum%3600)/60;
    s=(sum%3600)%60;
    if(h>=24) h-=24;
    cout<<h<<" "<<m<<" "<<s;
    return 0;
}