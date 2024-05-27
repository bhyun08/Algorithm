#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int cnt=0;
    bool in_word=false;
    string str;
    getline(cin,str);
    
    
    for(int i=0; i<str.size(); i++)
    {
        if (str[i] != ' ') { 
            if (!in_word) { 
                cnt++; 
                in_word = true; 
            }
        } else { 
            in_word = false; 
        }
    }
    cout << cnt;
    return 0;
}