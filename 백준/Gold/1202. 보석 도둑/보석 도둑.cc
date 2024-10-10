#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,k;
    
    cin >> n >> k;
    
    priority_queue<int> pq;
    vector<pair<int, int>> vec;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        vec.push_back({a,b});
    }
    
    vector<int> vec2;
    for(int i = 0; i < k; i++) {
        int a;
        cin >> a;
        vec2.push_back(a);
    }
    sort(vec2.begin(), vec2.end());
    sort(vec.begin(), vec.end());
    
    long long sum = 0;
    int a=0;
    for(int i = 0; i < k; i++) {
            for(int j = a; j < n; j++) {
                if(vec[j].first <= vec2[i]) {
                    pq.push(vec[j].second);
                    a++;
                }
                if(vec[j].first > vec2[i]) break;
            }
        if(pq.empty()) continue;
        sum += pq.top();
        pq.pop();
    }
    
    cout << sum;
    return 0;
}