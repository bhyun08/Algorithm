#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    string n;
    cin >> n;
    
    vector<int> vec(10,0);
    for(int i = 0; i < n.size(); i++) {
        int a = n[i] - '0';
        vec[a]++;
    }
    
    int sixNine = vec[9] + vec[6];
    if(sixNine % 2 != 0) sixNine++;
    vec[6] = sixNine/2;
    vec[9] = 0;
    
    int max = *max_element(vec.begin(), vec.end());
    cout << max;

    return 0;
}