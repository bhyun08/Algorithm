#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> vec(10);
    
    for(int i=0; i<10; i++) {
        cin >> vec[i];
    }

    int sum = 0;
    for(int i=0; i<10; i++) {
        if((sum + vec[i]) > 100) {
            int diff_1 = 100 - sum;
            int diff_2 = (sum+vec[i])-100;
            
            if(diff_1 < diff_2) break;
        } 
        sum += vec[i]; 
    }
    
    cout << sum;
    return 0;
}