#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    while(1) {
        char a;
        string b;
        
        cin >> a;
        if(a=='#') return 0;
        getline(cin, b);
        
        int cnt = 0;
        for(int i=0; i<b.size(); i++) {
            if(b[i] == a || b[i] == (a-32)) cnt++;
        }
        
        cout << a << " "<< cnt << "\n";
    }
    

    return 0;
}