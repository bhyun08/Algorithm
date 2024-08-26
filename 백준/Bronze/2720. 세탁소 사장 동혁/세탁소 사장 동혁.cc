#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;

    for(int i=0; i < n; i++) {
        
        int a;
        cin >> a;
        
        int qt = 0;
        int di = 0;
        int nk = 0;
        int pn = 0;
        
        while(a >= 25) {
            a -= 25;
            qt ++;
        }
        while(a >= 10) {
            a -= 10;
            di ++;
        }
        while(a >= 5) {
            a -= 5;
            nk ++;
        }
        while(a >= 1) {
            a -= 1;
            pn ++;
        }
        
        cout << qt <<" "<< di << " " << nk << " " << pn <<"\n";
    }

    return 0;
}