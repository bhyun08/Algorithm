#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string a;
    int cnt = 0;
    while(1)
    {  
        getline(cin, a);
        if(a == "#") break; 
        for(int i = 0; i < a.length(); i++)
        {
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
               a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
                cnt++;
            }
        }
        cout << cnt << '\n';  
        cnt = 0;  
    }
    return 0;
}
