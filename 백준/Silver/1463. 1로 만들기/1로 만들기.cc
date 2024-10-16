#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> toOne(n + 1, 0);

    for (int i = 2; i <= n; i++) {
		toOne[i] = toOne[i - 1] + 1;
        
        if (i % 3 == 0)	toOne[i] = min(toOne[i], toOne[i/3] + 1);
		if (i % 2 == 0) toOne[i] = min(toOne[i], toOne[i/2] + 1);

	}
    
    cout << toOne[n];
    return 0;
}