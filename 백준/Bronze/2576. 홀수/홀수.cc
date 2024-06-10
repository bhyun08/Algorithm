#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int min=1000;
    int sum=0;
    
    for(int i=0; i<7; i++)
    {
        int a;
        cin >> a;
        if(a%2!=0) sum+=a;
        if(a%2!=0)
        {
            if(a<min) min = a;
        }
    }
    
    if(sum==0) cout << "-1";
    else
    {
        cout << sum << "\n";
        cout << min;
    }
    return 0;
}