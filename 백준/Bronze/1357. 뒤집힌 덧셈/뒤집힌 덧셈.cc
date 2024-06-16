#include <bits/stdc++.h>
using namespace std;

int rev(int n) {
	string a = to_string(n);
	reverse(a.begin(), a.end());
	return atoi(a.c_str());
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b;
    cin >> a >> b;
    
    int newa = rev(a);
    int newb = rev(b);
    
    int e = rev(newa + newb);
    
    cout << e;
    return 0;
}