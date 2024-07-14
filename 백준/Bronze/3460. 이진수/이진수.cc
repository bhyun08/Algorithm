#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        
        vector<int> two;
        
	    while (a > 0) 
	    {
		    two.push_back(a % 2);
		    a /= 2;
	    }
	    
	    for(int j=0; j<two.size(); j++)
	    {
	        if(two[j]==1)
	        {
	            cout << j <<" ";
	        }
	    }
	    cout << "\n";
    }
    
    return 0;
}