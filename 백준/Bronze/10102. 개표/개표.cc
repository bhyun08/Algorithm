#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    int a=0,b=0;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        char ch;
        cin >> ch;
        if(ch == 'A') a++;
        else b++;
    }
    
    if(a > b) cout << "A";
    else if(a < b) cout << "B";
    else cout <<"Tie";
    
    return 0;
}