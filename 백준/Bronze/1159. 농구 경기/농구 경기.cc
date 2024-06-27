#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    vector<int> vec(26,0);
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        string a;
        cin >> a;
        vec[int(a[0]-'a')]++;
    }
    
    bool a=false;
    
    for(int i=0; i<26; i++)
    {
        if(vec[i]>=5) {
          cout << char(i+'a'); 
          a = true;
        }
    }
    
    if(a==false) cout<<"PREDAJA";
    return 0;
}