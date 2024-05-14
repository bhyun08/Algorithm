#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int h,sol;
    cin>>h>>sol;
    if((h<=11||17<=h)||(sol==1)) 
    {
        cout<<"280";
    }
    else if((12<=h||h<=16)||(sol==0)) 
    {
        cout<<"320";
    }
    return 0;
}