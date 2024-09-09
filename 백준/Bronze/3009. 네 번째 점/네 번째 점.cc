#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> vec1(3);
    vector<int> vec2(3);
    
    for(int i=0; i<3; i++) {
        cin >> vec1[i] >> vec2[i];
    }
    
    int a,b;
    if(vec1[0]==vec1[1]) a = vec1[2];
    else if(vec1[0]==vec1[2]) a = vec1[1];
    else a = vec1[0];
    
    if(vec2[0]==vec2[1]) b = vec2[2];
    else if(vec2[0]==vec2[2]) b = vec2[1];
    else b = vec2[0];

    cout << a <<" "<< b;
    return 0;
}