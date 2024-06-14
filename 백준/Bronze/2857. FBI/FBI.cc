#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    bool c=false;
    for(int i=0; i<5; i++)
    {
        string a;
        cin >> a;
        int b = -1;
        b = a.find("FBI");
        if(b > -1)
        {
            c = true;
            cout << i+1 <<" ";
        }
    }
    if(c == false) cout <<"HE GOT AWAY!";
    return 0;
}