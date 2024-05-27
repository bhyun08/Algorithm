#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str1,str2;
    cin >> str1 >> str2;
    
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int num1=stoi(str1);
    int num2=stoi(str2);
    
    if(num1>num2) cout << num1;
    else if(num1==num2) cout << num1;
    else cout << num2;
    
    return 0;
}