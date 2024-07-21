#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> run(2);
    vector<int> trick(5);
    
    int n;
    cin >> n;
    
    vector<int> score(n);
    
    for(int i=0; i<n; i++) {
        int runMax = -1;
        for(int j=0; j<2; j++) {
            cin >> run[j];
            if(run[j] > runMax) runMax = run[j];
        }
        for(int k=0; k<5; k++) {
            cin >> trick[k];
        }
        
        sort(trick.begin(), trick.end());
    
        int sum = runMax + trick[3] + trick[4];
        score[i] = sum;
    }
    
    sort(score.begin(), score.end());
    
    cout << score[n-1];
    return 0;
}