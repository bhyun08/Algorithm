#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int avg=0;
    for(int i=0; i<5; i++)
    {
        int a;
        cin>>a;
        if(a<40) a=40;
        avg += a;
    }
    avg /= 5;
    cout<<avg;
    return 0;
}