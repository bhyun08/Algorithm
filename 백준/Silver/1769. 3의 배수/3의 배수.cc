#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string n;
    cin >> n;
    
    int cnt = 0;
    int de;
    bool isOne = false;
    
    if(n.length() < 2) isOne = true;
    
    while(1) {
        int sum = 0;
            
        for(int i = 0; i < n.size(); i++) {
            int a = n[i] - '0';
            sum += a;
        }
            
        n = to_string(sum);
        de = stoi(n);
            
        cnt ++;
            
        if(de < 10) break;
    }
    
    if(isOne == true) cnt = 0;
    if(de % 3 == 0) cout << cnt << "\nYES";
    else cout << cnt << "\nNO";
    return 0;
}