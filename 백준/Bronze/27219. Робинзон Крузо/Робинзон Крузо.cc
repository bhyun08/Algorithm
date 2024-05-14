#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin>>a;
    int j=a/5;
    int k=a%5;
    for(int i=0; i<j; i++)
    {
        cout<<"V";
    }
    for(int i=0; i<k; i++)
    {
        cout<<"I";
    }
    return 0;
}