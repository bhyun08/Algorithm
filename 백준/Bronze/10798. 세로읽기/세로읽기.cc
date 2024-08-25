#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<string> vec(5);
    
    for(int i = 0; i < 5; i++) {
        cin >> vec[i];
    }
    
    string sum;
    
    int maxLength = 0;
    for (const auto& word : vec) {
        maxLength = max(maxLength, (int)word.size());
    }
    for(int i = 0; i < maxLength; i++) {
        for(int j = 0; j < 5; j++) {
            if (i < vec[j].size()) {
                string b = vec[j];
                sum += b[i];
            }
        }
    }
    
    cout << sum;
    return 0;
}