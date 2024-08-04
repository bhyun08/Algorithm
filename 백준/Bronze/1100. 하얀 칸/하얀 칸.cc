#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int cnt = 0;
    
    for(int i=0; i<8; i++) {
        string a;
        cin >> a;
        
        if(i % 2 == 0) {
           for(int j=0; j<8; j+=2) {  
               if(a[j] == 'F') cnt++;
           }
        }
        else {
            for(int j=1; j<8; j+=2) {  
               if(a[j] == 'F') cnt++;
           }
        }
    }
    
    cout << cnt;
    return 0;
}
