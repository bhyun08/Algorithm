#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    
    vector<pair<int, int>> vec;
    for(int i=0; i<n; i++) {
        int a,b;
        cin >> a >> b;
        vec.push_back(make_pair(a,b));
    }
    
    sort(vec.begin(), vec.end(), comp);
    
    int cnt = 1;
    int start = vec[0].first, end = vec[0].second;
    for(int i=1; i<n; i++) {
        if(vec[i].first >= end) {
            start = vec[i].first;
            end = vec[i].second;
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}