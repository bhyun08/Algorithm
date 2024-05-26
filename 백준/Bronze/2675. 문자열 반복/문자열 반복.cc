#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin >> a;
    
    for(int w=0; w<a; w++)
    {
    int n;
    string str;
    cin >> n >> str;
    
    for(int i = 0; i < str.size(); i++) {
        for(int j = 0; j < n; j++) {
            cout << str[i];
        }
    }
    cout<<"\n";
    }
    return 0;
}