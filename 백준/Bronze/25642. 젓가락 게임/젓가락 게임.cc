#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    
    for(int i=1; ;i++) {
        if(i % 2 != 0) {
            m = n+m;
            if(m >= 5) {
                cout << "yt";
                return 0;
            }
        }
        else {
            n = n+m;
            if(n >=5) {
                cout << "yj";
                return 0;
            }
        }
    }

    return 0;
}