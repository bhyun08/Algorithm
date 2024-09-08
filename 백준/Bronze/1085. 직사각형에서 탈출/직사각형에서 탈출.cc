#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    
    vector<int> vec = {x, y, h-y, w-x};
    
    cout << *min_element(vec.begin(), vec.end());

    return 0;
}