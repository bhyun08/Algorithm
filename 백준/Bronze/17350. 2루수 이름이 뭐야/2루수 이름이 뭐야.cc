#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    bool t=false;
    
    for(int i=0; i<n; i++)
    {
        string a;
        cin >> a;
        if(a == "anj") t=true;
    }
    
    if(t==true) cout<<"뭐야;";
    else cout << "뭐야?";
    
    return 0;
}