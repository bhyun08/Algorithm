#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> basket(n);
    for(int i = 0; i < n; i++) {
        basket[i] = i + 1;
    }
    
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        
        a -= 1;
        b -= 1;
        
        while (a < b) {
            swap(basket[a], basket[b]);   
            a++;
            b--;
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << basket[i] << " ";
    }
    return 0;
}
