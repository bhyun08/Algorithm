#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        
        string cpA = a, cpB = b;
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        if(a == b) 
            cout << cpA << " & " << cpB << " are anagrams.\n";
        else 
            cout << cpA << " & " << cpB << " are NOT anagrams.\n";
    }

    return 0;
}
