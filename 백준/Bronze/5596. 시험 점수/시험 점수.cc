#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> vec1(4);
    vector<int> vec2(4);
    int sum1=0;
    int sum2=0;
    
    for(int i=0; i<4; i++)
    {
        cin >> vec1[i];
        sum1 += vec1[i];
    }
    
    for(int i=0; i<4; i++)
    {
        cin >> vec2[i];
        sum2 += vec2[i];
    }
    
    if(sum1 > sum2) cout << sum1;
    else if(sum1 < sum2) cout << sum2;
    else cout << sum1;
    
    return 0;
}