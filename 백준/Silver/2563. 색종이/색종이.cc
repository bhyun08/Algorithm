#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int arr[100][100]={0,};
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int a,b;
        cin >> a >> b;
        
        for(int j=b; j < b+10; j++) {
            for(int k=a; k < a+10; k++) {
                arr[j][k] = 1;
            }
        }
    }
    
    int cnt = 0;
    for(int i=0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(arr[i][j] == 1) cnt ++;
        }
    }
    
    cout << cnt;

    return 0;
}