#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int m,d;
    cin >> m >> d;
    
    vector<int> vec = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    int today = 0;
    for(int i=0; i<m-1; i++) {
        today += vec[i];
    }
    
    today += d;
    
    today %= 7;
    
    vector<string> vec1 = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    
    cout << vec1[today];
    return 0;
    
    
}