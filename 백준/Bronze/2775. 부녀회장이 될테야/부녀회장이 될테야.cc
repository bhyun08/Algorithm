#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<vector<int>> vec(15, vector<int>(15, 0));
    
    for(int i=0; i<15; i++) {
        for(int j=0; j<15; j++) {
            if(i == 0) vec[i][j] = j + 1; 
            else if(j == 0) vec[i][j] = 1; 
            else vec[i][j] = vec[i][j-1] + vec[i-1][j]; 
        }
    }
    
    while(n--) {
        int f, r;
        cin >> f >> r;
        cout << vec[f][r-1] << "\n"; 
    }

    return 0;
}
