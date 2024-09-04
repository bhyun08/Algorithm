#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    int line=1;
    while(n > line) {
        n -= line;
        line ++;
    }
    
    if (line % 2 == 0)
        cout << n << '/' << (line+1)-n << "\n";
	else
		cout << (line+1)-n << '/' << n << "\n";	

    return 0;
}