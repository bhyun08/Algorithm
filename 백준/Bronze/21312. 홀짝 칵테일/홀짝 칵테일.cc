#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    int re = -1;
    cin >> a >> b >> c;
    
    vector<int> vec(7);
    
    vec[0] = a;
    vec[1] = b;
    vec[2] = c;
    vec[3] = a * b;
    vec[4] = b * c;
    vec[5] = a * c;
    vec[6] = a * b * c;
    
    int max = -1;
    for (int i = 0; i < 7; i++) 
    {
        if (vec[i] % 2 != 0) 
        {
            if (vec[i] > max) 
            {
                max = vec[i];
            }
        }
    }
    
    if (max == -1) 
    {
        for (int i = 0; i < 7; i++) 
        {
            if (vec[i] > max) 
            {
                max = vec[i];
            }
        }
    }
    
    re = max;
    cout << re;
    return 0;
}
