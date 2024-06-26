#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int sum=0;
        int min=1000;
        
        for(int j=0; j<7; j++)
        {
            int a;
            cin >> a;
            if (a%2==0)
            {
                if(a < min) min = a;
                sum += a;
            }
        }
        
        cout << sum << " " << min << "\n";
    }
}