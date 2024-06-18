#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vector<int> vec(a);
        int sum = 0;
        
        for(int j=0; j<a; j++)
        {
            cin >> vec[j];
            sum += vec[j];
        }
        
        double avg = static_cast<double>(sum) / a;
        int cnt=0;
        
        for(int j=0; j<a; j++)
        {
            if(vec[j]>avg)
            {
                cnt ++;
            }
        }
        double per = (static_cast<double>(cnt) / a) * 100;
        
        cout << fixed;
        cout.precision(3);
        cout << per << "%\n";
    }
    
    return 0;
}