#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int max_sum = 0;
    
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            for(int k = j+1; k < n; k++) {
                int sum = vec[i] + vec[j] + vec[k];
                if(sum <= m && sum > max_sum) {
                    max_sum = sum;
                }
            }
        }
    }
    
    cout << max_sum;
    
    return 0;
}
