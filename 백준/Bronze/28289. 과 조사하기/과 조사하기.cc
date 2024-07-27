#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> vec(4,0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) { 
        int g,c,n;
        cin >> g >> c >> n;
        
        if(g == 1) vec[3]++;
        
        else {
            if(c == 1 || c == 2) vec[0]++;
            if(c == 3) vec[1]++;
            if(c == 4) vec[2]++;
        }
    }
    
    for(int i=0; i<4; i++) {
        cout << vec[i] << "\n";
    }

    return 0;
}