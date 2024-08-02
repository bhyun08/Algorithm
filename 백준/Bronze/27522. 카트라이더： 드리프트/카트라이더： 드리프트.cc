#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    map<int, char> map1;
    for(int i=0; i<8; i++) {
        int m,ss,sss;
        char a,b,team;
        cin >> m >> a >> ss >> b >> sss >> team;
        
        int sum = (m*60*1000)+(ss*1000)+sss;
        map1.insert(make_pair(sum,team));
    }
    
    vector<pair<int,char>> vec(map1.begin(), map1.end());

    
    int B=0;
    int R=0;
    int score=6;
    for(int i=0; i<8; i++) {
        if(vec[i].second=='B') {
            if(i==0) B+=10;
            if(i==1) B+=8;
            B += score;
        }
        if(vec[i].second=='R') {
            if(i==0) R+=10;
            if(i==1) R+=8;
            R += score;
        }
        
        if(i>1) score--;
    }

    if(R > B) cout << "Red";
    if(R < B) cout << "Blue";
    return 0;
}