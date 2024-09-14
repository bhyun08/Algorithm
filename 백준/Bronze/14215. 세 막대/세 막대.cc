#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> vec(3);
    for(int i=0; i<3; i++) {
        cin >> vec[i];
    }
    
    sort(vec.begin(),vec.end());
    if(vec[2] < vec[1] + vec[0]) cout << vec[0] + vec[1] + vec[2];
    else {
        while(vec[2] >= vec[1] + vec[0]){
            vec[2]--;
        }
        cout << vec[0] + vec[1] + vec[2];
    }

    return 0;
}