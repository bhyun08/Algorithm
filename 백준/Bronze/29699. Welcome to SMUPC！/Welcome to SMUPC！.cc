#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin>>a;
    char b[20]={"WelcomeToSMUPC"};
    int sum = a%14;
    if(sum == 0) sum = 14; 
    cout << b[sum - 1];
    return 0;
}