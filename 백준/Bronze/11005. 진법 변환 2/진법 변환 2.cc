#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string arr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    long long n; 
    int zinbub;
    cin >> n >> zinbub;
    
    string re;

    if (n == 0) {
        re = "0";
    } else {
        while(n > 0) {
            int s = n % zinbub; 
            re += arr[s]; 
            n /= zinbub; 
        }
    }
    
    reverse(re.begin(), re.end()); 
    cout << re; 
    return 0;
}
