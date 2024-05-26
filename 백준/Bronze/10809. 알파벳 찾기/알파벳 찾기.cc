#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> vec(26,-1);
    
    string str;
    cin >> str;
    
    for(int i=0; i<str.size(); i++)
    {
        if(vec[str[i] - 'a'] == -1)
        {
            int a=str[i]-'a';
            vec[a]=i;
        }
        else continue;
    }
    
    for(int i = 0; i < 26; i++) {
        cout << vec[i] << " ";
    }
    return 0;
}