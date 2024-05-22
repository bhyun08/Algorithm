#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> vec;
    for(int i=0; i<3; i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}