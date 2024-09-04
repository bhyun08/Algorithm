#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,del;
    cin >> n >> del;
    
    queue<int> que;
    vector<int> vec;
    
    for(int i=1; i<=n; i++) {
        que.push(i);
    }
    
    while(que.size() > 0) {
        
        for(int i=0; i<del-1; i++) {
            int a = que.front();
            que.pop();
            que.push(a);
        }
        
        int a = que.front();
        que.pop();
        vec.push_back(a);
    }
    
    cout<< "<";
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i];
        if(i != vec.size()-1) cout <<", ";
    }
    cout<< ">";
    
    return 0;
}