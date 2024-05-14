#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    int num;
    char ans;
    cin>>str>>num;
    for(int i=0; i<str.length(); i++)
    {
       if(i+1==num)
       {
           ans = str[i];
       }
    }
    cout<<ans;
    return 0;
}