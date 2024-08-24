#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    int cnt = 0;
    for(int i=0; i<n; i++) {
        string gword;
        cin >> gword;
        
        vector<int> vec(26);
        bool isGword = true;
        
        vec[gword[0]-97]++;
        for(int j=1; j < gword.size(); j++) {
            
            if(vec[gword[j]-97] != 0) {
                if(gword[j-1] != gword[j]) isGword = false;
            }
            
            vec[gword[j]-97]++;
            
        }
        
        if(isGword) cnt++;
    }

    cout << cnt;
    return 0;
}