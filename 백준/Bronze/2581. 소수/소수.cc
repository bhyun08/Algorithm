#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int min,max;
    cin >> min >> max;
    
    int sum = 0;
    int primeMin = INT_MAX;
    for(int i=min; i<=max; i++) {
        bool is_prime = true;
        for(int j = i-1; j > 1; j--) {
            if(i % j == 0) is_prime = false;
        }
        
        if(i == 1) is_prime = false; 
        
        if(is_prime) {
            sum += i;
            if(primeMin > i) primeMin = i;
        }
    }
    
    if(sum == 0) cout << -1;
    else cout << sum << "\n" << primeMin;
    
    return 0;
}