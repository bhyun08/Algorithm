#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    while(1)
    {
        string str;
        getline(cin,str);
        string str_cy(str.size(),'a');
        
        if(str=="END") break;
        
        for(int i=str.size(); i>0; i--)
        {
            str_cy[str.size()-i]=str[i-1];
        }
        
        cout<<str_cy<<"\n";
    }
    return 0;
}