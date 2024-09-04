#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    queue<int> que;
    
    for(int i=1; i<=n; i++) {
        que.push(i);
    }
    
    while(que.size() > 1){
        que.pop();
        
        int a = que.front();
        que.pop();
        
        que.push(a);
    }
    
    cout << que.front();

    return 0;
}