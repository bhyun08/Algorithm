#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin >> a >> b >> c;
    
    cout << a+b-c << "\n";
    string a1 = to_string(a);
    string b1 = to_string(b);
    a1 = a1+b1;
    int num = stoi(a1);
    cout << num-c;
    
    return 0;
}