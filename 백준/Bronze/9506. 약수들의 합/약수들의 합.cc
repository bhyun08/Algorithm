#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    while(1) {
        int n;
        cin >> n;
        if(n == -1) return 0;
        
        vector<int> vec;
        
        for(int i = 1; i < n; i++) {
            if(n % i == 0) vec.push_back(i);
        }
        
        vec.erase(unique(vec.begin(),vec.end()),vec.end());
        
        int sum = 0;
        for(int i = 0; i < vec.size(); i++) {
            sum += vec[i];
        }
        
        if(sum == n) {
            cout << n << " = ";
            for(int i = 0; i < vec.size(); i++) {
                cout << vec[i];
                if(i != vec.size()-1) cout << " + ";
            }
            cout <<"\n";
        }
        
        else cout << n <<" is NOT perfect.\n";
        
    }

}