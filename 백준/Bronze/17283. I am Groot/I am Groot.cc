#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int lng;
    int bp;
    
    cin >> lng >> bp;
    
    double sum = 0; 
    int i = 2;
    
    while(1) {
        lng = lng * (bp / 100.0); 
        if (lng <= 5) break;
        sum += lng * i;
        i *= 2;
    }

    cout << fixed << setprecision(0) << sum; 
    return 0;
}
