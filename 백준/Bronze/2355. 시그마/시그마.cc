#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    long long a, b;
    cin >> a >> b;
   
    if (a > b) {
        swap(a, b);
    }
    
    cout << ((b-a+1)*(b+a)/2);
    
    
    return 0;
}