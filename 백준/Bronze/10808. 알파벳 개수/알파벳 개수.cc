#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> vec1(26,0);
    
    string str;
    cin>>str;
    
    
    for(int i=0; i<str.size(); i++)
    {
        int index=str[i]-'a';
        vec1[index]++;
    }
    
    for(int i=0; i<vec1.size(); i++)
    {
        cout<<vec1[i]<<" ";
    }
    
    return 0;
}