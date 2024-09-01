#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    a = a*b*c;
    
    string str = to_string(a);
    
    vector<int> vec(10,0);
    for(int i=0; i<str.size(); i++) {
        b = str[i] - '0';
        vec[b]++;
    }
    
    for(int i=0; i < 10; i++) {
        cout << vec[i] <<"\n";
    }

    return 0;
}