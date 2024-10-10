#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    stack<int> stk;
    for(int i=0; i<n; i++) {
        bool is_vps=true;
        string a;
        cin >> a;
        
        for(int j=0; j<a.size(); j++) {
            stk.push(a[j]);
        }
        
        int cnt = 0;
        for(int j=0; j<a.size(); j++) {
            char im = stk.top();
            if(im == '(' && cnt == 0) {
                is_vps = false;
            }
                if(im == ')') {
                    cnt ++;
                    stk.pop();
                } 
                if(im == '(') {
                    cnt --;
                    stk.pop();
                }
        }
        if(cnt != 0) is_vps=false;
        
        if(is_vps) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}