#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    vector<int> vec(3,0);
    cin >> n;
    
    string a;
    cin >> a;
    
    for(int i=0; i<a.size(); i++) {
        if(a[i]=='B') vec[0]++;
        if(a[i]=='S') vec[1]++;
        if(a[i]=='A') vec[2]++;
    }
    
    if(vec[0]==vec[1] && vec[1]==vec[2]) {
        cout << "SCU";
        return 0;
    }
    
    for(int i=0; i<3; i++) {
        int max = *max_element(vec.begin(), vec.end());
        if(vec[i]==max) {
            if(i==0) cout << "B";
            if(i==1) cout << "S";
            if(i==2) cout << "A";
        }
    }

    return 0;
}