#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    
    sort(vec.begin(), vec.end());
    
    for(int i=1; i<n; i++) {
        vec[i] += vec[i-1];
    }
    
    cout << accumulate(vec.begin(), vec.end(), 0);

    return 0;
}