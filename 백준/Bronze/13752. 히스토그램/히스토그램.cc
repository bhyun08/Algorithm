#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        
        for(int j=a; j>0; j--)
        {
            cout << "=";
        }
        cout << "\n";
    }
    return 0;
}