#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        double a;
        cin >> a;
        cout << fixed; 
	    cout.precision(2);
        cout << "$" << a*0.8 << "\n"; 
    }
    
    return 0;
}