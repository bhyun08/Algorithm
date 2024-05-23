#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> cup={1,0,0};
    
    int n;
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {   
        int temp;
        int a,b;
        cin >> a >> b;
        temp = cup[a-1];
        cup[a-1] = cup[b-1];
        cup[b-1] = temp;
    }
    if(cup[0]==1) cout<<"1";
    else if(cup[1]==1) cout<<"2";
    else cout<<"3";
    
    return 0;
}