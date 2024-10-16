#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<long long> vec(n+1);
    vec[0] = 1;
    vec[1] = 2;
    vec[2] = 3;
    
    for(int i=3; i < n; i++) {
        vec[i] = (vec[i-1] + vec[i-2]) % 10007;
    }
    
    cout << vec[n-1];
    return 0;
}