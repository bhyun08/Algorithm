#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());
    auto it = unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());
    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    
    return 0;
}
