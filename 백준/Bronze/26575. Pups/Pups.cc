#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    double num;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        double b,c,dog;
        cin>>b>>c>>dog;
        num=b*c*dog;
        cout<<"$" << fixed << setprecision(2) << num << endl;
    }
    return 0;
}