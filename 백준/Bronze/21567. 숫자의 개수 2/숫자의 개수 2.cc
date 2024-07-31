#include <bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;
    long long sum = static_cast<long long>(a) * b * c;
    
    string str = to_string(sum);
    
    vector<int> vec(10, 0);  
    
    for(int i = 0; i < str.size(); i++) {
        int az = str[i] - '0';  
        vec[az]++;
    }

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
    return 0;
}
