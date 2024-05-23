#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int have,n,snack;
    cin>>have>>n>>snack;
    int result=have*n-snack;
    if(result<0) result=0;
    cout<<result;
    return 0;
}