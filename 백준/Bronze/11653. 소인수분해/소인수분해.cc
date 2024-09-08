#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; 
    cin >> n;
    
    vector<int> vec;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            vec.push_back(i);
        }
    }
    
    for(int i=0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
    return 0;
}