#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int min1=10000;
    int min2=10000;
    vector<int> buger(3);
    vector<int> juice(2);
    for(int i=0; i<3; i++)
    {
        cin>>buger[i];
        if(min1>buger[i]) min1=buger[i];
    }
    for(int i=0; i<2; i++)
    {
        cin>>juice[i];
        if(min2>juice[i]) min2=juice[i];
    }
    cout<<min1+min2-50;
    return 0;
}