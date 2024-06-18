#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec(9);
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> vec[i];
        sum += vec[i];
    }

    bool found = false;
    for (int i = 0; i < 9 && !found; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - vec[i] - vec[j] == 100) {
                vec[i] = vec[j] = 0; 
                found = true;
                break;
            }
        }
    }

    sort(vec.begin(), vec.end());
    for (int i = 2; i < 9; i++) {
        cout << vec[i] << "\n";
    }

    return 0;
}
