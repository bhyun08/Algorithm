#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin >> str;
    
    string new_str=str;
    reverse (new_str.begin(), new_str.end());
    
    if(new_str == str) cout<<"1";
    else cout<<"0";
    
    return 0;   
}